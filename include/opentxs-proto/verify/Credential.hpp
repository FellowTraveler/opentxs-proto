/************************************************************
 *
 *                 OPEN TRANSACTIONS
 *
 *       Financial Cryptography and Digital Cash
 *       Library, Protocol, API, Server, CLI, GUI
 *
 *       -- Anonymous Numbered Accounts.
 *       -- Untraceable Digital Cash.
 *       -- Triple-Signed Receipts.
 *       -- Cheques, Vouchers, Transfers, Inboxes.
 *       -- Basket Currencies, Markets, Payment Plans.
 *       -- Signed, XML, Ricardian-style Contracts.
 *       -- Scripted smart contracts.
 *
 *  EMAIL:
 *  fellowtraveler@opentransactions.org
 *
 *  WEBSITE:
 *  http://www.opentransactions.org/
 *
 *  -----------------------------------------------------
 *
 *   LICENSE:
 *   This Source Code Form is subject to the terms of the
 *   Mozilla Public License, v. 2.0. If a copy of the MPL
 *   was not distributed with this file, You can obtain one
 *   at http://mozilla.org/MPL/2.0/.
 *
 *   DISCLAIMER:
 *   This program is distributed in the hope that it will
 *   be useful, but WITHOUT ANY WARRANTY; without even the
 *   implied warranty of MERCHANTABILITY or FITNESS FOR A
 *   PARTICULAR PURPOSE.  See the Mozilla Public License
 *   for more details.
 *
 ************************************************************/

#ifndef OPENTXS_PROTO_CREDENTIAL_HPP
#define OPENTXS_PROTO_CREDENTIAL_HPP

#include "VerifyCredentials.hpp"

namespace opentxs
{
namespace proto
{
bool CheckProto_1(
    const Credential& serializedCred,
    const bool silent,
    const KeyMode& mode = KEYMODE_ERROR,
    const CredentialRole role = CREDROLE_ERROR,
    const bool withSigs = true);
bool CheckProto_2(
    const Credential& serializedCred,
    const bool silent,
    const KeyMode& mode = KEYMODE_ERROR,
    const CredentialRole role = CREDROLE_ERROR,
    const bool withSigs = true);
bool CheckProto_3(
    const Credential& serializedCred,
    const bool silent,
    const KeyMode& mode = KEYMODE_ERROR,
    const CredentialRole role = CREDROLE_ERROR,
    const bool withSigs = true);
bool CheckProto_4(
    const Credential& serializedCred,
    const bool silent,
    const KeyMode& mode = KEYMODE_ERROR,
    const CredentialRole role = CREDROLE_ERROR,
    const bool withSigs = true);
bool CheckProto_5(
    const Credential&,
    const bool,
    const KeyMode& mode = KEYMODE_ERROR,
    const CredentialRole role = CREDROLE_ERROR,
    const bool withSigs = true);
bool CheckProto_6(
    const Credential&,
    const bool,
    const KeyMode& mode = KEYMODE_ERROR,
    const CredentialRole role = CREDROLE_ERROR,
    const bool withSigs = true);
bool CheckProto_7(
    const Credential&,
    const bool,
    const KeyMode& mode = KEYMODE_ERROR,
    const CredentialRole role = CREDROLE_ERROR,
    const bool withSigs = true);
bool CheckProto_8(
    const Credential&,
    const bool,
    const KeyMode& mode = KEYMODE_ERROR,
    const CredentialRole role = CREDROLE_ERROR,
    const bool withSigs = true);
bool CheckProto_9(
    const Credential&,
    const bool,
    const KeyMode& mode = KEYMODE_ERROR,
    const CredentialRole role = CREDROLE_ERROR,
    const bool withSigs = true);
bool CheckProto_10(
    const Credential&,
    const bool,
    const KeyMode& mode = KEYMODE_ERROR,
    const CredentialRole role = CREDROLE_ERROR,
    const bool withSigs = true);
bool CheckProto_11(
    const Credential&,
    const bool,
    const KeyMode& mode = KEYMODE_ERROR,
    const CredentialRole role = CREDROLE_ERROR,
    const bool withSigs = true);
bool CheckProto_12(
    const Credential&,
    const bool,
    const KeyMode& mode = KEYMODE_ERROR,
    const CredentialRole role = CREDROLE_ERROR,
    const bool withSigs = true);
bool CheckProto_13(
    const Credential&,
    const bool,
    const KeyMode& mode = KEYMODE_ERROR,
    const CredentialRole role = CREDROLE_ERROR,
    const bool withSigs = true);
bool CheckProto_14(
    const Credential&,
    const bool,
    const KeyMode& mode = KEYMODE_ERROR,
    const CredentialRole role = CREDROLE_ERROR,
    const bool withSigs = true);
bool CheckProto_15(
    const Credential&,
    const bool,
    const KeyMode& mode = KEYMODE_ERROR,
    const CredentialRole role = CREDROLE_ERROR,
    const bool withSigs = true);
bool CheckProto_16(
    const Credential&,
    const bool,
    const KeyMode& mode = KEYMODE_ERROR,
    const CredentialRole role = CREDROLE_ERROR,
    const bool withSigs = true);
bool CheckProto_17(
    const Credential&,
    const bool,
    const KeyMode& mode = KEYMODE_ERROR,
    const CredentialRole role = CREDROLE_ERROR,
    const bool withSigs = true);
bool CheckProto_18(
    const Credential&,
    const bool,
    const KeyMode& mode = KEYMODE_ERROR,
    const CredentialRole role = CREDROLE_ERROR,
    const bool withSigs = true);
bool CheckProto_19(
    const Credential&,
    const bool,
    const KeyMode& mode = KEYMODE_ERROR,
    const CredentialRole role = CREDROLE_ERROR,
    const bool withSigs = true);
bool CheckProto_20(
    const Credential&,
    const bool,
    const KeyMode& mode = KEYMODE_ERROR,
    const CredentialRole role = CREDROLE_ERROR,
    const bool withSigs = true);
}  // namespace proto
}  // namespace opentxs

#endif  // OPENTXS_PROTO_CREDENTIAL_HPP
