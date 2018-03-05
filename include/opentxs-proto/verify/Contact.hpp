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

#ifndef OPENTXS_PROTO_CONTACT_HPP
#define OPENTXS_PROTO_CONTACT_HPP

#include "VerifyContacts.hpp"

namespace opentxs
{
namespace proto
{
bool CheckProto_1(const Contact& contact, const bool silent);
bool CheckProto_2(const Contact& contact, const bool silent);
bool CheckProto_3(const Contact&, const bool);
bool CheckProto_4(const Contact&, const bool);
bool CheckProto_5(const Contact&, const bool);
bool CheckProto_6(const Contact&, const bool);
bool CheckProto_7(const Contact&, const bool);
bool CheckProto_8(const Contact&, const bool);
bool CheckProto_9(const Contact&, const bool);
bool CheckProto_10(const Contact&, const bool);
bool CheckProto_11(const Contact&, const bool);
bool CheckProto_12(const Contact&, const bool);
bool CheckProto_13(const Contact&, const bool);
bool CheckProto_14(const Contact&, const bool);
bool CheckProto_15(const Contact&, const bool);
bool CheckProto_16(const Contact&, const bool);
bool CheckProto_17(const Contact&, const bool);
bool CheckProto_18(const Contact&, const bool);
bool CheckProto_19(const Contact&, const bool);
bool CheckProto_20(const Contact&, const bool);
}  // namespace proto
}  // namespace opentxs

#endif  // OPENTXS_PROTO_CONTACT_HPP
