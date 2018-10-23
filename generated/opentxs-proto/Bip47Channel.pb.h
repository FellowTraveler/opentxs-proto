// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Bip47Channel.proto

#ifndef PROTOBUF_Bip47Channel_2eproto__INCLUDED
#define PROTOBUF_Bip47Channel_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
#include "Bip47Direction.pb.h"  // IWYU pragma: export
#include "ContactEnums.pb.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_Bip47Channel_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsBip47ChannelImpl();
void InitDefaultsBip47Channel();
inline void InitDefaults() {
  InitDefaultsBip47Channel();
}
}  // namespace protobuf_Bip47Channel_2eproto
namespace opentxs {
namespace proto {
class Bip47Channel;
class Bip47ChannelDefaultTypeInternal;
extern Bip47ChannelDefaultTypeInternal _Bip47Channel_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class Bip47Channel : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.Bip47Channel) */ {
 public:
  Bip47Channel();
  virtual ~Bip47Channel();

  Bip47Channel(const Bip47Channel& from);

  inline Bip47Channel& operator=(const Bip47Channel& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Bip47Channel(Bip47Channel&& from) noexcept
    : Bip47Channel() {
    *this = ::std::move(from);
  }

  inline Bip47Channel& operator=(Bip47Channel&& from) noexcept {
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

  static const Bip47Channel& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Bip47Channel* internal_default_instance() {
    return reinterpret_cast<const Bip47Channel*>(
               &_Bip47Channel_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Bip47Channel* other);
  friend void swap(Bip47Channel& a, Bip47Channel& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Bip47Channel* New() const PROTOBUF_FINAL { return New(NULL); }

  Bip47Channel* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Bip47Channel& from);
  void MergeFrom(const Bip47Channel& from);
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
  void InternalSwap(Bip47Channel* other);
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

  // optional string id = 2;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 2;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  #if LANG_CXX11
  void set_id(::std::string&& value);
  #endif
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // optional string localpaymentcode = 3;
  bool has_localpaymentcode() const;
  void clear_localpaymentcode();
  static const int kLocalpaymentcodeFieldNumber = 3;
  const ::std::string& localpaymentcode() const;
  void set_localpaymentcode(const ::std::string& value);
  #if LANG_CXX11
  void set_localpaymentcode(::std::string&& value);
  #endif
  void set_localpaymentcode(const char* value);
  void set_localpaymentcode(const char* value, size_t size);
  ::std::string* mutable_localpaymentcode();
  ::std::string* release_localpaymentcode();
  void set_allocated_localpaymentcode(::std::string* localpaymentcode);

  // optional string contact = 5;
  bool has_contact() const;
  void clear_contact();
  static const int kContactFieldNumber = 5;
  const ::std::string& contact() const;
  void set_contact(const ::std::string& value);
  #if LANG_CXX11
  void set_contact(::std::string&& value);
  #endif
  void set_contact(const char* value);
  void set_contact(const char* value, size_t size);
  ::std::string* mutable_contact();
  ::std::string* release_contact();
  void set_allocated_contact(::std::string* contact);

  // optional string remotepaymentcode = 6;
  bool has_remotepaymentcode() const;
  void clear_remotepaymentcode();
  static const int kRemotepaymentcodeFieldNumber = 6;
  const ::std::string& remotepaymentcode() const;
  void set_remotepaymentcode(const ::std::string& value);
  #if LANG_CXX11
  void set_remotepaymentcode(::std::string&& value);
  #endif
  void set_remotepaymentcode(const char* value);
  void set_remotepaymentcode(const char* value, size_t size);
  ::std::string* mutable_remotepaymentcode();
  ::std::string* release_remotepaymentcode();
  void set_allocated_remotepaymentcode(::std::string* remotepaymentcode);

  // optional .opentxs.proto.Bip47Direction incoming = 7;
  bool has_incoming() const;
  void clear_incoming();
  static const int kIncomingFieldNumber = 7;
  const ::opentxs::proto::Bip47Direction& incoming() const;
  ::opentxs::proto::Bip47Direction* release_incoming();
  ::opentxs::proto::Bip47Direction* mutable_incoming();
  void set_allocated_incoming(::opentxs::proto::Bip47Direction* incoming);

  // optional .opentxs.proto.Bip47Direction outgoing = 8;
  bool has_outgoing() const;
  void clear_outgoing();
  static const int kOutgoingFieldNumber = 8;
  const ::opentxs::proto::Bip47Direction& outgoing() const;
  ::opentxs::proto::Bip47Direction* release_outgoing();
  ::opentxs::proto::Bip47Direction* mutable_outgoing();
  void set_allocated_outgoing(::opentxs::proto::Bip47Direction* outgoing);

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // optional .opentxs.proto.ContactItemType chain = 4;
  bool has_chain() const;
  void clear_chain();
  static const int kChainFieldNumber = 4;
  ::opentxs::proto::ContactItemType chain() const;
  void set_chain(::opentxs::proto::ContactItemType value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.Bip47Channel)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_id();
  void clear_has_id();
  void set_has_localpaymentcode();
  void clear_has_localpaymentcode();
  void set_has_chain();
  void clear_has_chain();
  void set_has_contact();
  void clear_has_contact();
  void set_has_remotepaymentcode();
  void clear_has_remotepaymentcode();
  void set_has_incoming();
  void clear_has_incoming();
  void set_has_outgoing();
  void clear_has_outgoing();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr localpaymentcode_;
  ::google::protobuf::internal::ArenaStringPtr contact_;
  ::google::protobuf::internal::ArenaStringPtr remotepaymentcode_;
  ::opentxs::proto::Bip47Direction* incoming_;
  ::opentxs::proto::Bip47Direction* outgoing_;
  ::google::protobuf::uint32 version_;
  int chain_;
  friend struct ::protobuf_Bip47Channel_2eproto::TableStruct;
  friend void ::protobuf_Bip47Channel_2eproto::InitDefaultsBip47ChannelImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Bip47Channel

// optional uint32 version = 1;
inline bool Bip47Channel::has_version() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Bip47Channel::set_has_version() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Bip47Channel::clear_has_version() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Bip47Channel::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 Bip47Channel::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Bip47Channel.version)
  return version_;
}
inline void Bip47Channel::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Bip47Channel.version)
}

// optional string id = 2;
inline bool Bip47Channel::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Bip47Channel::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Bip47Channel::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Bip47Channel::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_id();
}
inline const ::std::string& Bip47Channel::id() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Bip47Channel.id)
  return id_.GetNoArena();
}
inline void Bip47Channel::set_id(const ::std::string& value) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.Bip47Channel.id)
}
#if LANG_CXX11
inline void Bip47Channel::set_id(::std::string&& value) {
  set_has_id();
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.Bip47Channel.id)
}
#endif
inline void Bip47Channel::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.Bip47Channel.id)
}
inline void Bip47Channel::set_id(const char* value, size_t size) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.Bip47Channel.id)
}
inline ::std::string* Bip47Channel::mutable_id() {
  set_has_id();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.Bip47Channel.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Bip47Channel::release_id() {
  // @@protoc_insertion_point(field_release:opentxs.proto.Bip47Channel.id)
  clear_has_id();
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Bip47Channel::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    set_has_id();
  } else {
    clear_has_id();
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.Bip47Channel.id)
}

// optional string localpaymentcode = 3;
inline bool Bip47Channel::has_localpaymentcode() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Bip47Channel::set_has_localpaymentcode() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Bip47Channel::clear_has_localpaymentcode() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Bip47Channel::clear_localpaymentcode() {
  localpaymentcode_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_localpaymentcode();
}
inline const ::std::string& Bip47Channel::localpaymentcode() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Bip47Channel.localpaymentcode)
  return localpaymentcode_.GetNoArena();
}
inline void Bip47Channel::set_localpaymentcode(const ::std::string& value) {
  set_has_localpaymentcode();
  localpaymentcode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.Bip47Channel.localpaymentcode)
}
#if LANG_CXX11
inline void Bip47Channel::set_localpaymentcode(::std::string&& value) {
  set_has_localpaymentcode();
  localpaymentcode_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.Bip47Channel.localpaymentcode)
}
#endif
inline void Bip47Channel::set_localpaymentcode(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_localpaymentcode();
  localpaymentcode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.Bip47Channel.localpaymentcode)
}
inline void Bip47Channel::set_localpaymentcode(const char* value, size_t size) {
  set_has_localpaymentcode();
  localpaymentcode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.Bip47Channel.localpaymentcode)
}
inline ::std::string* Bip47Channel::mutable_localpaymentcode() {
  set_has_localpaymentcode();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.Bip47Channel.localpaymentcode)
  return localpaymentcode_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Bip47Channel::release_localpaymentcode() {
  // @@protoc_insertion_point(field_release:opentxs.proto.Bip47Channel.localpaymentcode)
  clear_has_localpaymentcode();
  return localpaymentcode_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Bip47Channel::set_allocated_localpaymentcode(::std::string* localpaymentcode) {
  if (localpaymentcode != NULL) {
    set_has_localpaymentcode();
  } else {
    clear_has_localpaymentcode();
  }
  localpaymentcode_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), localpaymentcode);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.Bip47Channel.localpaymentcode)
}

// optional .opentxs.proto.ContactItemType chain = 4;
inline bool Bip47Channel::has_chain() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Bip47Channel::set_has_chain() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Bip47Channel::clear_has_chain() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Bip47Channel::clear_chain() {
  chain_ = 0;
  clear_has_chain();
}
inline ::opentxs::proto::ContactItemType Bip47Channel::chain() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Bip47Channel.chain)
  return static_cast< ::opentxs::proto::ContactItemType >(chain_);
}
inline void Bip47Channel::set_chain(::opentxs::proto::ContactItemType value) {
  assert(::opentxs::proto::ContactItemType_IsValid(value));
  set_has_chain();
  chain_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Bip47Channel.chain)
}

// optional string contact = 5;
inline bool Bip47Channel::has_contact() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Bip47Channel::set_has_contact() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Bip47Channel::clear_has_contact() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Bip47Channel::clear_contact() {
  contact_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_contact();
}
inline const ::std::string& Bip47Channel::contact() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Bip47Channel.contact)
  return contact_.GetNoArena();
}
inline void Bip47Channel::set_contact(const ::std::string& value) {
  set_has_contact();
  contact_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.Bip47Channel.contact)
}
#if LANG_CXX11
inline void Bip47Channel::set_contact(::std::string&& value) {
  set_has_contact();
  contact_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.Bip47Channel.contact)
}
#endif
inline void Bip47Channel::set_contact(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_contact();
  contact_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.Bip47Channel.contact)
}
inline void Bip47Channel::set_contact(const char* value, size_t size) {
  set_has_contact();
  contact_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.Bip47Channel.contact)
}
inline ::std::string* Bip47Channel::mutable_contact() {
  set_has_contact();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.Bip47Channel.contact)
  return contact_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Bip47Channel::release_contact() {
  // @@protoc_insertion_point(field_release:opentxs.proto.Bip47Channel.contact)
  clear_has_contact();
  return contact_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Bip47Channel::set_allocated_contact(::std::string* contact) {
  if (contact != NULL) {
    set_has_contact();
  } else {
    clear_has_contact();
  }
  contact_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), contact);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.Bip47Channel.contact)
}

// optional string remotepaymentcode = 6;
inline bool Bip47Channel::has_remotepaymentcode() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Bip47Channel::set_has_remotepaymentcode() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Bip47Channel::clear_has_remotepaymentcode() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Bip47Channel::clear_remotepaymentcode() {
  remotepaymentcode_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_remotepaymentcode();
}
inline const ::std::string& Bip47Channel::remotepaymentcode() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Bip47Channel.remotepaymentcode)
  return remotepaymentcode_.GetNoArena();
}
inline void Bip47Channel::set_remotepaymentcode(const ::std::string& value) {
  set_has_remotepaymentcode();
  remotepaymentcode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.Bip47Channel.remotepaymentcode)
}
#if LANG_CXX11
inline void Bip47Channel::set_remotepaymentcode(::std::string&& value) {
  set_has_remotepaymentcode();
  remotepaymentcode_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.Bip47Channel.remotepaymentcode)
}
#endif
inline void Bip47Channel::set_remotepaymentcode(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_remotepaymentcode();
  remotepaymentcode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.Bip47Channel.remotepaymentcode)
}
inline void Bip47Channel::set_remotepaymentcode(const char* value, size_t size) {
  set_has_remotepaymentcode();
  remotepaymentcode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.Bip47Channel.remotepaymentcode)
}
inline ::std::string* Bip47Channel::mutable_remotepaymentcode() {
  set_has_remotepaymentcode();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.Bip47Channel.remotepaymentcode)
  return remotepaymentcode_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Bip47Channel::release_remotepaymentcode() {
  // @@protoc_insertion_point(field_release:opentxs.proto.Bip47Channel.remotepaymentcode)
  clear_has_remotepaymentcode();
  return remotepaymentcode_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Bip47Channel::set_allocated_remotepaymentcode(::std::string* remotepaymentcode) {
  if (remotepaymentcode != NULL) {
    set_has_remotepaymentcode();
  } else {
    clear_has_remotepaymentcode();
  }
  remotepaymentcode_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), remotepaymentcode);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.Bip47Channel.remotepaymentcode)
}

// optional .opentxs.proto.Bip47Direction incoming = 7;
inline bool Bip47Channel::has_incoming() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Bip47Channel::set_has_incoming() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Bip47Channel::clear_has_incoming() {
  _has_bits_[0] &= ~0x00000010u;
}
inline const ::opentxs::proto::Bip47Direction& Bip47Channel::incoming() const {
  const ::opentxs::proto::Bip47Direction* p = incoming_;
  // @@protoc_insertion_point(field_get:opentxs.proto.Bip47Channel.incoming)
  return p != NULL ? *p : *reinterpret_cast<const ::opentxs::proto::Bip47Direction*>(
      &::opentxs::proto::_Bip47Direction_default_instance_);
}
inline ::opentxs::proto::Bip47Direction* Bip47Channel::release_incoming() {
  // @@protoc_insertion_point(field_release:opentxs.proto.Bip47Channel.incoming)
  clear_has_incoming();
  ::opentxs::proto::Bip47Direction* temp = incoming_;
  incoming_ = NULL;
  return temp;
}
inline ::opentxs::proto::Bip47Direction* Bip47Channel::mutable_incoming() {
  set_has_incoming();
  if (incoming_ == NULL) {
    incoming_ = new ::opentxs::proto::Bip47Direction;
  }
  // @@protoc_insertion_point(field_mutable:opentxs.proto.Bip47Channel.incoming)
  return incoming_;
}
inline void Bip47Channel::set_allocated_incoming(::opentxs::proto::Bip47Direction* incoming) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(incoming_);
  }
  if (incoming) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      incoming = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, incoming, submessage_arena);
    }
    set_has_incoming();
  } else {
    clear_has_incoming();
  }
  incoming_ = incoming;
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.Bip47Channel.incoming)
}

// optional .opentxs.proto.Bip47Direction outgoing = 8;
inline bool Bip47Channel::has_outgoing() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Bip47Channel::set_has_outgoing() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Bip47Channel::clear_has_outgoing() {
  _has_bits_[0] &= ~0x00000020u;
}
inline const ::opentxs::proto::Bip47Direction& Bip47Channel::outgoing() const {
  const ::opentxs::proto::Bip47Direction* p = outgoing_;
  // @@protoc_insertion_point(field_get:opentxs.proto.Bip47Channel.outgoing)
  return p != NULL ? *p : *reinterpret_cast<const ::opentxs::proto::Bip47Direction*>(
      &::opentxs::proto::_Bip47Direction_default_instance_);
}
inline ::opentxs::proto::Bip47Direction* Bip47Channel::release_outgoing() {
  // @@protoc_insertion_point(field_release:opentxs.proto.Bip47Channel.outgoing)
  clear_has_outgoing();
  ::opentxs::proto::Bip47Direction* temp = outgoing_;
  outgoing_ = NULL;
  return temp;
}
inline ::opentxs::proto::Bip47Direction* Bip47Channel::mutable_outgoing() {
  set_has_outgoing();
  if (outgoing_ == NULL) {
    outgoing_ = new ::opentxs::proto::Bip47Direction;
  }
  // @@protoc_insertion_point(field_mutable:opentxs.proto.Bip47Channel.outgoing)
  return outgoing_;
}
inline void Bip47Channel::set_allocated_outgoing(::opentxs::proto::Bip47Direction* outgoing) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(outgoing_);
  }
  if (outgoing) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      outgoing = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, outgoing, submessage_arena);
    }
    set_has_outgoing();
  } else {
    clear_has_outgoing();
  }
  outgoing_ = outgoing;
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.Bip47Channel.outgoing)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Bip47Channel_2eproto__INCLUDED