// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: VerifyClaim.proto

#ifndef PROTOBUF_VerifyClaim_2eproto__INCLUDED
#define PROTOBUF_VerifyClaim_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace protobuf_VerifyClaim_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsVerifyClaimImpl();
void InitDefaultsVerifyClaim();
inline void InitDefaults() {
  InitDefaultsVerifyClaim();
}
}  // namespace protobuf_VerifyClaim_2eproto
namespace opentxs {
namespace proto {
class VerifyClaim;
class VerifyClaimDefaultTypeInternal;
extern VerifyClaimDefaultTypeInternal _VerifyClaim_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class VerifyClaim : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.VerifyClaim) */ {
 public:
  VerifyClaim();
  virtual ~VerifyClaim();

  VerifyClaim(const VerifyClaim& from);

  inline VerifyClaim& operator=(const VerifyClaim& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  VerifyClaim(VerifyClaim&& from) noexcept
    : VerifyClaim() {
    *this = ::std::move(from);
  }

  inline VerifyClaim& operator=(VerifyClaim&& from) noexcept {
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

  static const VerifyClaim& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const VerifyClaim* internal_default_instance() {
    return reinterpret_cast<const VerifyClaim*>(
               &_VerifyClaim_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(VerifyClaim* other);
  friend void swap(VerifyClaim& a, VerifyClaim& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline VerifyClaim* New() const PROTOBUF_FINAL { return New(NULL); }

  VerifyClaim* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const VerifyClaim& from);
  void MergeFrom(const VerifyClaim& from);
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
  void InternalSwap(VerifyClaim* other);
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

  // optional string targetnym = 2;
  bool has_targetnym() const;
  void clear_targetnym();
  static const int kTargetnymFieldNumber = 2;
  const ::std::string& targetnym() const;
  void set_targetnym(const ::std::string& value);
  #if LANG_CXX11
  void set_targetnym(::std::string&& value);
  #endif
  void set_targetnym(const char* value);
  void set_targetnym(const char* value, size_t size);
  ::std::string* mutable_targetnym();
  ::std::string* release_targetnym();
  void set_allocated_targetnym(::std::string* targetnym);

  // optional string claimid = 3;
  bool has_claimid() const;
  void clear_claimid();
  static const int kClaimidFieldNumber = 3;
  const ::std::string& claimid() const;
  void set_claimid(const ::std::string& value);
  #if LANG_CXX11
  void set_claimid(::std::string&& value);
  #endif
  void set_claimid(const char* value);
  void set_claimid(const char* value, size_t size);
  ::std::string* mutable_claimid();
  ::std::string* release_claimid();
  void set_allocated_claimid(::std::string* claimid);

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // optional bool value = 4;
  bool has_value() const;
  void clear_value();
  static const int kValueFieldNumber = 4;
  bool value() const;
  void set_value(bool value);

  // optional int64 start = 5;
  bool has_start() const;
  void clear_start();
  static const int kStartFieldNumber = 5;
  ::google::protobuf::int64 start() const;
  void set_start(::google::protobuf::int64 value);

  // optional int64 end = 6;
  bool has_end() const;
  void clear_end();
  static const int kEndFieldNumber = 6;
  ::google::protobuf::int64 end() const;
  void set_end(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.VerifyClaim)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_targetnym();
  void clear_has_targetnym();
  void set_has_claimid();
  void clear_has_claimid();
  void set_has_value();
  void clear_has_value();
  void set_has_start();
  void clear_has_start();
  void set_has_end();
  void clear_has_end();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr targetnym_;
  ::google::protobuf::internal::ArenaStringPtr claimid_;
  ::google::protobuf::uint32 version_;
  bool value_;
  ::google::protobuf::int64 start_;
  ::google::protobuf::int64 end_;
  friend struct ::protobuf_VerifyClaim_2eproto::TableStruct;
  friend void ::protobuf_VerifyClaim_2eproto::InitDefaultsVerifyClaimImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// VerifyClaim

// optional uint32 version = 1;
inline bool VerifyClaim::has_version() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void VerifyClaim::set_has_version() {
  _has_bits_[0] |= 0x00000004u;
}
inline void VerifyClaim::clear_has_version() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void VerifyClaim::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 VerifyClaim::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.VerifyClaim.version)
  return version_;
}
inline void VerifyClaim::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.VerifyClaim.version)
}

// optional string targetnym = 2;
inline bool VerifyClaim::has_targetnym() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void VerifyClaim::set_has_targetnym() {
  _has_bits_[0] |= 0x00000001u;
}
inline void VerifyClaim::clear_has_targetnym() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void VerifyClaim::clear_targetnym() {
  targetnym_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_targetnym();
}
inline const ::std::string& VerifyClaim::targetnym() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.VerifyClaim.targetnym)
  return targetnym_.GetNoArena();
}
inline void VerifyClaim::set_targetnym(const ::std::string& value) {
  set_has_targetnym();
  targetnym_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.VerifyClaim.targetnym)
}
#if LANG_CXX11
inline void VerifyClaim::set_targetnym(::std::string&& value) {
  set_has_targetnym();
  targetnym_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.VerifyClaim.targetnym)
}
#endif
inline void VerifyClaim::set_targetnym(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_targetnym();
  targetnym_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.VerifyClaim.targetnym)
}
inline void VerifyClaim::set_targetnym(const char* value, size_t size) {
  set_has_targetnym();
  targetnym_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.VerifyClaim.targetnym)
}
inline ::std::string* VerifyClaim::mutable_targetnym() {
  set_has_targetnym();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.VerifyClaim.targetnym)
  return targetnym_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* VerifyClaim::release_targetnym() {
  // @@protoc_insertion_point(field_release:opentxs.proto.VerifyClaim.targetnym)
  clear_has_targetnym();
  return targetnym_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void VerifyClaim::set_allocated_targetnym(::std::string* targetnym) {
  if (targetnym != NULL) {
    set_has_targetnym();
  } else {
    clear_has_targetnym();
  }
  targetnym_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), targetnym);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.VerifyClaim.targetnym)
}

// optional string claimid = 3;
inline bool VerifyClaim::has_claimid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void VerifyClaim::set_has_claimid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void VerifyClaim::clear_has_claimid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void VerifyClaim::clear_claimid() {
  claimid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_claimid();
}
inline const ::std::string& VerifyClaim::claimid() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.VerifyClaim.claimid)
  return claimid_.GetNoArena();
}
inline void VerifyClaim::set_claimid(const ::std::string& value) {
  set_has_claimid();
  claimid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.VerifyClaim.claimid)
}
#if LANG_CXX11
inline void VerifyClaim::set_claimid(::std::string&& value) {
  set_has_claimid();
  claimid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.VerifyClaim.claimid)
}
#endif
inline void VerifyClaim::set_claimid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_claimid();
  claimid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.VerifyClaim.claimid)
}
inline void VerifyClaim::set_claimid(const char* value, size_t size) {
  set_has_claimid();
  claimid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.VerifyClaim.claimid)
}
inline ::std::string* VerifyClaim::mutable_claimid() {
  set_has_claimid();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.VerifyClaim.claimid)
  return claimid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* VerifyClaim::release_claimid() {
  // @@protoc_insertion_point(field_release:opentxs.proto.VerifyClaim.claimid)
  clear_has_claimid();
  return claimid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void VerifyClaim::set_allocated_claimid(::std::string* claimid) {
  if (claimid != NULL) {
    set_has_claimid();
  } else {
    clear_has_claimid();
  }
  claimid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), claimid);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.VerifyClaim.claimid)
}

// optional bool value = 4;
inline bool VerifyClaim::has_value() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void VerifyClaim::set_has_value() {
  _has_bits_[0] |= 0x00000008u;
}
inline void VerifyClaim::clear_has_value() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void VerifyClaim::clear_value() {
  value_ = false;
  clear_has_value();
}
inline bool VerifyClaim::value() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.VerifyClaim.value)
  return value_;
}
inline void VerifyClaim::set_value(bool value) {
  set_has_value();
  value_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.VerifyClaim.value)
}

// optional int64 start = 5;
inline bool VerifyClaim::has_start() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void VerifyClaim::set_has_start() {
  _has_bits_[0] |= 0x00000010u;
}
inline void VerifyClaim::clear_has_start() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void VerifyClaim::clear_start() {
  start_ = GOOGLE_LONGLONG(0);
  clear_has_start();
}
inline ::google::protobuf::int64 VerifyClaim::start() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.VerifyClaim.start)
  return start_;
}
inline void VerifyClaim::set_start(::google::protobuf::int64 value) {
  set_has_start();
  start_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.VerifyClaim.start)
}

// optional int64 end = 6;
inline bool VerifyClaim::has_end() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void VerifyClaim::set_has_end() {
  _has_bits_[0] |= 0x00000020u;
}
inline void VerifyClaim::clear_has_end() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void VerifyClaim::clear_end() {
  end_ = GOOGLE_LONGLONG(0);
  clear_has_end();
}
inline ::google::protobuf::int64 VerifyClaim::end() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.VerifyClaim.end)
  return end_;
}
inline void VerifyClaim::set_end(::google::protobuf::int64 value) {
  set_has_end();
  end_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.VerifyClaim.end)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_VerifyClaim_2eproto__INCLUDED
