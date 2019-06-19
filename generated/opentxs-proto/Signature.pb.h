// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Signature.proto

#ifndef PROTOBUF_Signature_2eproto__INCLUDED
#define PROTOBUF_Signature_2eproto__INCLUDED

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
#include "Enums.pb.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_Signature_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsSignatureImpl();
void InitDefaultsSignature();
inline void InitDefaults() {
  InitDefaultsSignature();
}
}  // namespace protobuf_Signature_2eproto
namespace opentxs {
namespace proto {
class Signature;
class SignatureDefaultTypeInternal;
extern SignatureDefaultTypeInternal _Signature_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class Signature : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.Signature) */ {
 public:
  Signature();
  virtual ~Signature();

  Signature(const Signature& from);

  inline Signature& operator=(const Signature& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Signature(Signature&& from) noexcept
    : Signature() {
    *this = ::std::move(from);
  }

  inline Signature& operator=(Signature&& from) noexcept {
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

  static const Signature& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Signature* internal_default_instance() {
    return reinterpret_cast<const Signature*>(
               &_Signature_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Signature* other);
  friend void swap(Signature& a, Signature& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Signature* New() const PROTOBUF_FINAL { return New(NULL); }

  Signature* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Signature& from);
  void MergeFrom(const Signature& from);
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
  void InternalSwap(Signature* other);
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

  // optional string credentialID = 2;
  bool has_credentialid() const;
  void clear_credentialid();
  static const int kCredentialIDFieldNumber = 2;
  const ::std::string& credentialid() const;
  void set_credentialid(const ::std::string& value);
  #if LANG_CXX11
  void set_credentialid(::std::string&& value);
  #endif
  void set_credentialid(const char* value);
  void set_credentialid(const char* value, size_t size);
  ::std::string* mutable_credentialid();
  ::std::string* release_credentialid();
  void set_allocated_credentialid(::std::string* credentialid);

  // optional bytes signature = 5;
  bool has_signature() const;
  void clear_signature();
  static const int kSignatureFieldNumber = 5;
  const ::std::string& signature() const;
  void set_signature(const ::std::string& value);
  #if LANG_CXX11
  void set_signature(::std::string&& value);
  #endif
  void set_signature(const char* value);
  void set_signature(const void* value, size_t size);
  ::std::string* mutable_signature();
  ::std::string* release_signature();
  void set_allocated_signature(::std::string* signature);

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // optional .opentxs.proto.SignatureRole role = 3;
  bool has_role() const;
  void clear_role();
  static const int kRoleFieldNumber = 3;
  ::opentxs::proto::SignatureRole role() const;
  void set_role(::opentxs::proto::SignatureRole value);

  // optional .opentxs.proto.HashType hashType = 4;
  bool has_hashtype() const;
  void clear_hashtype();
  static const int kHashTypeFieldNumber = 4;
  ::opentxs::proto::HashType hashtype() const;
  void set_hashtype(::opentxs::proto::HashType value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.Signature)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_credentialid();
  void clear_has_credentialid();
  void set_has_role();
  void clear_has_role();
  void set_has_hashtype();
  void clear_has_hashtype();
  void set_has_signature();
  void clear_has_signature();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr credentialid_;
  ::google::protobuf::internal::ArenaStringPtr signature_;
  ::google::protobuf::uint32 version_;
  int role_;
  int hashtype_;
  friend struct ::protobuf_Signature_2eproto::TableStruct;
  friend void ::protobuf_Signature_2eproto::InitDefaultsSignatureImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Signature

// optional uint32 version = 1;
inline bool Signature::has_version() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Signature::set_has_version() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Signature::clear_has_version() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Signature::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 Signature::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Signature.version)
  return version_;
}
inline void Signature::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Signature.version)
}

// optional string credentialID = 2;
inline bool Signature::has_credentialid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Signature::set_has_credentialid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Signature::clear_has_credentialid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Signature::clear_credentialid() {
  credentialid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_credentialid();
}
inline const ::std::string& Signature::credentialid() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Signature.credentialID)
  return credentialid_.GetNoArena();
}
inline void Signature::set_credentialid(const ::std::string& value) {
  set_has_credentialid();
  credentialid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.Signature.credentialID)
}
#if LANG_CXX11
inline void Signature::set_credentialid(::std::string&& value) {
  set_has_credentialid();
  credentialid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.Signature.credentialID)
}
#endif
inline void Signature::set_credentialid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_credentialid();
  credentialid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.Signature.credentialID)
}
inline void Signature::set_credentialid(const char* value, size_t size) {
  set_has_credentialid();
  credentialid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.Signature.credentialID)
}
inline ::std::string* Signature::mutable_credentialid() {
  set_has_credentialid();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.Signature.credentialID)
  return credentialid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Signature::release_credentialid() {
  // @@protoc_insertion_point(field_release:opentxs.proto.Signature.credentialID)
  clear_has_credentialid();
  return credentialid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Signature::set_allocated_credentialid(::std::string* credentialid) {
  if (credentialid != NULL) {
    set_has_credentialid();
  } else {
    clear_has_credentialid();
  }
  credentialid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), credentialid);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.Signature.credentialID)
}

// optional .opentxs.proto.SignatureRole role = 3;
inline bool Signature::has_role() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Signature::set_has_role() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Signature::clear_has_role() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Signature::clear_role() {
  role_ = 0;
  clear_has_role();
}
inline ::opentxs::proto::SignatureRole Signature::role() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Signature.role)
  return static_cast< ::opentxs::proto::SignatureRole >(role_);
}
inline void Signature::set_role(::opentxs::proto::SignatureRole value) {
  assert(::opentxs::proto::SignatureRole_IsValid(value));
  set_has_role();
  role_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Signature.role)
}

// optional .opentxs.proto.HashType hashType = 4;
inline bool Signature::has_hashtype() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Signature::set_has_hashtype() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Signature::clear_has_hashtype() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Signature::clear_hashtype() {
  hashtype_ = 0;
  clear_has_hashtype();
}
inline ::opentxs::proto::HashType Signature::hashtype() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Signature.hashType)
  return static_cast< ::opentxs::proto::HashType >(hashtype_);
}
inline void Signature::set_hashtype(::opentxs::proto::HashType value) {
  assert(::opentxs::proto::HashType_IsValid(value));
  set_has_hashtype();
  hashtype_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Signature.hashType)
}

// optional bytes signature = 5;
inline bool Signature::has_signature() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Signature::set_has_signature() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Signature::clear_has_signature() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Signature::clear_signature() {
  signature_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_signature();
}
inline const ::std::string& Signature::signature() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Signature.signature)
  return signature_.GetNoArena();
}
inline void Signature::set_signature(const ::std::string& value) {
  set_has_signature();
  signature_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.Signature.signature)
}
#if LANG_CXX11
inline void Signature::set_signature(::std::string&& value) {
  set_has_signature();
  signature_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.Signature.signature)
}
#endif
inline void Signature::set_signature(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_signature();
  signature_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.Signature.signature)
}
inline void Signature::set_signature(const void* value, size_t size) {
  set_has_signature();
  signature_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.Signature.signature)
}
inline ::std::string* Signature::mutable_signature() {
  set_has_signature();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.Signature.signature)
  return signature_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Signature::release_signature() {
  // @@protoc_insertion_point(field_release:opentxs.proto.Signature.signature)
  clear_has_signature();
  return signature_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Signature::set_allocated_signature(::std::string* signature) {
  if (signature != NULL) {
    set_has_signature();
  } else {
    clear_has_signature();
  }
  signature_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), signature);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.Signature.signature)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Signature_2eproto__INCLUDED
