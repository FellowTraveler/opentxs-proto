// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: OTXPush.proto

#ifndef PROTOBUF_OTXPush_2eproto__INCLUDED
#define PROTOBUF_OTXPush_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include "OTXEnums.pb.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_OTXPush_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsOTXPushImpl();
void InitDefaultsOTXPush();
inline void InitDefaults() {
  InitDefaultsOTXPush();
}
}  // namespace protobuf_OTXPush_2eproto
namespace opentxs {
namespace proto {
class OTXPush;
class OTXPushDefaultTypeInternal;
extern OTXPushDefaultTypeInternal _OTXPush_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class OTXPush : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.OTXPush) */ {
 public:
  OTXPush();
  virtual ~OTXPush();

  OTXPush(const OTXPush& from);

  inline OTXPush& operator=(const OTXPush& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  OTXPush(OTXPush&& from) noexcept
    : OTXPush() {
    *this = ::std::move(from);
  }

  inline OTXPush& operator=(OTXPush&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const OTXPush& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const OTXPush* internal_default_instance() {
    return reinterpret_cast<const OTXPush*>(
               &_OTXPush_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(OTXPush* other);
  friend void swap(OTXPush& a, OTXPush& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline OTXPush* New() const PROTOBUF_FINAL { return New(NULL); }

  OTXPush* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const OTXPush& from);
  void MergeFrom(const OTXPush& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(OTXPush* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string accountid = 3;
  bool has_accountid() const;
  void clear_accountid();
  static const int kAccountidFieldNumber = 3;
  const ::std::string& accountid() const;
  void set_accountid(const ::std::string& value);
  #if LANG_CXX11
  void set_accountid(::std::string&& value);
  #endif
  void set_accountid(const char* value);
  void set_accountid(const char* value, size_t size);
  ::std::string* mutable_accountid();
  ::std::string* release_accountid();
  void set_allocated_accountid(::std::string* accountid);

  // optional bytes account = 5;
  bool has_account() const;
  void clear_account();
  static const int kAccountFieldNumber = 5;
  const ::std::string& account() const;
  void set_account(const ::std::string& value);
  #if LANG_CXX11
  void set_account(::std::string&& value);
  #endif
  void set_account(const char* value);
  void set_account(const void* value, size_t size);
  ::std::string* mutable_account();
  ::std::string* release_account();
  void set_allocated_account(::std::string* account);

  // optional bytes inbox = 6;
  bool has_inbox() const;
  void clear_inbox();
  static const int kInboxFieldNumber = 6;
  const ::std::string& inbox() const;
  void set_inbox(const ::std::string& value);
  #if LANG_CXX11
  void set_inbox(::std::string&& value);
  #endif
  void set_inbox(const char* value);
  void set_inbox(const void* value, size_t size);
  ::std::string* mutable_inbox();
  ::std::string* release_inbox();
  void set_allocated_inbox(::std::string* inbox);

  // optional string inboxhash = 7;
  bool has_inboxhash() const;
  void clear_inboxhash();
  static const int kInboxhashFieldNumber = 7;
  const ::std::string& inboxhash() const;
  void set_inboxhash(const ::std::string& value);
  #if LANG_CXX11
  void set_inboxhash(::std::string&& value);
  #endif
  void set_inboxhash(const char* value);
  void set_inboxhash(const char* value, size_t size);
  ::std::string* mutable_inboxhash();
  ::std::string* release_inboxhash();
  void set_allocated_inboxhash(::std::string* inboxhash);

  // optional bytes outbox = 8;
  bool has_outbox() const;
  void clear_outbox();
  static const int kOutboxFieldNumber = 8;
  const ::std::string& outbox() const;
  void set_outbox(const ::std::string& value);
  #if LANG_CXX11
  void set_outbox(::std::string&& value);
  #endif
  void set_outbox(const char* value);
  void set_outbox(const void* value, size_t size);
  ::std::string* mutable_outbox();
  ::std::string* release_outbox();
  void set_allocated_outbox(::std::string* outbox);

  // optional string outboxhash = 9;
  bool has_outboxhash() const;
  void clear_outboxhash();
  static const int kOutboxhashFieldNumber = 9;
  const ::std::string& outboxhash() const;
  void set_outboxhash(const ::std::string& value);
  #if LANG_CXX11
  void set_outboxhash(::std::string&& value);
  #endif
  void set_outboxhash(const char* value);
  void set_outboxhash(const char* value, size_t size);
  ::std::string* mutable_outboxhash();
  ::std::string* release_outboxhash();
  void set_allocated_outboxhash(::std::string* outboxhash);

  // optional bytes item = 10;
  bool has_item() const;
  void clear_item();
  static const int kItemFieldNumber = 10;
  const ::std::string& item() const;
  void set_item(const ::std::string& value);
  #if LANG_CXX11
  void set_item(::std::string&& value);
  #endif
  void set_item(const char* value);
  void set_item(const void* value, size_t size);
  ::std::string* mutable_item();
  ::std::string* release_item();
  void set_allocated_item(::std::string* item);

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // optional .opentxs.proto.OTXPushType type = 2;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  ::opentxs::proto::OTXPushType type() const;
  void set_type(::opentxs::proto::OTXPushType value);

  // optional int64 itemid = 4;
  bool has_itemid() const;
  void clear_itemid();
  static const int kItemidFieldNumber = 4;
  ::google::protobuf::int64 itemid() const;
  void set_itemid(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.OTXPush)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_type();
  void clear_has_type();
  void set_has_accountid();
  void clear_has_accountid();
  void set_has_itemid();
  void clear_has_itemid();
  void set_has_account();
  void clear_has_account();
  void set_has_inbox();
  void clear_has_inbox();
  void set_has_inboxhash();
  void clear_has_inboxhash();
  void set_has_outbox();
  void clear_has_outbox();
  void set_has_outboxhash();
  void clear_has_outboxhash();
  void set_has_item();
  void clear_has_item();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr accountid_;
  ::google::protobuf::internal::ArenaStringPtr account_;
  ::google::protobuf::internal::ArenaStringPtr inbox_;
  ::google::protobuf::internal::ArenaStringPtr inboxhash_;
  ::google::protobuf::internal::ArenaStringPtr outbox_;
  ::google::protobuf::internal::ArenaStringPtr outboxhash_;
  ::google::protobuf::internal::ArenaStringPtr item_;
  ::google::protobuf::uint32 version_;
  int type_;
  ::google::protobuf::int64 itemid_;
  friend struct ::protobuf_OTXPush_2eproto::TableStruct;
  friend void ::protobuf_OTXPush_2eproto::InitDefaultsOTXPushImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// OTXPush

// optional uint32 version = 1;
inline bool OTXPush::has_version() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void OTXPush::set_has_version() {
  _has_bits_[0] |= 0x00000080u;
}
inline void OTXPush::clear_has_version() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void OTXPush::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 OTXPush::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.OTXPush.version)
  return version_;
}
inline void OTXPush::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.OTXPush.version)
}

// optional .opentxs.proto.OTXPushType type = 2;
inline bool OTXPush::has_type() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void OTXPush::set_has_type() {
  _has_bits_[0] |= 0x00000100u;
}
inline void OTXPush::clear_has_type() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void OTXPush::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::opentxs::proto::OTXPushType OTXPush::type() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.OTXPush.type)
  return static_cast< ::opentxs::proto::OTXPushType >(type_);
}
inline void OTXPush::set_type(::opentxs::proto::OTXPushType value) {
  assert(::opentxs::proto::OTXPushType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.OTXPush.type)
}

// optional string accountid = 3;
inline bool OTXPush::has_accountid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void OTXPush::set_has_accountid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void OTXPush::clear_has_accountid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void OTXPush::clear_accountid() {
  accountid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_accountid();
}
inline const ::std::string& OTXPush::accountid() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.OTXPush.accountid)
  return accountid_.GetNoArena();
}
inline void OTXPush::set_accountid(const ::std::string& value) {
  set_has_accountid();
  accountid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.OTXPush.accountid)
}
#if LANG_CXX11
inline void OTXPush::set_accountid(::std::string&& value) {
  set_has_accountid();
  accountid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.OTXPush.accountid)
}
#endif
inline void OTXPush::set_accountid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_accountid();
  accountid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.OTXPush.accountid)
}
inline void OTXPush::set_accountid(const char* value, size_t size) {
  set_has_accountid();
  accountid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.OTXPush.accountid)
}
inline ::std::string* OTXPush::mutable_accountid() {
  set_has_accountid();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.OTXPush.accountid)
  return accountid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* OTXPush::release_accountid() {
  // @@protoc_insertion_point(field_release:opentxs.proto.OTXPush.accountid)
  clear_has_accountid();
  return accountid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void OTXPush::set_allocated_accountid(::std::string* accountid) {
  if (accountid != NULL) {
    set_has_accountid();
  } else {
    clear_has_accountid();
  }
  accountid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), accountid);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.OTXPush.accountid)
}

// optional int64 itemid = 4;
inline bool OTXPush::has_itemid() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void OTXPush::set_has_itemid() {
  _has_bits_[0] |= 0x00000200u;
}
inline void OTXPush::clear_has_itemid() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void OTXPush::clear_itemid() {
  itemid_ = GOOGLE_LONGLONG(0);
  clear_has_itemid();
}
inline ::google::protobuf::int64 OTXPush::itemid() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.OTXPush.itemid)
  return itemid_;
}
inline void OTXPush::set_itemid(::google::protobuf::int64 value) {
  set_has_itemid();
  itemid_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.OTXPush.itemid)
}

// optional bytes account = 5;
inline bool OTXPush::has_account() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void OTXPush::set_has_account() {
  _has_bits_[0] |= 0x00000002u;
}
inline void OTXPush::clear_has_account() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void OTXPush::clear_account() {
  account_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_account();
}
inline const ::std::string& OTXPush::account() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.OTXPush.account)
  return account_.GetNoArena();
}
inline void OTXPush::set_account(const ::std::string& value) {
  set_has_account();
  account_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.OTXPush.account)
}
#if LANG_CXX11
inline void OTXPush::set_account(::std::string&& value) {
  set_has_account();
  account_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.OTXPush.account)
}
#endif
inline void OTXPush::set_account(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_account();
  account_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.OTXPush.account)
}
inline void OTXPush::set_account(const void* value, size_t size) {
  set_has_account();
  account_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.OTXPush.account)
}
inline ::std::string* OTXPush::mutable_account() {
  set_has_account();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.OTXPush.account)
  return account_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* OTXPush::release_account() {
  // @@protoc_insertion_point(field_release:opentxs.proto.OTXPush.account)
  clear_has_account();
  return account_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void OTXPush::set_allocated_account(::std::string* account) {
  if (account != NULL) {
    set_has_account();
  } else {
    clear_has_account();
  }
  account_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), account);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.OTXPush.account)
}

// optional bytes inbox = 6;
inline bool OTXPush::has_inbox() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void OTXPush::set_has_inbox() {
  _has_bits_[0] |= 0x00000004u;
}
inline void OTXPush::clear_has_inbox() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void OTXPush::clear_inbox() {
  inbox_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_inbox();
}
inline const ::std::string& OTXPush::inbox() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.OTXPush.inbox)
  return inbox_.GetNoArena();
}
inline void OTXPush::set_inbox(const ::std::string& value) {
  set_has_inbox();
  inbox_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.OTXPush.inbox)
}
#if LANG_CXX11
inline void OTXPush::set_inbox(::std::string&& value) {
  set_has_inbox();
  inbox_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.OTXPush.inbox)
}
#endif
inline void OTXPush::set_inbox(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_inbox();
  inbox_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.OTXPush.inbox)
}
inline void OTXPush::set_inbox(const void* value, size_t size) {
  set_has_inbox();
  inbox_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.OTXPush.inbox)
}
inline ::std::string* OTXPush::mutable_inbox() {
  set_has_inbox();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.OTXPush.inbox)
  return inbox_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* OTXPush::release_inbox() {
  // @@protoc_insertion_point(field_release:opentxs.proto.OTXPush.inbox)
  clear_has_inbox();
  return inbox_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void OTXPush::set_allocated_inbox(::std::string* inbox) {
  if (inbox != NULL) {
    set_has_inbox();
  } else {
    clear_has_inbox();
  }
  inbox_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), inbox);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.OTXPush.inbox)
}

// optional string inboxhash = 7;
inline bool OTXPush::has_inboxhash() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void OTXPush::set_has_inboxhash() {
  _has_bits_[0] |= 0x00000008u;
}
inline void OTXPush::clear_has_inboxhash() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void OTXPush::clear_inboxhash() {
  inboxhash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_inboxhash();
}
inline const ::std::string& OTXPush::inboxhash() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.OTXPush.inboxhash)
  return inboxhash_.GetNoArena();
}
inline void OTXPush::set_inboxhash(const ::std::string& value) {
  set_has_inboxhash();
  inboxhash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.OTXPush.inboxhash)
}
#if LANG_CXX11
inline void OTXPush::set_inboxhash(::std::string&& value) {
  set_has_inboxhash();
  inboxhash_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.OTXPush.inboxhash)
}
#endif
inline void OTXPush::set_inboxhash(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_inboxhash();
  inboxhash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.OTXPush.inboxhash)
}
inline void OTXPush::set_inboxhash(const char* value, size_t size) {
  set_has_inboxhash();
  inboxhash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.OTXPush.inboxhash)
}
inline ::std::string* OTXPush::mutable_inboxhash() {
  set_has_inboxhash();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.OTXPush.inboxhash)
  return inboxhash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* OTXPush::release_inboxhash() {
  // @@protoc_insertion_point(field_release:opentxs.proto.OTXPush.inboxhash)
  clear_has_inboxhash();
  return inboxhash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void OTXPush::set_allocated_inboxhash(::std::string* inboxhash) {
  if (inboxhash != NULL) {
    set_has_inboxhash();
  } else {
    clear_has_inboxhash();
  }
  inboxhash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), inboxhash);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.OTXPush.inboxhash)
}

// optional bytes outbox = 8;
inline bool OTXPush::has_outbox() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void OTXPush::set_has_outbox() {
  _has_bits_[0] |= 0x00000010u;
}
inline void OTXPush::clear_has_outbox() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void OTXPush::clear_outbox() {
  outbox_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_outbox();
}
inline const ::std::string& OTXPush::outbox() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.OTXPush.outbox)
  return outbox_.GetNoArena();
}
inline void OTXPush::set_outbox(const ::std::string& value) {
  set_has_outbox();
  outbox_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.OTXPush.outbox)
}
#if LANG_CXX11
inline void OTXPush::set_outbox(::std::string&& value) {
  set_has_outbox();
  outbox_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.OTXPush.outbox)
}
#endif
inline void OTXPush::set_outbox(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_outbox();
  outbox_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.OTXPush.outbox)
}
inline void OTXPush::set_outbox(const void* value, size_t size) {
  set_has_outbox();
  outbox_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.OTXPush.outbox)
}
inline ::std::string* OTXPush::mutable_outbox() {
  set_has_outbox();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.OTXPush.outbox)
  return outbox_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* OTXPush::release_outbox() {
  // @@protoc_insertion_point(field_release:opentxs.proto.OTXPush.outbox)
  clear_has_outbox();
  return outbox_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void OTXPush::set_allocated_outbox(::std::string* outbox) {
  if (outbox != NULL) {
    set_has_outbox();
  } else {
    clear_has_outbox();
  }
  outbox_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), outbox);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.OTXPush.outbox)
}

// optional string outboxhash = 9;
inline bool OTXPush::has_outboxhash() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void OTXPush::set_has_outboxhash() {
  _has_bits_[0] |= 0x00000020u;
}
inline void OTXPush::clear_has_outboxhash() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void OTXPush::clear_outboxhash() {
  outboxhash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_outboxhash();
}
inline const ::std::string& OTXPush::outboxhash() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.OTXPush.outboxhash)
  return outboxhash_.GetNoArena();
}
inline void OTXPush::set_outboxhash(const ::std::string& value) {
  set_has_outboxhash();
  outboxhash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.OTXPush.outboxhash)
}
#if LANG_CXX11
inline void OTXPush::set_outboxhash(::std::string&& value) {
  set_has_outboxhash();
  outboxhash_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.OTXPush.outboxhash)
}
#endif
inline void OTXPush::set_outboxhash(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_outboxhash();
  outboxhash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.OTXPush.outboxhash)
}
inline void OTXPush::set_outboxhash(const char* value, size_t size) {
  set_has_outboxhash();
  outboxhash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.OTXPush.outboxhash)
}
inline ::std::string* OTXPush::mutable_outboxhash() {
  set_has_outboxhash();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.OTXPush.outboxhash)
  return outboxhash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* OTXPush::release_outboxhash() {
  // @@protoc_insertion_point(field_release:opentxs.proto.OTXPush.outboxhash)
  clear_has_outboxhash();
  return outboxhash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void OTXPush::set_allocated_outboxhash(::std::string* outboxhash) {
  if (outboxhash != NULL) {
    set_has_outboxhash();
  } else {
    clear_has_outboxhash();
  }
  outboxhash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), outboxhash);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.OTXPush.outboxhash)
}

// optional bytes item = 10;
inline bool OTXPush::has_item() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void OTXPush::set_has_item() {
  _has_bits_[0] |= 0x00000040u;
}
inline void OTXPush::clear_has_item() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void OTXPush::clear_item() {
  item_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_item();
}
inline const ::std::string& OTXPush::item() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.OTXPush.item)
  return item_.GetNoArena();
}
inline void OTXPush::set_item(const ::std::string& value) {
  set_has_item();
  item_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.OTXPush.item)
}
#if LANG_CXX11
inline void OTXPush::set_item(::std::string&& value) {
  set_has_item();
  item_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.OTXPush.item)
}
#endif
inline void OTXPush::set_item(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_item();
  item_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.OTXPush.item)
}
inline void OTXPush::set_item(const void* value, size_t size) {
  set_has_item();
  item_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.OTXPush.item)
}
inline ::std::string* OTXPush::mutable_item() {
  set_has_item();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.OTXPush.item)
  return item_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* OTXPush::release_item() {
  // @@protoc_insertion_point(field_release:opentxs.proto.OTXPush.item)
  clear_has_item();
  return item_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void OTXPush::set_allocated_item(::std::string* item) {
  if (item != NULL) {
    set_has_item();
  } else {
    clear_has_item();
  }
  item_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), item);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.OTXPush.item)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_OTXPush_2eproto__INCLUDED
