// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2014 The Bitcoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "amount.h"
#include "spork.h"
#include "tinyformat.h"

CFeeRate::CFeeRate(const CAmount& nFeePaid, size_t nSize)
{
    if (IsSporkActive(SPORK_19_FEE_ADJUSTMENT) && ActiveProtocol() >= TIME_CHANGE && nSize > 0) {
        nSatoshisPerK = nFeePaid * 500 / nSize;
    } else if (!IsSporkActive(SPORK_19_FEE_ADJUSTMENT) && ActiveProtocol() < TIME_CHANGE && nSize > 0) {
        nSatoshisPerK = nFeePaid * 1000 / nSize;
    } else {
        nSatoshisPerK = 0;
    }
}

CAmount CFeeRate::GetFee(size_t nSize) const
{
    CAmount nFee = CalcFee;
    if (IsSporkActive(SPORK_19_FEE_ADJUSTMENT) && ActiveProtocol() >= TIME_CHANGE) {
        CalcFee = nSatoshisPerK * nSize / 500;
    } else if (!IsSporkActive(SPORK_19_FEE_ADJUSTMENT) && ActiveProtocol() < TIME_CHANGE) {
        CalcFee = nSatoshisPerK * nSize / 1000;
    }

    if (nFee == 0 && nSatoshisPerK > 0)
        nFee = nSatoshisPerK;

    return nFee;
}

std::string CFeeRate::ToString() const
{
    return strprintf("%d.%08d BDCASH/kB", nSatoshisPerK / COIN, nSatoshisPerK % COIN);
}
