// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Bip44Account.proto

#ifndef PROTOBUF_Bip44Account_2eproto__INCLUDED
#define PROTOBUF_Bip44Account_2eproto__INCLUDED

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
#include "Bip44Address.pb.h"  // IWYU pragma: export
#include "ContactEnums.pb.h"  // IWYU pragma: export
#include "HDPath.pb.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_Bip44Account_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsBip44AccountImpl();
void InitDefaultsBip44Account();
inline void InitDefaults() {
  InitDefaultsBip44Account();
}
}  // namespace protobuf_Bip44Account_2eproto
namespace opentxs {
namespace proto {
class Bip44Account;
class Bip44AccountDefaultTypeInternal;
extern Bip44AccountDefaultTypeInternal _Bip44Account_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class Bip44Account : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.Bip44Account) */ {
 public:
  Bip44Account();
  virtual ~Bip44Account();

  Bip44Account(const Bip44Account& from);

  inline Bip44Account& operator=(const Bip44Account& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Bip44Account(Bip44Account&& from) noexcept
    : Bip44Account() {
    *this = ::std::move(from);
  }

  inline Bip44Account& operator=(Bip44Account&& from) noexcept {
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

  static const Bip44Account& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Bip44Account* internal_default_instance() {
    return reinterpret_cast<const Bip44Account*>(
               &_Bip44Account_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Bip44Account* other);
  friend void swap(Bip44Account& a, Bip44Account& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Bip44Account* New() const PROTOBUF_FINAL { return New(NULL); }

  Bip44Account* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Bip44Account& from);
  void MergeFrom(const Bip44Account& from);
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
  void InternalSwap(Bip44Account* other);
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

  // repeated .opentxs.proto.Bip44Address internaladdress = 8;
  int internaladdress_size() const;
  void clear_internaladdress();
  static const int kInternaladdressFieldNumber = 8;
  const ::opentxs::proto::Bip44Address& internaladdress(int index) const;
  ::opentxs::proto::Bip44Address* mutable_internaladdress(int index);
  ::opentxs::proto::Bip44Address* add_internaladdress();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::Bip44Address >*
      mutable_internaladdress();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::Bip44Address >&
      internaladdress() const;

  // repeated .opentxs.proto.Bip44Address externaladdress = 9;
  int externaladdress_size() const;
  void clear_externaladdress();
  static const int kExternaladdressFieldNumber = 9;
  const ::opentxs::proto::Bip44Address& externaladdress(int index) const;
  ::opentxs::proto::Bip44Address* mutable_externaladdress(int index);
  ::opentxs::proto::Bip44Address* add_externaladdress();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::Bip44Address >*
      mutable_externaladdress();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::Bip44Address >&
      externaladdress() const;

  // repeated string outgoing = 10;
  int outgoing_size() const;
  void clear_outgoing();
  static const int kOutgoingFieldNumber = 10;
  const ::std::string& outgoing(int index) const;
  ::std::string* mutable_outgoing(int index);
  void set_outgoing(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_outgoing(int index, ::std::string&& value);
  #endif
  void set_outgoing(int index, const char* value);
  void set_outgoing(int index, const char* value, size_t size);
  ::std::string* add_outgoing();
  void add_outgoing(const ::std::string& value);
  #if LANG_CXX11
  void add_outgoing(::std::string&& value);
  #endif
  void add_outgoing(const char* value);
  void add_outgoing(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& outgoing() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_outgoing();

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

  // optional .opentxs.proto.HDPath path = 5;
  bool has_path() const;
  void clear_path();
  static const int kPathFieldNumber = 5;
  const ::opentxs::proto::HDPath& path() const;
  ::opentxs::proto::HDPath* release_path();
  ::opentxs::proto::HDPath* mutable_path();
  void set_allocated_path(::opentxs::proto::HDPath* path);

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // optional .opentxs.proto.ContactItemType type = 3;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 3;
  ::opentxs::proto::ContactItemType type() const;
  void set_type(::opentxs::proto::ContactItemType value);

  // optional uint64 revision = 4;
  bool has_revision() const;
  void clear_revision();
  static const int kRevisionFieldNumber = 4;
  ::google::protobuf::uint64 revision() const;
  void set_revision(::google::protobuf::uint64 value);

  // optional uint32 internalindex = 6;
  bool has_internalindex() const;
  void clear_internalindex();
  static const int kInternalindexFieldNumber = 6;
  ::google::protobuf::uint32 internalindex() const;
  void set_internalindex(::google::protobuf::uint32 value);

  // optional uint32 externalindex = 7;
  bool has_externalindex() const;
  void clear_externalindex();
  static const int kExternalindexFieldNumber = 7;
  ::google::protobuf::uint32 externalindex() const;
  void set_externalindex(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.Bip44Account)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_id();
  void clear_has_id();
  void set_has_type();
  void clear_has_type();
  void set_has_revision();
  void clear_has_revision();
  void set_has_path();
  void clear_has_path();
  void set_has_internalindex();
  void clear_has_internalindex();
  void set_has_externalindex();
  void clear_has_externalindex();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::Bip44Address > internaladdress_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::Bip44Address > externaladdress_;
  ::google::protobuf::RepeatedPtrField< ::std::string> outgoing_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::opentxs::proto::HDPath* path_;
  ::google::protobuf::uint32 version_;
  int type_;
  ::google::protobuf::uint64 revision_;
  ::google::protobuf::uint32 internalindex_;
  ::google::protobuf::uint32 externalindex_;
  friend struct ::protobuf_Bip44Account_2eproto::TableStruct;
  friend void ::protobuf_Bip44Account_2eproto::InitDefaultsBip44AccountImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Bip44Account

// optional uint32 version = 1;
inline bool Bip44Account::has_version() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Bip44Account::set_has_version() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Bip44Account::clear_has_version() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Bip44Account::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 Bip44Account::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Bip44Account.version)
  return version_;
}
inline void Bip44Account::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Bip44Account.version)
}

// optional string id = 2;
inline bool Bip44Account::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Bip44Account::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Bip44Account::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Bip44Account::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_id();
}
inline const ::std::string& Bip44Account::id() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Bip44Account.id)
  return id_.GetNoArena();
}
inline void Bip44Account::set_id(const ::std::string& value) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.Bip44Account.id)
}
#if LANG_CXX11
inline void Bip44Account::set_id(::std::string&& value) {
  set_has_id();
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.Bip44Account.id)
}
#endif
inline void Bip44Account::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.Bip44Account.id)
}
inline void Bip44Account::set_id(const char* value, size_t size) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.Bip44Account.id)
}
inline ::std::string* Bip44Account::mutable_id() {
  set_has_id();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.Bip44Account.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Bip44Account::release_id() {
  // @@protoc_insertion_point(field_release:opentxs.proto.Bip44Account.id)
  clear_has_id();
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Bip44Account::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    set_has_id();
  } else {
    clear_has_id();
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.Bip44Account.id)
}

// optional .opentxs.proto.ContactItemType type = 3;
inline bool Bip44Account::has_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Bip44Account::set_has_type() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Bip44Account::clear_has_type() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Bip44Account::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::opentxs::proto::ContactItemType Bip44Account::type() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Bip44Account.type)
  return static_cast< ::opentxs::proto::ContactItemType >(type_);
}
inline void Bip44Account::set_type(::opentxs::proto::ContactItemType value) {
  assert(::opentxs::proto::ContactItemType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Bip44Account.type)
}

// optional uint64 revision = 4;
inline bool Bip44Account::has_revision() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Bip44Account::set_has_revision() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Bip44Account::clear_has_revision() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Bip44Account::clear_revision() {
  revision_ = GOOGLE_ULONGLONG(0);
  clear_has_revision();
}
inline ::google::protobuf::uint64 Bip44Account::revision() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Bip44Account.revision)
  return revision_;
}
inline void Bip44Account::set_revision(::google::protobuf::uint64 value) {
  set_has_revision();
  revision_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Bip44Account.revision)
}

// optional .opentxs.proto.HDPath path = 5;
inline bool Bip44Account::has_path() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Bip44Account::set_has_path() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Bip44Account::clear_has_path() {
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::opentxs::proto::HDPath& Bip44Account::path() const {
  const ::opentxs::proto::HDPath* p = path_;
  // @@protoc_insertion_point(field_get:opentxs.proto.Bip44Account.path)
  return p != NULL ? *p : *reinterpret_cast<const ::opentxs::proto::HDPath*>(
      &::opentxs::proto::_HDPath_default_instance_);
}
inline ::opentxs::proto::HDPath* Bip44Account::release_path() {
  // @@protoc_insertion_point(field_release:opentxs.proto.Bip44Account.path)
  clear_has_path();
  ::opentxs::proto::HDPath* temp = path_;
  path_ = NULL;
  return temp;
}
inline ::opentxs::proto::HDPath* Bip44Account::mutable_path() {
  set_has_path();
  if (path_ == NULL) {
    path_ = new ::opentxs::proto::HDPath;
  }
  // @@protoc_insertion_point(field_mutable:opentxs.proto.Bip44Account.path)
  return path_;
}
inline void Bip44Account::set_allocated_path(::opentxs::proto::HDPath* path) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(path_);
  }
  if (path) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      path = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, path, submessage_arena);
    }
    set_has_path();
  } else {
    clear_has_path();
  }
  path_ = path;
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.Bip44Account.path)
}

// optional uint32 internalindex = 6;
inline bool Bip44Account::has_internalindex() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Bip44Account::set_has_internalindex() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Bip44Account::clear_has_internalindex() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Bip44Account::clear_internalindex() {
  internalindex_ = 0u;
  clear_has_internalindex();
}
inline ::google::protobuf::uint32 Bip44Account::internalindex() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Bip44Account.internalindex)
  return internalindex_;
}
inline void Bip44Account::set_internalindex(::google::protobuf::uint32 value) {
  set_has_internalindex();
  internalindex_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Bip44Account.internalindex)
}

// optional uint32 externalindex = 7;
inline bool Bip44Account::has_externalindex() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Bip44Account::set_has_externalindex() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Bip44Account::clear_has_externalindex() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Bip44Account::clear_externalindex() {
  externalindex_ = 0u;
  clear_has_externalindex();
}
inline ::google::protobuf::uint32 Bip44Account::externalindex() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Bip44Account.externalindex)
  return externalindex_;
}
inline void Bip44Account::set_externalindex(::google::protobuf::uint32 value) {
  set_has_externalindex();
  externalindex_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Bip44Account.externalindex)
}

// repeated .opentxs.proto.Bip44Address internaladdress = 8;
inline int Bip44Account::internaladdress_size() const {
  return internaladdress_.size();
}
inline const ::opentxs::proto::Bip44Address& Bip44Account::internaladdress(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Bip44Account.internaladdress)
  return internaladdress_.Get(index);
}
inline ::opentxs::proto::Bip44Address* Bip44Account::mutable_internaladdress(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.Bip44Account.internaladdress)
  return internaladdress_.Mutable(index);
}
inline ::opentxs::proto::Bip44Address* Bip44Account::add_internaladdress() {
  // @@protoc_insertion_point(field_add:opentxs.proto.Bip44Account.internaladdress)
  return internaladdress_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::Bip44Address >*
Bip44Account::mutable_internaladdress() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.Bip44Account.internaladdress)
  return &internaladdress_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::Bip44Address >&
Bip44Account::internaladdress() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.Bip44Account.internaladdress)
  return internaladdress_;
}

// repeated .opentxs.proto.Bip44Address externaladdress = 9;
inline int Bip44Account::externaladdress_size() const {
  return externaladdress_.size();
}
inline const ::opentxs::proto::Bip44Address& Bip44Account::externaladdress(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Bip44Account.externaladdress)
  return externaladdress_.Get(index);
}
inline ::opentxs::proto::Bip44Address* Bip44Account::mutable_externaladdress(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.Bip44Account.externaladdress)
  return externaladdress_.Mutable(index);
}
inline ::opentxs::proto::Bip44Address* Bip44Account::add_externaladdress() {
  // @@protoc_insertion_point(field_add:opentxs.proto.Bip44Account.externaladdress)
  return externaladdress_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::Bip44Address >*
Bip44Account::mutable_externaladdress() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.Bip44Account.externaladdress)
  return &externaladdress_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::Bip44Address >&
Bip44Account::externaladdress() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.Bip44Account.externaladdress)
  return externaladdress_;
}

// repeated string outgoing = 10;
inline int Bip44Account::outgoing_size() const {
  return outgoing_.size();
}
inline void Bip44Account::clear_outgoing() {
  outgoing_.Clear();
}
inline const ::std::string& Bip44Account::outgoing(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Bip44Account.outgoing)
  return outgoing_.Get(index);
}
inline ::std::string* Bip44Account::mutable_outgoing(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.Bip44Account.outgoing)
  return outgoing_.Mutable(index);
}
inline void Bip44Account::set_outgoing(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:opentxs.proto.Bip44Account.outgoing)
  outgoing_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void Bip44Account::set_outgoing(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:opentxs.proto.Bip44Account.outgoing)
  outgoing_.Mutable(index)->assign(std::move(value));
}
#endif
inline void Bip44Account::set_outgoing(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  outgoing_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:opentxs.proto.Bip44Account.outgoing)
}
inline void Bip44Account::set_outgoing(int index, const char* value, size_t size) {
  outgoing_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.Bip44Account.outgoing)
}
inline ::std::string* Bip44Account::add_outgoing() {
  // @@protoc_insertion_point(field_add_mutable:opentxs.proto.Bip44Account.outgoing)
  return outgoing_.Add();
}
inline void Bip44Account::add_outgoing(const ::std::string& value) {
  outgoing_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:opentxs.proto.Bip44Account.outgoing)
}
#if LANG_CXX11
inline void Bip44Account::add_outgoing(::std::string&& value) {
  outgoing_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:opentxs.proto.Bip44Account.outgoing)
}
#endif
inline void Bip44Account::add_outgoing(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  outgoing_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:opentxs.proto.Bip44Account.outgoing)
}
inline void Bip44Account::add_outgoing(const char* value, size_t size) {
  outgoing_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:opentxs.proto.Bip44Account.outgoing)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Bip44Account::outgoing() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.Bip44Account.outgoing)
  return outgoing_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Bip44Account::mutable_outgoing() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.Bip44Account.outgoing)
  return &outgoing_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Bip44Account_2eproto__INCLUDED
