// Copyright (c) 2017-2019 The PIVX developers
// Copyright (c) 2020 The Helio Coin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef Helio_Coin_BLOCKSIGNATURE_H
#define Helio_Coin_BLOCKSIGNATURE_H

#include "key.h"
#include "primitives/block.h"
#include "keystore.h"

bool SignBlockWithKey(CBlock& block, const CKey& key);
bool SignBlock(CBlock& block, const CKeyStore& keystore);
bool CheckBlockSignature(const CBlock& block);

#endif //Helio_Coin_BLOCKSIGNATURE_H
