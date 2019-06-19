// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RPCStatus.proto

#ifndef PROTOBUF_RPCStatus_2eproto__INCLUDED
#define PROTOBUF_RPCStatus_2eproto__INCLUDED

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
#include "RPCEnums.pb.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_RPCStatus_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsRPCStatusImpl();
void InitDefaultsRPCStatus();
inline void InitDefaults() {
  InitDefaultsRPCStatus();
}
}  // namespace protobuf_RPCStatus_2eproto
namespace opentxs {
namespace proto {
class RPCStatus;
class RPCStatusDefaultTypeInternal;
extern RPCStatusDefaultTypeInternal _RPCStatus_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class RPCStatus : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.RPCStatus) */ {
 public:
  RPCStatus();
  virtual ~RPCStatus();

  RPCStatus(const RPCStatus& from);

  inline RPCStatus& operator=(const RPCStatus& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  RPCStatus(RPCStatus&& from) noexcept
    : RPCStatus() {
    *this = ::std::move(from);
  }

  inline RPCStatus& operator=(RPCStatus&& from) noexcept {
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

  static const RPCStatus& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RPCStatus* internal_default_instance() {
    return reinterpret_cast<const RPCStatus*>(
               &_RPCStatus_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(RPCStatus* other);
  friend void swap(RPCStatus& a, RPCStatus& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RPCStatus* New() const PROTOBUF_FINAL { return New(NULL); }

  RPCStatus* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const RPCStatus& from);
  void MergeFrom(const RPCStatus& from);
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
  void InternalSwap(RPCStatus* other);
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

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // optional uint32 index = 2;
  bool has_index() const;
  void clear_index();
  static const int kIndexFieldNumber = 2;
  ::google::protobuf::uint32 index() const;
  void set_index(::google::protobuf::uint32 value);

  // optional .opentxs.proto.RPCResponseCode code = 3;
  bool has_code() const;
  void clear_code();
  static const int kCodeFieldNumber = 3;
  ::opentxs::proto::RPCResponseCode code() const;
  void set_code(::opentxs::proto::RPCResponseCode value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.RPCStatus)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_index();
  void clear_has_index();
  void set_has_code();
  void clear_has_code();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 version_;
  ::google::protobuf::uint32 index_;
  int code_;
  friend struct ::protobuf_RPCStatus_2eproto::TableStruct;
  friend void ::protobuf_RPCStatus_2eproto::InitDefaultsRPCStatusImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RPCStatus

// optional uint32 version = 1;
inline bool RPCStatus::has_version() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RPCStatus::set_has_version() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RPCStatus::clear_has_version() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RPCStatus::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 RPCStatus::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.RPCStatus.version)
  return version_;
}
inline void RPCStatus::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.RPCStatus.version)
}

// optional uint32 index = 2;
inline bool RPCStatus::has_index() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RPCStatus::set_has_index() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RPCStatus::clear_has_index() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RPCStatus::clear_index() {
  index_ = 0u;
  clear_has_index();
}
inline ::google::protobuf::uint32 RPCStatus::index() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.RPCStatus.index)
  return index_;
}
inline void RPCStatus::set_index(::google::protobuf::uint32 value) {
  set_has_index();
  index_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.RPCStatus.index)
}

// optional .opentxs.proto.RPCResponseCode code = 3;
inline bool RPCStatus::has_code() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RPCStatus::set_has_code() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RPCStatus::clear_has_code() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RPCStatus::clear_code() {
  code_ = 0;
  clear_has_code();
}
inline ::opentxs::proto::RPCResponseCode RPCStatus::code() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.RPCStatus.code)
  return static_cast< ::opentxs::proto::RPCResponseCode >(code_);
}
inline void RPCStatus::set_code(::opentxs::proto::RPCResponseCode value) {
  assert(::opentxs::proto::RPCResponseCode_IsValid(value));
  set_has_code();
  code_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.RPCStatus.code)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_RPCStatus_2eproto__INCLUDED
