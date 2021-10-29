## What is Bdcash Protocol?
It is a peer-to-peer project based on and forked PIVX code with proof-of-stake consensus and masternode, but with major changes to its protocol, making our code unique allowing for faster transactions and relatively low fees.

[![GitHub release (latest by date)](https://img.shields.io/github/v/release/BdcashProtocol/bdcash-protocol?color=%24000ace&cacheSeconds=3600)](https://github.com/BdcashProtocol/bdcash-protocol/releases)
[![GitHub Release Date](https://img.shields.io/github/release-date/BdcashProtocol/bdcash-protocol?color=%24000ace&cacheSeconds=3600)](https://github.com/BdcashProtocol/bdcash-protocol/releases)
<img alt="open collective badge" src="https://opencollective.com/bdcash-protocol-project/tiers/sponsor/badge.svg?label=sponsor&color=brightgreen" />
### Coin Specs

Coin Name | Bdcash Protocol
:--- | :---
Ticker | BDCASH
Block time | 60 seconds
Maximum supply | 15,000,000(15M) 
Consensus mechanism | Proof-of-Stake / Masternode
Algorithm | Quark
Collateral | 5,000 
RPC/P2P main Port | 36264/36263
RPCP2P testnet Port | 37264 / 37263

### Reward Schema

From | To | Rewards | Masternode | Staker |
---: | ---: | ---: | ---: | ---: |
0         | 1         | 1,000,000   | 0%  | 0%  
2     | 10000    | 1      | 0% | 0% 
10001     | 19999    | 2     | 75% | 25% 
20000     | 29999    | 3     | 75% | 25% 
30000     | 39999    | 1     | 75% | 25% 
40000     | 59999    | 4     | 75% | 25% 
60000     | 79999    | 3     | 75% | 25% 
80000     | 99999    | 2     | 75% | 25%
100000    | 149999   | 1     | 75% | 25% 
150000    | 199999   | 0.75  | 80% | 20% 
200000    | 299999   | 0.5   | 90% | 10% 
300000    | to end   | 0.25  | 70% | 30% 

### Social Network
 
Twitter:  https://twitter.com/bdcashprotocol 

ANN Official:  https://bitcointalk.org/index.php?topic=5244522 

Discord:  https://discord.gg/rrr8vFS 

Reddit:  https://www.reddit.com/r/BigdataCash/ 

Telegram Official: https://t.me/bdcashprotocol_official

### Market/ Price  Data 
Coinpaprika:  https://coinpaprika.com/coin/bdcash-bigdatacash/

Coingecko: https://coingecko.com/coins/bigdata-cash/

Coinlore  https://www.coinlore.com/coin/bigdatacash

CoinmarketCap https://coinmarketcap.com/currencies/bigdatacash/

Coinlib: https://coinlib.io/coin/BDCASH/BigDataCash/

Livecoinwatch : https://www.livecoinwatch.com/price/BigdataCash-BDCASH

## Install with bash script
If you're on Ubuntu you can install the wallet with our `install.sh` script.

Just open a terminal and run following commands:

```
sudo apt update
git clone https://github.com//BdcashProtocol/bdcash-protocol bdcash
cd bdcash
sudo chmod +x install.sh
./install.sh
```
