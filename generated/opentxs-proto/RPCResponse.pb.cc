// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RPCResponse.proto

#include "RPCResponse.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace opentxs {
namespace proto {
class RPCResponseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<RPCResponse>
      _instance;
} _RPCResponse_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace protobuf_RPCResponse_2eproto {
void InitDefaultsRPCResponseImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_RPCStatus_2eproto::InitDefaultsRPCStatus();
  protobuf_SessionData_2eproto::InitDefaultsSessionData();
  protobuf_HDSeed_2eproto::InitDefaultsHDSeed();
  protobuf_CredentialIndex_2eproto::InitDefaultsCredentialIndex();
  protobuf_AccountData_2eproto::InitDefaultsAccountData();
  protobuf_Contact_2eproto::InitDefaultsContact();
  protobuf_AccountEvent_2eproto::InitDefaultsAccountEvent();
  protobuf_ContactEvent_2eproto::InitDefaultsContactEvent();
  protobuf_RPCTask_2eproto::InitDefaultsRPCTask();
  protobuf_ServerContract_2eproto::InitDefaultsServerContract();
  protobuf_PaymentWorkflow_2eproto::InitDefaultsPaymentWorkflow();
  {
    void* ptr = &::opentxs::proto::_RPCResponse_default_instance_;
    new (ptr) ::opentxs::proto::RPCResponse();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::opentxs::proto::RPCResponse::InitAsDefaultInstance();
}

void InitDefaultsRPCResponse() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsRPCResponseImpl);
}

}  // namespace protobuf_RPCResponse_2eproto
namespace opentxs {
namespace proto {

// ===================================================================

void RPCResponse::InitAsDefaultInstance() {
}
void RPCResponse::clear_status() {
  status_.Clear();
}
void RPCResponse::clear_sessions() {
  sessions_.Clear();
}
void RPCResponse::clear_seed() {
  seed_.Clear();
}
void RPCResponse::clear_nym() {
  nym_.Clear();
}
void RPCResponse::clear_balance() {
  balance_.Clear();
}
void RPCResponse::clear_contact() {
  contact_.Clear();
}
void RPCResponse::clear_accountevent() {
  accountevent_.Clear();
}
void RPCResponse::clear_contactevent() {
  contactevent_.Clear();
}
void RPCResponse::clear_task() {
  task_.Clear();
}
void RPCResponse::clear_notary() {
  notary_.Clear();
}
void RPCResponse::clear_workflow() {
  workflow_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RPCResponse::kVersionFieldNumber;
const int RPCResponse::kCookieFieldNumber;
const int RPCResponse::kTypeFieldNumber;
const int RPCResponse::kStatusFieldNumber;
const int RPCResponse::kSessionFieldNumber;
const int RPCResponse::kSessionsFieldNumber;
const int RPCResponse::kIdentifierFieldNumber;
const int RPCResponse::kSeedFieldNumber;
const int RPCResponse::kNymFieldNumber;
const int RPCResponse::kBalanceFieldNumber;
const int RPCResponse::kContactFieldNumber;
const int RPCResponse::kAccounteventFieldNumber;
const int RPCResponse::kContacteventFieldNumber;
const int RPCResponse::kTaskFieldNumber;
const int RPCResponse::kNotaryFieldNumber;
const int RPCResponse::kWorkflowFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RPCResponse::RPCResponse()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_RPCResponse_2eproto::InitDefaultsRPCResponse();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:opentxs.proto.RPCResponse)
}
RPCResponse::RPCResponse(const RPCResponse& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      status_(from.status_),
      sessions_(from.sessions_),
      identifier_(from.identifier_),
      seed_(from.seed_),
      nym_(from.nym_),
      balance_(from.balance_),
      contact_(from.contact_),
      accountevent_(from.accountevent_),
      contactevent_(from.contactevent_),
      task_(from.task_),
      notary_(from.notary_),
      workflow_(from.workflow_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  cookie_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_cookie()) {
    cookie_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.cookie_);
  }
  ::memcpy(&version_, &from.version_,
    static_cast<size_t>(reinterpret_cast<char*>(&session_) -
    reinterpret_cast<char*>(&version_)) + sizeof(session_));
  // @@protoc_insertion_point(copy_constructor:opentxs.proto.RPCResponse)
}

void RPCResponse::SharedCtor() {
  _cached_size_ = 0;
  cookie_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&version_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&session_) -
      reinterpret_cast<char*>(&version_)) + sizeof(session_));
}

RPCResponse::~RPCResponse() {
  // @@protoc_insertion_point(destructor:opentxs.proto.RPCResponse)
  SharedDtor();
}

void RPCResponse::SharedDtor() {
  cookie_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void RPCResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const RPCResponse& RPCResponse::default_instance() {
  ::protobuf_RPCResponse_2eproto::InitDefaultsRPCResponse();
  return *internal_default_instance();
}

RPCResponse* RPCResponse::New(::google::protobuf::Arena* arena) const {
  RPCResponse* n = new RPCResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RPCResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:opentxs.proto.RPCResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  status_.Clear();
  sessions_.Clear();
  identifier_.Clear();
  seed_.Clear();
  nym_.Clear();
  balance_.Clear();
  contact_.Clear();
  accountevent_.Clear();
  contactevent_.Clear();
  task_.Clear();
  notary_.Clear();
  workflow_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(!cookie_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*cookie_.UnsafeRawStringPointer())->clear();
  }
  if (cached_has_bits & 14u) {
    ::memset(&version_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&session_) -
        reinterpret_cast<char*>(&version_)) + sizeof(session_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool RPCResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:opentxs.proto.RPCResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(16383u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 version = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_version();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &version_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string cookie = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_cookie()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .opentxs.proto.RPCCommandType type = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::opentxs::proto::RPCCommandType_IsValid(value)) {
            set_type(static_cast< ::opentxs::proto::RPCCommandType >(value));
          } else {
            unknown_fields_stream.WriteVarint32(24u);
            unknown_fields_stream.WriteVarint32(
                static_cast< ::google::protobuf::uint32>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .opentxs.proto.RPCStatus status = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_status()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 session = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          set_has_session();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &session_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .opentxs.proto.SessionData sessions = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_sessions()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string identifier = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_identifier()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .opentxs.proto.HDSeed seed = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_seed()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .opentxs.proto.CredentialIndex nym = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_nym()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .opentxs.proto.AccountData balance = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_balance()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .opentxs.proto.Contact contact = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_contact()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .opentxs.proto.AccountEvent accountevent = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 98 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_accountevent()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .opentxs.proto.ContactEvent contactevent = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(106u /* 106 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_contactevent()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .opentxs.proto.RPCTask task = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(114u /* 114 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_task()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .opentxs.proto.ServerContract notary = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_notary()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .opentxs.proto.PaymentWorkflow workflow = 16;
      case 16: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(130u /* 130 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_workflow()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:opentxs.proto.RPCResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:opentxs.proto.RPCResponse)
  return false;
#undef DO_
}

void RPCResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:opentxs.proto.RPCResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 version = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->version(), output);
  }

  // optional string cookie = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->cookie(), output);
  }

  // optional .opentxs.proto.RPCCommandType type = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->type(), output);
  }

  // repeated .opentxs.proto.RPCStatus status = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->status_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      4, this->status(static_cast<int>(i)), output);
  }

  // optional uint32 session = 5;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->session(), output);
  }

  // repeated .opentxs.proto.SessionData sessions = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->sessions_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      6, this->sessions(static_cast<int>(i)), output);
  }

  // repeated string identifier = 7;
  for (int i = 0, n = this->identifier_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      7, this->identifier(i), output);
  }

  // repeated .opentxs.proto.HDSeed seed = 8;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->seed_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      8, this->seed(static_cast<int>(i)), output);
  }

  // repeated .opentxs.proto.CredentialIndex nym = 9;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->nym_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      9, this->nym(static_cast<int>(i)), output);
  }

  // repeated .opentxs.proto.AccountData balance = 10;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->balance_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      10, this->balance(static_cast<int>(i)), output);
  }

  // repeated .opentxs.proto.Contact contact = 11;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->contact_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      11, this->contact(static_cast<int>(i)), output);
  }

  // repeated .opentxs.proto.AccountEvent accountevent = 12;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->accountevent_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      12, this->accountevent(static_cast<int>(i)), output);
  }

  // repeated .opentxs.proto.ContactEvent contactevent = 13;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->contactevent_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      13, this->contactevent(static_cast<int>(i)), output);
  }

  // repeated .opentxs.proto.RPCTask task = 14;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->task_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      14, this->task(static_cast<int>(i)), output);
  }

  // repeated .opentxs.proto.ServerContract notary = 15;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->notary_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      15, this->notary(static_cast<int>(i)), output);
  }

  // repeated .opentxs.proto.PaymentWorkflow workflow = 16;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->workflow_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      16, this->workflow(static_cast<int>(i)), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:opentxs.proto.RPCResponse)
}

size_t RPCResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:opentxs.proto.RPCResponse)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  // repeated .opentxs.proto.RPCStatus status = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->status_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->status(static_cast<int>(i)));
    }
  }

  // repeated .opentxs.proto.SessionData sessions = 6;
  {
    unsigned int count = static_cast<unsigned int>(this->sessions_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->sessions(static_cast<int>(i)));
    }
  }

  // repeated string identifier = 7;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->identifier_size());
  for (int i = 0, n = this->identifier_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->identifier(i));
  }

  // repeated .opentxs.proto.HDSeed seed = 8;
  {
    unsigned int count = static_cast<unsigned int>(this->seed_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->seed(static_cast<int>(i)));
    }
  }

  // repeated .opentxs.proto.CredentialIndex nym = 9;
  {
    unsigned int count = static_cast<unsigned int>(this->nym_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->nym(static_cast<int>(i)));
    }
  }

  // repeated .opentxs.proto.AccountData balance = 10;
  {
    unsigned int count = static_cast<unsigned int>(this->balance_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->balance(static_cast<int>(i)));
    }
  }

  // repeated .opentxs.proto.Contact contact = 11;
  {
    unsigned int count = static_cast<unsigned int>(this->contact_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->contact(static_cast<int>(i)));
    }
  }

  // repeated .opentxs.proto.AccountEvent accountevent = 12;
  {
    unsigned int count = static_cast<unsigned int>(this->accountevent_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->accountevent(static_cast<int>(i)));
    }
  }

  // repeated .opentxs.proto.ContactEvent contactevent = 13;
  {
    unsigned int count = static_cast<unsigned int>(this->contactevent_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->contactevent(static_cast<int>(i)));
    }
  }

  // repeated .opentxs.proto.RPCTask task = 14;
  {
    unsigned int count = static_cast<unsigned int>(this->task_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->task(static_cast<int>(i)));
    }
  }

  // repeated .opentxs.proto.ServerContract notary = 15;
  {
    unsigned int count = static_cast<unsigned int>(this->notary_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->notary(static_cast<int>(i)));
    }
  }

  // repeated .opentxs.proto.PaymentWorkflow workflow = 16;
  {
    unsigned int count = static_cast<unsigned int>(this->workflow_size());
    total_size += 2UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->workflow(static_cast<int>(i)));
    }
  }

  if (_has_bits_[0 / 32] & 15u) {
    // optional string cookie = 2;
    if (has_cookie()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->cookie());
    }

    // optional uint32 version = 1;
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->version());
    }

    // optional .opentxs.proto.RPCCommandType type = 3;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional uint32 session = 5;
    if (has_session()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->session());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RPCResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const RPCResponse*>(&from));
}

void RPCResponse::MergeFrom(const RPCResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:opentxs.proto.RPCResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  status_.MergeFrom(from.status_);
  sessions_.MergeFrom(from.sessions_);
  identifier_.MergeFrom(from.identifier_);
  seed_.MergeFrom(from.seed_);
  nym_.MergeFrom(from.nym_);
  balance_.MergeFrom(from.balance_);
  contact_.MergeFrom(from.contact_);
  accountevent_.MergeFrom(from.accountevent_);
  contactevent_.MergeFrom(from.contactevent_);
  task_.MergeFrom(from.task_);
  notary_.MergeFrom(from.notary_);
  workflow_.MergeFrom(from.workflow_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_cookie();
      cookie_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.cookie_);
    }
    if (cached_has_bits & 0x00000002u) {
      version_ = from.version_;
    }
    if (cached_has_bits & 0x00000004u) {
      type_ = from.type_;
    }
    if (cached_has_bits & 0x00000008u) {
      session_ = from.session_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void RPCResponse::CopyFrom(const RPCResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:opentxs.proto.RPCResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RPCResponse::IsInitialized() const {
  return true;
}

void RPCResponse::Swap(RPCResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RPCResponse::InternalSwap(RPCResponse* other) {
  using std::swap;
  status_.InternalSwap(&other->status_);
  sessions_.InternalSwap(&other->sessions_);
  identifier_.InternalSwap(&other->identifier_);
  seed_.InternalSwap(&other->seed_);
  nym_.InternalSwap(&other->nym_);
  balance_.InternalSwap(&other->balance_);
  contact_.InternalSwap(&other->contact_);
  accountevent_.InternalSwap(&other->accountevent_);
  contactevent_.InternalSwap(&other->contactevent_);
  task_.InternalSwap(&other->task_);
  notary_.InternalSwap(&other->notary_);
  workflow_.InternalSwap(&other->workflow_);
  cookie_.Swap(&other->cookie_);
  swap(version_, other->version_);
  swap(type_, other->type_);
  swap(session_, other->session_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string RPCResponse::GetTypeName() const {
  return "opentxs.proto.RPCResponse";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)