// Copyright (c) 2018 The Open-Transactions developers
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include "opentxs-proto/Types.hpp"
#include "opentxs-proto/Check.hpp"

#include <iostream>

#define PROTO_NAME "server contract"

namespace opentxs::proto
{
bool CheckProto_1(const ServerContract& input, const bool silent)
{
    CHECK_IDENTIFIER(id);
    CHECK_IDENTIFIER(nymid);
    CHECK_NAME(name);
    OPTIONAL_SUBOBJECT(publicnym, ServerContractAllowedCredentialIndex);
    CHECK_HAVE(address);
    CHECK_SUBOBJECTS(address, ServerContractAllowedListenAddress);
    CHECK_KEY(transportkey);
    CHECK_SUBOBJECT(signature, ServerContractAllowedSignature);

    return true;
}

bool CheckProto_2(const ServerContract& input, const bool silent)
{
    return CheckProto_1(input, silent);
}

bool CheckProto_3(const ServerContract& input, const bool silent)
{
    UNDEFINED_VERSION2(3)
}

bool CheckProto_4(const ServerContract& input, const bool silent)
{
    UNDEFINED_VERSION2(4)
}

bool CheckProto_5(const ServerContract& input, const bool silent)
{
    UNDEFINED_VERSION2(5)
}

bool CheckProto_6(const ServerContract& input, const bool silent)
{
    UNDEFINED_VERSION2(6)
}

bool CheckProto_7(const ServerContract& input, const bool silent)
{
    UNDEFINED_VERSION2(7)
}

bool CheckProto_8(const ServerContract& input, const bool silent)
{
    UNDEFINED_VERSION2(8)
}

bool CheckProto_9(const ServerContract& input, const bool silent)
{
    UNDEFINED_VERSION2(9)
}

bool CheckProto_10(const ServerContract& input, const bool silent)
{
    UNDEFINED_VERSION2(10)
}

bool CheckProto_11(const ServerContract& input, const bool silent)
{
    UNDEFINED_VERSION2(11)
}

bool CheckProto_12(const ServerContract& input, const bool silent)
{
    UNDEFINED_VERSION2(12)
}

bool CheckProto_13(const ServerContract& input, const bool silent)
{
    UNDEFINED_VERSION2(13)
}

bool CheckProto_14(const ServerContract& input, const bool silent)
{
    UNDEFINED_VERSION2(14)
}

bool CheckProto_15(const ServerContract& input, const bool silent)
{
    UNDEFINED_VERSION2(15)
}

bool CheckProto_16(const ServerContract& input, const bool silent)
{
    UNDEFINED_VERSION2(16)
}

bool CheckProto_17(const ServerContract& input, const bool silent)
{
    UNDEFINED_VERSION2(17)
}

bool CheckProto_18(const ServerContract& input, const bool silent)
{
    UNDEFINED_VERSION2(18)
}

bool CheckProto_19(const ServerContract& input, const bool silent)
{
    UNDEFINED_VERSION2(19)
}

bool CheckProto_20(const ServerContract& input, const bool silent)
{
    UNDEFINED_VERSION2(20)
}
}  // namespace opentxs::proto
