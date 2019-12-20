// Copyright (c) 2020 The Open-Transactions developers
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wlanguage-extension-token"
#pragma GCC diagnostic ignored "-Wundef"
#pragma GCC diagnostic ignored "-Wdeprecated-dynamic-exception-spec"
#pragma GCC diagnostic ignored "-Wzero-as-null-pointer-constant"
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Winconsistent-missing-destructor-override"
#include "opentxs-proto/PaymentWorkflowEnums.pb.h"
#pragma GCC diagnostic pop

#include "opentxs-proto/verify/VerifyWorkflows.hpp"

namespace opentxs::proto
{
const EventTransportMap& PaymentEventAllowedTransportMethod() noexcept
{
    static const auto output = EventTransportMap{
        {{1, PAYMENTEVENTTYPE_CREATE},
         {TRANSPORTMETHOD_NONE, TRANSPORTMETHOD_OT}},
        {{1, PAYMENTEVENTTYPE_CONVEY},
         {TRANSPORTMETHOD_OT, TRANSPORTMETHOD_OOB}},
        {{1, PAYMENTEVENTTYPE_CANCEL}, {TRANSPORTMETHOD_OT}},
        {{1, PAYMENTEVENTTYPE_ACCEPT}, {TRANSPORTMETHOD_OT}},
        {{1, PAYMENTEVENTTYPE_COMPLETE}, {TRANSPORTMETHOD_OT}},
        {{2, PAYMENTEVENTTYPE_CREATE},
         {TRANSPORTMETHOD_NONE, TRANSPORTMETHOD_OT}},
        {{2, PAYMENTEVENTTYPE_CONVEY},
         {TRANSPORTMETHOD_OT, TRANSPORTMETHOD_OOB}},
        {{2, PAYMENTEVENTTYPE_CANCEL}, {TRANSPORTMETHOD_OT}},
        {{2, PAYMENTEVENTTYPE_ACCEPT}, {TRANSPORTMETHOD_OT}},
        {{2, PAYMENTEVENTTYPE_COMPLETE}, {TRANSPORTMETHOD_OT}},
        {{2, PAYMENTEVENTTYPE_ABORT},
         {TRANSPORTMETHOD_NONE, TRANSPORTMETHOD_OT}},
        {{2, PAYMENTEVENTTYPE_ACKNOWLEDGE}, {TRANSPORTMETHOD_OT}},
        {{3, PAYMENTEVENTTYPE_CREATE},
         {TRANSPORTMETHOD_NONE, TRANSPORTMETHOD_OT}},
        {{3, PAYMENTEVENTTYPE_CONVEY},
         {TRANSPORTMETHOD_OT, TRANSPORTMETHOD_OOB}},
        {{3, PAYMENTEVENTTYPE_CANCEL}, {TRANSPORTMETHOD_OT}},
        {{3, PAYMENTEVENTTYPE_ACCEPT}, {TRANSPORTMETHOD_OT}},
        {{3, PAYMENTEVENTTYPE_COMPLETE}, {TRANSPORTMETHOD_OT}},
        {{3, PAYMENTEVENTTYPE_ABORT},
         {TRANSPORTMETHOD_NONE, TRANSPORTMETHOD_OT}},
        {{3, PAYMENTEVENTTYPE_ACKNOWLEDGE}, {TRANSPORTMETHOD_OT}},
        {{3, PAYMENTEVENTTYPE_EXPIRE}, {TRANSPORTMETHOD_NONE}},
        {{3, PAYMENTEVENTTYPE_REJECT}, {TRANSPORTMETHOD_OT}},
    };

    return output;
}
const WorkflowEventMap& PaymentWorkflowAllowedEventTypes() noexcept
{
    static const auto output = WorkflowEventMap{
        {{1, PAYMENTWORKFLOWTYPE_OUTGOINGCHEQUE},
         {PAYMENTEVENTTYPE_CREATE,
          PAYMENTEVENTTYPE_CONVEY,
          PAYMENTEVENTTYPE_CANCEL,
          PAYMENTEVENTTYPE_ACCEPT,
          PAYMENTEVENTTYPE_COMPLETE}},
        {{1, PAYMENTWORKFLOWTYPE_INCOMINGCHEQUE},
         {PAYMENTEVENTTYPE_CONVEY, PAYMENTEVENTTYPE_ACCEPT}},
        {{1, PAYMENTWORKFLOWTYPE_OUTGOINGINVOICE},
         {PAYMENTEVENTTYPE_CREATE,
          PAYMENTEVENTTYPE_CONVEY,
          PAYMENTEVENTTYPE_CANCEL,
          PAYMENTEVENTTYPE_ACCEPT,
          PAYMENTEVENTTYPE_COMPLETE}},
        {{1, PAYMENTWORKFLOWTYPE_INCOMINGINVOICE},
         {PAYMENTEVENTTYPE_CONVEY, PAYMENTEVENTTYPE_ACCEPT}},
        {{2, PAYMENTWORKFLOWTYPE_OUTGOINGCHEQUE},
         {PAYMENTEVENTTYPE_CREATE,
          PAYMENTEVENTTYPE_CONVEY,
          PAYMENTEVENTTYPE_CANCEL,
          PAYMENTEVENTTYPE_ACCEPT,
          PAYMENTEVENTTYPE_COMPLETE}},
        {{2, PAYMENTWORKFLOWTYPE_INCOMINGCHEQUE},
         {PAYMENTEVENTTYPE_CONVEY, PAYMENTEVENTTYPE_ACCEPT}},
        {{2, PAYMENTWORKFLOWTYPE_OUTGOINGINVOICE},
         {PAYMENTEVENTTYPE_CREATE,
          PAYMENTEVENTTYPE_CONVEY,
          PAYMENTEVENTTYPE_CANCEL,
          PAYMENTEVENTTYPE_ACCEPT,
          PAYMENTEVENTTYPE_COMPLETE}},
        {{2, PAYMENTWORKFLOWTYPE_INCOMINGINVOICE},
         {PAYMENTEVENTTYPE_CONVEY, PAYMENTEVENTTYPE_ACCEPT}},
        {{2, PAYMENTWORKFLOWTYPE_OUTGOINGTRANSFER},
         {PAYMENTEVENTTYPE_CREATE,
          PAYMENTEVENTTYPE_ABORT,
          PAYMENTEVENTTYPE_ACKNOWLEDGE,
          PAYMENTEVENTTYPE_ACCEPT,
          PAYMENTEVENTTYPE_COMPLETE}},
        {{2, PAYMENTWORKFLOWTYPE_INCOMINGTRANSFER},
         {PAYMENTEVENTTYPE_CONVEY, PAYMENTEVENTTYPE_ACCEPT}},
        {{2, PAYMENTWORKFLOWTYPE_INTERNALTRANSFER},
         {PAYMENTEVENTTYPE_CREATE,
          PAYMENTEVENTTYPE_ABORT,
          PAYMENTEVENTTYPE_ACKNOWLEDGE,
          PAYMENTEVENTTYPE_CONVEY,
          PAYMENTEVENTTYPE_ACCEPT,
          PAYMENTEVENTTYPE_COMPLETE}},
        {{3, PAYMENTWORKFLOWTYPE_OUTGOINGCHEQUE},
         {PAYMENTEVENTTYPE_CREATE,
          PAYMENTEVENTTYPE_CONVEY,
          PAYMENTEVENTTYPE_CANCEL,
          PAYMENTEVENTTYPE_ACCEPT,
          PAYMENTEVENTTYPE_COMPLETE}},
        {{3, PAYMENTWORKFLOWTYPE_INCOMINGCHEQUE},
         {PAYMENTEVENTTYPE_CONVEY, PAYMENTEVENTTYPE_ACCEPT}},
        {{3, PAYMENTWORKFLOWTYPE_OUTGOINGINVOICE},
         {PAYMENTEVENTTYPE_CREATE,
          PAYMENTEVENTTYPE_CONVEY,
          PAYMENTEVENTTYPE_CANCEL,
          PAYMENTEVENTTYPE_ACCEPT,
          PAYMENTEVENTTYPE_COMPLETE}},
        {{3, PAYMENTWORKFLOWTYPE_INCOMINGINVOICE},
         {PAYMENTEVENTTYPE_CONVEY, PAYMENTEVENTTYPE_ACCEPT}},
        {{3, PAYMENTWORKFLOWTYPE_OUTGOINGTRANSFER},
         {PAYMENTEVENTTYPE_CREATE,
          PAYMENTEVENTTYPE_ABORT,
          PAYMENTEVENTTYPE_ACKNOWLEDGE,
          PAYMENTEVENTTYPE_ACCEPT,
          PAYMENTEVENTTYPE_COMPLETE}},
        {{3, PAYMENTWORKFLOWTYPE_INCOMINGTRANSFER},
         {PAYMENTEVENTTYPE_CONVEY, PAYMENTEVENTTYPE_ACCEPT}},
        {{3, PAYMENTWORKFLOWTYPE_INTERNALTRANSFER},
         {PAYMENTEVENTTYPE_CREATE,
          PAYMENTEVENTTYPE_ABORT,
          PAYMENTEVENTTYPE_ACKNOWLEDGE,
          PAYMENTEVENTTYPE_CONVEY,
          PAYMENTEVENTTYPE_ACCEPT,
          PAYMENTEVENTTYPE_COMPLETE}},
        {{3, PAYMENTWORKFLOWTYPE_OUTGOINGCASH},
         {PAYMENTEVENTTYPE_CREATE,
          PAYMENTEVENTTYPE_CONVEY,
          PAYMENTEVENTTYPE_EXPIRE}},
        {{3, PAYMENTWORKFLOWTYPE_INCOMINGCASH},
         {PAYMENTEVENTTYPE_CONVEY,
          PAYMENTEVENTTYPE_ACCEPT,
          PAYMENTEVENTTYPE_EXPIRE,
          PAYMENTEVENTTYPE_REJECT}},
        {{4, PAYMENTWORKFLOWTYPE_OUTGOINGCHEQUE},
         {PAYMENTEVENTTYPE_CREATE,
          PAYMENTEVENTTYPE_CONVEY,
          PAYMENTEVENTTYPE_CANCEL,
          PAYMENTEVENTTYPE_ACCEPT,
          PAYMENTEVENTTYPE_COMPLETE}},
        {{4, PAYMENTWORKFLOWTYPE_INCOMINGCHEQUE},
         {PAYMENTEVENTTYPE_CONVEY, PAYMENTEVENTTYPE_ACCEPT}},
        {{4, PAYMENTWORKFLOWTYPE_OUTGOINGINVOICE},
         {PAYMENTEVENTTYPE_CREATE,
          PAYMENTEVENTTYPE_CONVEY,
          PAYMENTEVENTTYPE_CANCEL,
          PAYMENTEVENTTYPE_ACCEPT,
          PAYMENTEVENTTYPE_COMPLETE}},
        {{4, PAYMENTWORKFLOWTYPE_INCOMINGINVOICE},
         {PAYMENTEVENTTYPE_CONVEY, PAYMENTEVENTTYPE_ACCEPT}},
        {{4, PAYMENTWORKFLOWTYPE_OUTGOINGTRANSFER},
         {PAYMENTEVENTTYPE_CREATE,
          PAYMENTEVENTTYPE_ABORT,
          PAYMENTEVENTTYPE_ACKNOWLEDGE,
          PAYMENTEVENTTYPE_ACCEPT,
          PAYMENTEVENTTYPE_COMPLETE}},
        {{4, PAYMENTWORKFLOWTYPE_INCOMINGTRANSFER},
         {PAYMENTEVENTTYPE_CONVEY, PAYMENTEVENTTYPE_ACCEPT}},
        {{4, PAYMENTWORKFLOWTYPE_INTERNALTRANSFER},
         {PAYMENTEVENTTYPE_CREATE,
          PAYMENTEVENTTYPE_ABORT,
          PAYMENTEVENTTYPE_ACKNOWLEDGE,
          PAYMENTEVENTTYPE_CONVEY,
          PAYMENTEVENTTYPE_ACCEPT,
          PAYMENTEVENTTYPE_COMPLETE}},
        {{4, PAYMENTWORKFLOWTYPE_OUTGOINGCASH},
         {PAYMENTEVENTTYPE_CREATE,
          PAYMENTEVENTTYPE_CONVEY,
          PAYMENTEVENTTYPE_EXPIRE}},
        {{4, PAYMENTWORKFLOWTYPE_INCOMINGCASH},
         {PAYMENTEVENTTYPE_CONVEY,
          PAYMENTEVENTTYPE_ACCEPT,
          PAYMENTEVENTTYPE_EXPIRE,
          PAYMENTEVENTTYPE_REJECT}},
        {{4, PAYMENTWORKFLOWTYPE_OUTGOINGVOUCHER},
         {PAYMENTEVENTTYPE_CREATE,
          PAYMENTEVENTTYPE_CONVEY,
          PAYMENTEVENTTYPE_CANCEL,
          PAYMENTEVENTTYPE_ACCEPT,
          PAYMENTEVENTTYPE_COMPLETE}},
        {{4, PAYMENTWORKFLOWTYPE_INCOMINGVOUCHER},
         {PAYMENTEVENTTYPE_CONVEY, PAYMENTEVENTTYPE_ACCEPT}},
    };

    return output;
}
const VersionMap& PaymentWorkflowAllowedInstrumentRevision() noexcept
{
    static const auto output = VersionMap{
        {1, {1, 1}},
        {2, {1, 1}},
        {3, {1, 1}},
        {4, {1, 1}},
    };

    return output;
}
const VersionMap& PaymentWorkflowAllowedPaymentEvent() noexcept
{
    static const auto output = VersionMap{
        {1, {1, 1}},
        {2, {1, 2}},
        {3, {3, 3}},
        {4, {3, 3}},
    };

    return output;
}
const WorkflowStateMap& PaymentWorkflowAllowedState() noexcept
{
    static const auto output = WorkflowStateMap{
        {{1, PAYMENTWORKFLOWTYPE_OUTGOINGCHEQUE},
         {PAYMENTWORKFLOWSTATE_UNSENT,
          PAYMENTWORKFLOWSTATE_CONVEYED,
          PAYMENTWORKFLOWSTATE_CANCELLED,
          PAYMENTWORKFLOWSTATE_ACCEPTED,
          PAYMENTWORKFLOWSTATE_COMPLETED,
          PAYMENTWORKFLOWSTATE_EXPIRED}},
        {{1, PAYMENTWORKFLOWTYPE_INCOMINGCHEQUE},
         {PAYMENTWORKFLOWSTATE_CONVEYED,
          PAYMENTWORKFLOWSTATE_COMPLETED,
          PAYMENTWORKFLOWSTATE_EXPIRED}},
        {{1, PAYMENTWORKFLOWTYPE_OUTGOINGINVOICE},
         {PAYMENTWORKFLOWSTATE_UNSENT,
          PAYMENTWORKFLOWSTATE_CONVEYED,
          PAYMENTWORKFLOWSTATE_CANCELLED,
          PAYMENTWORKFLOWSTATE_ACCEPTED,
          PAYMENTWORKFLOWSTATE_COMPLETED,
          PAYMENTWORKFLOWSTATE_EXPIRED}},
        {{1, PAYMENTWORKFLOWTYPE_INCOMINGINVOICE},
         {PAYMENTWORKFLOWSTATE_CONVEYED,
          PAYMENTWORKFLOWSTATE_COMPLETED,
          PAYMENTWORKFLOWSTATE_EXPIRED}},
        {{2, PAYMENTWORKFLOWTYPE_OUTGOINGCHEQUE},
         {PAYMENTWORKFLOWSTATE_UNSENT,
          PAYMENTWORKFLOWSTATE_CONVEYED,
          PAYMENTWORKFLOWSTATE_CANCELLED,
          PAYMENTWORKFLOWSTATE_ACCEPTED,
          PAYMENTWORKFLOWSTATE_COMPLETED,
          PAYMENTWORKFLOWSTATE_EXPIRED}},
        {{2, PAYMENTWORKFLOWTYPE_INCOMINGCHEQUE},
         {PAYMENTWORKFLOWSTATE_CONVEYED,
          PAYMENTWORKFLOWSTATE_COMPLETED,
          PAYMENTWORKFLOWSTATE_EXPIRED}},
        {{2, PAYMENTWORKFLOWTYPE_OUTGOINGINVOICE},
         {PAYMENTWORKFLOWSTATE_UNSENT,
          PAYMENTWORKFLOWSTATE_CONVEYED,
          PAYMENTWORKFLOWSTATE_CANCELLED,
          PAYMENTWORKFLOWSTATE_ACCEPTED,
          PAYMENTWORKFLOWSTATE_COMPLETED,
          PAYMENTWORKFLOWSTATE_EXPIRED}},
        {{2, PAYMENTWORKFLOWTYPE_INCOMINGINVOICE},
         {PAYMENTWORKFLOWSTATE_CONVEYED,
          PAYMENTWORKFLOWSTATE_COMPLETED,
          PAYMENTWORKFLOWSTATE_EXPIRED}},
        {{2, PAYMENTWORKFLOWTYPE_OUTGOINGTRANSFER},
         {PAYMENTWORKFLOWSTATE_INITIATED,
          PAYMENTWORKFLOWSTATE_ABORTED,
          PAYMENTWORKFLOWSTATE_ACKNOWLEDGED,
          PAYMENTWORKFLOWSTATE_ACCEPTED,
          PAYMENTWORKFLOWSTATE_COMPLETED}},
        {{2, PAYMENTWORKFLOWTYPE_INCOMINGTRANSFER},
         {PAYMENTWORKFLOWSTATE_CONVEYED, PAYMENTWORKFLOWSTATE_COMPLETED}},
        {{2, PAYMENTWORKFLOWTYPE_INTERNALTRANSFER},
         {PAYMENTWORKFLOWSTATE_INITIATED,
          PAYMENTWORKFLOWSTATE_ABORTED,
          PAYMENTWORKFLOWSTATE_ACKNOWLEDGED,
          PAYMENTWORKFLOWSTATE_CONVEYED,
          PAYMENTWORKFLOWSTATE_ACCEPTED,
          PAYMENTWORKFLOWSTATE_COMPLETED}},
        {{3, PAYMENTWORKFLOWTYPE_OUTGOINGCHEQUE},
         {PAYMENTWORKFLOWSTATE_UNSENT,
          PAYMENTWORKFLOWSTATE_CONVEYED,
          PAYMENTWORKFLOWSTATE_CANCELLED,
          PAYMENTWORKFLOWSTATE_ACCEPTED,
          PAYMENTWORKFLOWSTATE_COMPLETED,
          PAYMENTWORKFLOWSTATE_EXPIRED}},
        {{3, PAYMENTWORKFLOWTYPE_INCOMINGCHEQUE},
         {PAYMENTWORKFLOWSTATE_CONVEYED,
          PAYMENTWORKFLOWSTATE_COMPLETED,
          PAYMENTWORKFLOWSTATE_EXPIRED}},
        {{3, PAYMENTWORKFLOWTYPE_OUTGOINGINVOICE},
         {PAYMENTWORKFLOWSTATE_UNSENT,
          PAYMENTWORKFLOWSTATE_CONVEYED,
          PAYMENTWORKFLOWSTATE_CANCELLED,
          PAYMENTWORKFLOWSTATE_ACCEPTED,
          PAYMENTWORKFLOWSTATE_COMPLETED,
          PAYMENTWORKFLOWSTATE_EXPIRED}},
        {{3, PAYMENTWORKFLOWTYPE_INCOMINGINVOICE},
         {PAYMENTWORKFLOWSTATE_CONVEYED,
          PAYMENTWORKFLOWSTATE_COMPLETED,
          PAYMENTWORKFLOWSTATE_EXPIRED}},
        {{3, PAYMENTWORKFLOWTYPE_OUTGOINGTRANSFER},
         {PAYMENTWORKFLOWSTATE_INITIATED,
          PAYMENTWORKFLOWSTATE_ABORTED,
          PAYMENTWORKFLOWSTATE_ACKNOWLEDGED,
          PAYMENTWORKFLOWSTATE_ACCEPTED,
          PAYMENTWORKFLOWSTATE_COMPLETED}},
        {{3, PAYMENTWORKFLOWTYPE_INCOMINGTRANSFER},
         {PAYMENTWORKFLOWSTATE_CONVEYED, PAYMENTWORKFLOWSTATE_COMPLETED}},
        {{3, PAYMENTWORKFLOWTYPE_INTERNALTRANSFER},
         {PAYMENTWORKFLOWSTATE_INITIATED,
          PAYMENTWORKFLOWSTATE_ABORTED,
          PAYMENTWORKFLOWSTATE_ACKNOWLEDGED,
          PAYMENTWORKFLOWSTATE_CONVEYED,
          PAYMENTWORKFLOWSTATE_ACCEPTED,
          PAYMENTWORKFLOWSTATE_COMPLETED}},
        {{3, PAYMENTWORKFLOWTYPE_OUTGOINGCASH},
         {PAYMENTWORKFLOWSTATE_UNSENT,
          PAYMENTWORKFLOWSTATE_CONVEYED,
          PAYMENTWORKFLOWSTATE_EXPIRED}},
        {{3, PAYMENTWORKFLOWTYPE_INCOMINGCASH},
         {PAYMENTWORKFLOWSTATE_CONVEYED,
          PAYMENTWORKFLOWSTATE_ACCEPTED,
          PAYMENTWORKFLOWSTATE_REJECTED,
          PAYMENTWORKFLOWSTATE_EXPIRED}},
        {{4, PAYMENTWORKFLOWTYPE_OUTGOINGCHEQUE},
         {PAYMENTWORKFLOWSTATE_UNSENT,
          PAYMENTWORKFLOWSTATE_CONVEYED,
          PAYMENTWORKFLOWSTATE_CANCELLED,
          PAYMENTWORKFLOWSTATE_ACCEPTED,
          PAYMENTWORKFLOWSTATE_COMPLETED,
          PAYMENTWORKFLOWSTATE_EXPIRED}},
        {{4, PAYMENTWORKFLOWTYPE_INCOMINGCHEQUE},
         {PAYMENTWORKFLOWSTATE_CONVEYED,
          PAYMENTWORKFLOWSTATE_COMPLETED,
          PAYMENTWORKFLOWSTATE_EXPIRED}},
        {{4, PAYMENTWORKFLOWTYPE_OUTGOINGINVOICE},
         {PAYMENTWORKFLOWSTATE_UNSENT,
          PAYMENTWORKFLOWSTATE_CONVEYED,
          PAYMENTWORKFLOWSTATE_CANCELLED,
          PAYMENTWORKFLOWSTATE_ACCEPTED,
          PAYMENTWORKFLOWSTATE_COMPLETED,
          PAYMENTWORKFLOWSTATE_EXPIRED}},
        {{4, PAYMENTWORKFLOWTYPE_INCOMINGINVOICE},
         {PAYMENTWORKFLOWSTATE_CONVEYED,
          PAYMENTWORKFLOWSTATE_COMPLETED,
          PAYMENTWORKFLOWSTATE_EXPIRED}},
        {{4, PAYMENTWORKFLOWTYPE_OUTGOINGTRANSFER},
         {PAYMENTWORKFLOWSTATE_INITIATED,
          PAYMENTWORKFLOWSTATE_ABORTED,
          PAYMENTWORKFLOWSTATE_ACKNOWLEDGED,
          PAYMENTWORKFLOWSTATE_ACCEPTED,
          PAYMENTWORKFLOWSTATE_COMPLETED}},
        {{4, PAYMENTWORKFLOWTYPE_INCOMINGTRANSFER},
         {PAYMENTWORKFLOWSTATE_CONVEYED, PAYMENTWORKFLOWSTATE_COMPLETED}},
        {{4, PAYMENTWORKFLOWTYPE_INTERNALTRANSFER},
         {PAYMENTWORKFLOWSTATE_INITIATED,
          PAYMENTWORKFLOWSTATE_ABORTED,
          PAYMENTWORKFLOWSTATE_ACKNOWLEDGED,
          PAYMENTWORKFLOWSTATE_CONVEYED,
          PAYMENTWORKFLOWSTATE_ACCEPTED,
          PAYMENTWORKFLOWSTATE_COMPLETED}},
        {{4, PAYMENTWORKFLOWTYPE_OUTGOINGCASH},
         {PAYMENTWORKFLOWSTATE_UNSENT,
          PAYMENTWORKFLOWSTATE_CONVEYED,
          PAYMENTWORKFLOWSTATE_EXPIRED}},
        {{4, PAYMENTWORKFLOWTYPE_INCOMINGCASH},
         {PAYMENTWORKFLOWSTATE_CONVEYED,
          PAYMENTWORKFLOWSTATE_ACCEPTED,
          PAYMENTWORKFLOWSTATE_REJECTED,
          PAYMENTWORKFLOWSTATE_EXPIRED}},
        {{4, PAYMENTWORKFLOWTYPE_OUTGOINGVOUCHER},
         {PAYMENTWORKFLOWSTATE_UNSENT,
          PAYMENTWORKFLOWSTATE_CONVEYED,
          PAYMENTWORKFLOWSTATE_CANCELLED,
          PAYMENTWORKFLOWSTATE_ACCEPTED,
          PAYMENTWORKFLOWSTATE_COMPLETED,
          PAYMENTWORKFLOWSTATE_EXPIRED}},
        {{4, PAYMENTWORKFLOWTYPE_INCOMINGVOUCHER},
         {PAYMENTWORKFLOWSTATE_CONVEYED,
          PAYMENTWORKFLOWSTATE_COMPLETED,
          PAYMENTWORKFLOWSTATE_EXPIRED}},
    };

    return output;
}
}  // namespace opentxs::proto
