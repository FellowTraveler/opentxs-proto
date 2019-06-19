// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Purse.proto

#ifndef PROTOBUF_Purse_2eproto__INCLUDED
#define PROTOBUF_Purse_2eproto__INCLUDED

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
#include "CashEnums.pb.h"  // IWYU pragma: export
#include "Ciphertext.pb.h"  // IWYU pragma: export
#include "SessionKey.pb.h"  // IWYU pragma: export
#include "Token.pb.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_Purse_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsPurseImpl();
void InitDefaultsPurse();
inline void InitDefaults() {
  InitDefaultsPurse();
}
}  // namespace protobuf_Purse_2eproto
namespace opentxs {
namespace proto {
class Purse;
class PurseDefaultTypeInternal;
extern PurseDefaultTypeInternal _Purse_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class Purse : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.Purse) */ {
 public:
  Purse();
  virtual ~Purse();

  Purse(const Purse& from);

  inline Purse& operator=(const Purse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Purse(Purse&& from) noexcept
    : Purse() {
    *this = ::std::move(from);
  }

  inline Purse& operator=(Purse&& from) noexcept {
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

  static const Purse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Purse* internal_default_instance() {
    return reinterpret_cast<const Purse*>(
               &_Purse_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Purse* other);
  friend void swap(Purse& a, Purse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Purse* New() const PROTOBUF_FINAL { return New(NULL); }

  Purse* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Purse& from);
  void MergeFrom(const Purse& from);
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
  void InternalSwap(Purse* other);
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

  // repeated .opentxs.proto.Token token = 9;
  int token_size() const;
  void clear_token();
  static const int kTokenFieldNumber = 9;
  const ::opentxs::proto::Token& token(int index) const;
  ::opentxs::proto::Token* mutable_token(int index);
  ::opentxs::proto::Token* add_token();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::Token >*
      mutable_token();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::Token >&
      token() const;

  // repeated .opentxs.proto.SessionKey primarypassword = 11;
  int primarypassword_size() const;
  void clear_primarypassword();
  static const int kPrimarypasswordFieldNumber = 11;
  const ::opentxs::proto::SessionKey& primarypassword(int index) const;
  ::opentxs::proto::SessionKey* mutable_primarypassword(int index);
  ::opentxs::proto::SessionKey* add_primarypassword();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::SessionKey >*
      mutable_primarypassword();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::SessionKey >&
      primarypassword() const;

  // optional string notary = 4;
  bool has_notary() const;
  void clear_notary();
  static const int kNotaryFieldNumber = 4;
  const ::std::string& notary() const;
  void set_notary(const ::std::string& value);
  #if LANG_CXX11
  void set_notary(::std::string&& value);
  #endif
  void set_notary(const char* value);
  void set_notary(const char* value, size_t size);
  ::std::string* mutable_notary();
  ::std::string* release_notary();
  void set_allocated_notary(::std::string* notary);

  // optional string mint = 5;
  bool has_mint() const;
  void clear_mint();
  static const int kMintFieldNumber = 5;
  const ::std::string& mint() const;
  void set_mint(const ::std::string& value);
  #if LANG_CXX11
  void set_mint(::std::string&& value);
  #endif
  void set_mint(const char* value);
  void set_mint(const char* value, size_t size);
  ::std::string* mutable_mint();
  ::std::string* release_mint();
  void set_allocated_mint(::std::string* mint);

  // optional .opentxs.proto.SymmetricKey primarykey = 10;
  bool has_primarykey() const;
  void clear_primarykey();
  static const int kPrimarykeyFieldNumber = 10;
  const ::opentxs::proto::SymmetricKey& primarykey() const;
  ::opentxs::proto::SymmetricKey* release_primarykey();
  ::opentxs::proto::SymmetricKey* mutable_primarykey();
  void set_allocated_primarykey(::opentxs::proto::SymmetricKey* primarykey);

  // optional .opentxs.proto.SymmetricKey secondarykey = 12;
  bool has_secondarykey() const;
  void clear_secondarykey();
  static const int kSecondarykeyFieldNumber = 12;
  const ::opentxs::proto::SymmetricKey& secondarykey() const;
  ::opentxs::proto::SymmetricKey* release_secondarykey();
  ::opentxs::proto::SymmetricKey* mutable_secondarykey();
  void set_allocated_secondarykey(::opentxs::proto::SymmetricKey* secondarykey);

  // optional .opentxs.proto.Ciphertext secondarypassword = 13;
  bool has_secondarypassword() const;
  void clear_secondarypassword();
  static const int kSecondarypasswordFieldNumber = 13;
  const ::opentxs::proto::Ciphertext& secondarypassword() const;
  ::opentxs::proto::Ciphertext* release_secondarypassword();
  ::opentxs::proto::Ciphertext* mutable_secondarypassword();
  void set_allocated_secondarypassword(::opentxs::proto::Ciphertext* secondarypassword);

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // optional .opentxs.proto.CashType type = 2;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  ::opentxs::proto::CashType type() const;
  void set_type(::opentxs::proto::CashType value);

  // optional int64 totalvalue = 6;
  bool has_totalvalue() const;
  void clear_totalvalue();
  static const int kTotalvalueFieldNumber = 6;
  ::google::protobuf::int64 totalvalue() const;
  void set_totalvalue(::google::protobuf::int64 value);

  // optional int64 latestvalidfrom = 7;
  bool has_latestvalidfrom() const;
  void clear_latestvalidfrom();
  static const int kLatestvalidfromFieldNumber = 7;
  ::google::protobuf::int64 latestvalidfrom() const;
  void set_latestvalidfrom(::google::protobuf::int64 value);

  // optional int64 earliestvalidto = 8;
  bool has_earliestvalidto() const;
  void clear_earliestvalidto();
  static const int kEarliestvalidtoFieldNumber = 8;
  ::google::protobuf::int64 earliestvalidto() const;
  void set_earliestvalidto(::google::protobuf::int64 value);

  // optional .opentxs.proto.PurseType state = 3;
  bool has_state() const;
  void clear_state();
  static const int kStateFieldNumber = 3;
  ::opentxs::proto::PurseType state() const;
  void set_state(::opentxs::proto::PurseType value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.Purse)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_type();
  void clear_has_type();
  void set_has_state();
  void clear_has_state();
  void set_has_notary();
  void clear_has_notary();
  void set_has_mint();
  void clear_has_mint();
  void set_has_totalvalue();
  void clear_has_totalvalue();
  void set_has_latestvalidfrom();
  void clear_has_latestvalidfrom();
  void set_has_earliestvalidto();
  void clear_has_earliestvalidto();
  void set_has_primarykey();
  void clear_has_primarykey();
  void set_has_secondarykey();
  void clear_has_secondarykey();
  void set_has_secondarypassword();
  void clear_has_secondarypassword();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::Token > token_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::SessionKey > primarypassword_;
  ::google::protobuf::internal::ArenaStringPtr notary_;
  ::google::protobuf::internal::ArenaStringPtr mint_;
  ::opentxs::proto::SymmetricKey* primarykey_;
  ::opentxs::proto::SymmetricKey* secondarykey_;
  ::opentxs::proto::Ciphertext* secondarypassword_;
  ::google::protobuf::uint32 version_;
  int type_;
  ::google::protobuf::int64 totalvalue_;
  ::google::protobuf::int64 latestvalidfrom_;
  ::google::protobuf::int64 earliestvalidto_;
  int state_;
  friend struct ::protobuf_Purse_2eproto::TableStruct;
  friend void ::protobuf_Purse_2eproto::InitDefaultsPurseImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Purse

// optional uint32 version = 1;
inline bool Purse::has_version() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Purse::set_has_version() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Purse::clear_has_version() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Purse::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 Purse::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Purse.version)
  return version_;
}
inline void Purse::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Purse.version)
}

// optional .opentxs.proto.CashType type = 2;
inline bool Purse::has_type() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Purse::set_has_type() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Purse::clear_has_type() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Purse::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::opentxs::proto::CashType Purse::type() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Purse.type)
  return static_cast< ::opentxs::proto::CashType >(type_);
}
inline void Purse::set_type(::opentxs::proto::CashType value) {
  assert(::opentxs::proto::CashType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Purse.type)
}

// optional .opentxs.proto.PurseType state = 3;
inline bool Purse::has_state() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void Purse::set_has_state() {
  _has_bits_[0] |= 0x00000400u;
}
inline void Purse::clear_has_state() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void Purse::clear_state() {
  state_ = 0;
  clear_has_state();
}
inline ::opentxs::proto::PurseType Purse::state() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Purse.state)
  return static_cast< ::opentxs::proto::PurseType >(state_);
}
inline void Purse::set_state(::opentxs::proto::PurseType value) {
  assert(::opentxs::proto::PurseType_IsValid(value));
  set_has_state();
  state_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Purse.state)
}

// optional string notary = 4;
inline bool Purse::has_notary() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Purse::set_has_notary() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Purse::clear_has_notary() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Purse::clear_notary() {
  notary_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_notary();
}
inline const ::std::string& Purse::notary() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Purse.notary)
  return notary_.GetNoArena();
}
inline void Purse::set_notary(const ::std::string& value) {
  set_has_notary();
  notary_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.Purse.notary)
}
#if LANG_CXX11
inline void Purse::set_notary(::std::string&& value) {
  set_has_notary();
  notary_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.Purse.notary)
}
#endif
inline void Purse::set_notary(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_notary();
  notary_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.Purse.notary)
}
inline void Purse::set_notary(const char* value, size_t size) {
  set_has_notary();
  notary_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.Purse.notary)
}
inline ::std::string* Purse::mutable_notary() {
  set_has_notary();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.Purse.notary)
  return notary_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Purse::release_notary() {
  // @@protoc_insertion_point(field_release:opentxs.proto.Purse.notary)
  clear_has_notary();
  return notary_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Purse::set_allocated_notary(::std::string* notary) {
  if (notary != NULL) {
    set_has_notary();
  } else {
    clear_has_notary();
  }
  notary_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), notary);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.Purse.notary)
}

// optional string mint = 5;
inline bool Purse::has_mint() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Purse::set_has_mint() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Purse::clear_has_mint() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Purse::clear_mint() {
  mint_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_mint();
}
inline const ::std::string& Purse::mint() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Purse.mint)
  return mint_.GetNoArena();
}
inline void Purse::set_mint(const ::std::string& value) {
  set_has_mint();
  mint_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.Purse.mint)
}
#if LANG_CXX11
inline void Purse::set_mint(::std::string&& value) {
  set_has_mint();
  mint_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.Purse.mint)
}
#endif
inline void Purse::set_mint(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_mint();
  mint_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.Purse.mint)
}
inline void Purse::set_mint(const char* value, size_t size) {
  set_has_mint();
  mint_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.Purse.mint)
}
inline ::std::string* Purse::mutable_mint() {
  set_has_mint();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.Purse.mint)
  return mint_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Purse::release_mint() {
  // @@protoc_insertion_point(field_release:opentxs.proto.Purse.mint)
  clear_has_mint();
  return mint_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Purse::set_allocated_mint(::std::string* mint) {
  if (mint != NULL) {
    set_has_mint();
  } else {
    clear_has_mint();
  }
  mint_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), mint);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.Purse.mint)
}

// optional int64 totalvalue = 6;
inline bool Purse::has_totalvalue() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Purse::set_has_totalvalue() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Purse::clear_has_totalvalue() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Purse::clear_totalvalue() {
  totalvalue_ = GOOGLE_LONGLONG(0);
  clear_has_totalvalue();
}
inline ::google::protobuf::int64 Purse::totalvalue() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Purse.totalvalue)
  return totalvalue_;
}
inline void Purse::set_totalvalue(::google::protobuf::int64 value) {
  set_has_totalvalue();
  totalvalue_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Purse.totalvalue)
}

// optional int64 latestvalidfrom = 7;
inline bool Purse::has_latestvalidfrom() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void Purse::set_has_latestvalidfrom() {
  _has_bits_[0] |= 0x00000100u;
}
inline void Purse::clear_has_latestvalidfrom() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void Purse::clear_latestvalidfrom() {
  latestvalidfrom_ = GOOGLE_LONGLONG(0);
  clear_has_latestvalidfrom();
}
inline ::google::protobuf::int64 Purse::latestvalidfrom() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Purse.latestvalidfrom)
  return latestvalidfrom_;
}
inline void Purse::set_latestvalidfrom(::google::protobuf::int64 value) {
  set_has_latestvalidfrom();
  latestvalidfrom_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Purse.latestvalidfrom)
}

// optional int64 earliestvalidto = 8;
inline bool Purse::has_earliestvalidto() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void Purse::set_has_earliestvalidto() {
  _has_bits_[0] |= 0x00000200u;
}
inline void Purse::clear_has_earliestvalidto() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void Purse::clear_earliestvalidto() {
  earliestvalidto_ = GOOGLE_LONGLONG(0);
  clear_has_earliestvalidto();
}
inline ::google::protobuf::int64 Purse::earliestvalidto() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Purse.earliestvalidto)
  return earliestvalidto_;
}
inline void Purse::set_earliestvalidto(::google::protobuf::int64 value) {
  set_has_earliestvalidto();
  earliestvalidto_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Purse.earliestvalidto)
}

// repeated .opentxs.proto.Token token = 9;
inline int Purse::token_size() const {
  return token_.size();
}
inline const ::opentxs::proto::Token& Purse::token(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Purse.token)
  return token_.Get(index);
}
inline ::opentxs::proto::Token* Purse::mutable_token(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.Purse.token)
  return token_.Mutable(index);
}
inline ::opentxs::proto::Token* Purse::add_token() {
  // @@protoc_insertion_point(field_add:opentxs.proto.Purse.token)
  return token_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::Token >*
Purse::mutable_token() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.Purse.token)
  return &token_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::Token >&
Purse::token() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.Purse.token)
  return token_;
}

// optional .opentxs.proto.SymmetricKey primarykey = 10;
inline bool Purse::has_primarykey() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Purse::set_has_primarykey() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Purse::clear_has_primarykey() {
  _has_bits_[0] &= ~0x00000004u;
}
inline const ::opentxs::proto::SymmetricKey& Purse::primarykey() const {
  const ::opentxs::proto::SymmetricKey* p = primarykey_;
  // @@protoc_insertion_point(field_get:opentxs.proto.Purse.primarykey)
  return p != NULL ? *p : *reinterpret_cast<const ::opentxs::proto::SymmetricKey*>(
      &::opentxs::proto::_SymmetricKey_default_instance_);
}
inline ::opentxs::proto::SymmetricKey* Purse::release_primarykey() {
  // @@protoc_insertion_point(field_release:opentxs.proto.Purse.primarykey)
  clear_has_primarykey();
  ::opentxs::proto::SymmetricKey* temp = primarykey_;
  primarykey_ = NULL;
  return temp;
}
inline ::opentxs::proto::SymmetricKey* Purse::mutable_primarykey() {
  set_has_primarykey();
  if (primarykey_ == NULL) {
    primarykey_ = new ::opentxs::proto::SymmetricKey;
  }
  // @@protoc_insertion_point(field_mutable:opentxs.proto.Purse.primarykey)
  return primarykey_;
}
inline void Purse::set_allocated_primarykey(::opentxs::proto::SymmetricKey* primarykey) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(primarykey_);
  }
  if (primarykey) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      primarykey = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, primarykey, submessage_arena);
    }
    set_has_primarykey();
  } else {
    clear_has_primarykey();
  }
  primarykey_ = primarykey;
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.Purse.primarykey)
}

// repeated .opentxs.proto.SessionKey primarypassword = 11;
inline int Purse::primarypassword_size() const {
  return primarypassword_.size();
}
inline const ::opentxs::proto::SessionKey& Purse::primarypassword(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Purse.primarypassword)
  return primarypassword_.Get(index);
}
inline ::opentxs::proto::SessionKey* Purse::mutable_primarypassword(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.Purse.primarypassword)
  return primarypassword_.Mutable(index);
}
inline ::opentxs::proto::SessionKey* Purse::add_primarypassword() {
  // @@protoc_insertion_point(field_add:opentxs.proto.Purse.primarypassword)
  return primarypassword_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::SessionKey >*
Purse::mutable_primarypassword() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.Purse.primarypassword)
  return &primarypassword_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::SessionKey >&
Purse::primarypassword() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.Purse.primarypassword)
  return primarypassword_;
}

// optional .opentxs.proto.SymmetricKey secondarykey = 12;
inline bool Purse::has_secondarykey() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Purse::set_has_secondarykey() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Purse::clear_has_secondarykey() {
  _has_bits_[0] &= ~0x00000008u;
}
inline const ::opentxs::proto::SymmetricKey& Purse::secondarykey() const {
  const ::opentxs::proto::SymmetricKey* p = secondarykey_;
  // @@protoc_insertion_point(field_get:opentxs.proto.Purse.secondarykey)
  return p != NULL ? *p : *reinterpret_cast<const ::opentxs::proto::SymmetricKey*>(
      &::opentxs::proto::_SymmetricKey_default_instance_);
}
inline ::opentxs::proto::SymmetricKey* Purse::release_secondarykey() {
  // @@protoc_insertion_point(field_release:opentxs.proto.Purse.secondarykey)
  clear_has_secondarykey();
  ::opentxs::proto::SymmetricKey* temp = secondarykey_;
  secondarykey_ = NULL;
  return temp;
}
inline ::opentxs::proto::SymmetricKey* Purse::mutable_secondarykey() {
  set_has_secondarykey();
  if (secondarykey_ == NULL) {
    secondarykey_ = new ::opentxs::proto::SymmetricKey;
  }
  // @@protoc_insertion_point(field_mutable:opentxs.proto.Purse.secondarykey)
  return secondarykey_;
}
inline void Purse::set_allocated_secondarykey(::opentxs::proto::SymmetricKey* secondarykey) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(secondarykey_);
  }
  if (secondarykey) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      secondarykey = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, secondarykey, submessage_arena);
    }
    set_has_secondarykey();
  } else {
    clear_has_secondarykey();
  }
  secondarykey_ = secondarykey;
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.Purse.secondarykey)
}

// optional .opentxs.proto.Ciphertext secondarypassword = 13;
inline bool Purse::has_secondarypassword() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Purse::set_has_secondarypassword() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Purse::clear_has_secondarypassword() {
  _has_bits_[0] &= ~0x00000010u;
}
inline const ::opentxs::proto::Ciphertext& Purse::secondarypassword() const {
  const ::opentxs::proto::Ciphertext* p = secondarypassword_;
  // @@protoc_insertion_point(field_get:opentxs.proto.Purse.secondarypassword)
  return p != NULL ? *p : *reinterpret_cast<const ::opentxs::proto::Ciphertext*>(
      &::opentxs::proto::_Ciphertext_default_instance_);
}
inline ::opentxs::proto::Ciphertext* Purse::release_secondarypassword() {
  // @@protoc_insertion_point(field_release:opentxs.proto.Purse.secondarypassword)
  clear_has_secondarypassword();
  ::opentxs::proto::Ciphertext* temp = secondarypassword_;
  secondarypassword_ = NULL;
  return temp;
}
inline ::opentxs::proto::Ciphertext* Purse::mutable_secondarypassword() {
  set_has_secondarypassword();
  if (secondarypassword_ == NULL) {
    secondarypassword_ = new ::opentxs::proto::Ciphertext;
  }
  // @@protoc_insertion_point(field_mutable:opentxs.proto.Purse.secondarypassword)
  return secondarypassword_;
}
inline void Purse::set_allocated_secondarypassword(::opentxs::proto::Ciphertext* secondarypassword) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(secondarypassword_);
  }
  if (secondarypassword) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      secondarypassword = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, secondarypassword, submessage_arena);
    }
    set_has_secondarypassword();
  } else {
    clear_has_secondarypassword();
  }
  secondarypassword_ = secondarypassword;
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.Purse.secondarypassword)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Purse_2eproto__INCLUDED
