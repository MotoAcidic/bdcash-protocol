#include <amount.h>
#include <util.h>

CAmount CollateralRequired()
{
    const CAmount nCollateralRequired = 1000000 * COIN; //1m collateral
    return nCollateralRequired;
}