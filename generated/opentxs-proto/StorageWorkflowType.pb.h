// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: StorageWorkflowType.proto

#ifndef PROTOBUF_StorageWorkflowType_2eproto__INCLUDED
#define PROTOBUF_StorageWorkflowType_2eproto__INCLUDED

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
#include "PaymentWorkflowEnums.pb.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_StorageWorkflowType_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsStorageWorkflowTypeImpl();
void InitDefaultsStorageWorkflowType();
inline void InitDefaults() {
  InitDefaultsStorageWorkflowType();
}
}  // namespace protobuf_StorageWorkflowType_2eproto
namespace opentxs {
namespace proto {
class StorageWorkflowType;
class StorageWorkflowTypeDefaultTypeInternal;
extern StorageWorkflowTypeDefaultTypeInternal _StorageWorkflowType_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class StorageWorkflowType : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.StorageWorkflowType) */ {
 public:
  StorageWorkflowType();
  virtual ~StorageWorkflowType();

  StorageWorkflowType(const StorageWorkflowType& from);

  inline StorageWorkflowType& operator=(const StorageWorkflowType& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  StorageWorkflowType(StorageWorkflowType&& from) noexcept
    : StorageWorkflowType() {
    *this = ::std::move(from);
  }

  inline StorageWorkflowType& operator=(StorageWorkflowType&& from) noexcept {
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

  static const StorageWorkflowType& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StorageWorkflowType* internal_default_instance() {
    return reinterpret_cast<const StorageWorkflowType*>(
               &_StorageWorkflowType_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(StorageWorkflowType* other);
  friend void swap(StorageWorkflowType& a, StorageWorkflowType& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline StorageWorkflowType* New() const PROTOBUF_FINAL { return New(NULL); }

  StorageWorkflowType* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const StorageWorkflowType& from);
  void MergeFrom(const StorageWorkflowType& from);
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
  void InternalSwap(StorageWorkflowType* other);
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

  // optional string workflow = 2;
  bool has_workflow() const;
  void clear_workflow();
  static const int kWorkflowFieldNumber = 2;
  const ::std::string& workflow() const;
  void set_workflow(const ::std::string& value);
  #if LANG_CXX11
  void set_workflow(::std::string&& value);
  #endif
  void set_workflow(const char* value);
  void set_workflow(const char* value, size_t size);
  ::std::string* mutable_workflow();
  ::std::string* release_workflow();
  void set_allocated_workflow(::std::string* workflow);

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // optional .opentxs.proto.PaymentWorkflowType type = 3;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 3;
  ::opentxs::proto::PaymentWorkflowType type() const;
  void set_type(::opentxs::proto::PaymentWorkflowType value);

  // optional .opentxs.proto.PaymentWorkflowState state = 4;
  bool has_state() const;
  void clear_state();
  static const int kStateFieldNumber = 4;
  ::opentxs::proto::PaymentWorkflowState state() const;
  void set_state(::opentxs::proto::PaymentWorkflowState value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.StorageWorkflowType)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_workflow();
  void clear_has_workflow();
  void set_has_type();
  void clear_has_type();
  void set_has_state();
  void clear_has_state();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr workflow_;
  ::google::protobuf::uint32 version_;
  int type_;
  int state_;
  friend struct ::protobuf_StorageWorkflowType_2eproto::TableStruct;
  friend void ::protobuf_StorageWorkflowType_2eproto::InitDefaultsStorageWorkflowTypeImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StorageWorkflowType

// optional uint32 version = 1;
inline bool StorageWorkflowType::has_version() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void StorageWorkflowType::set_has_version() {
  _has_bits_[0] |= 0x00000002u;
}
inline void StorageWorkflowType::clear_has_version() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void StorageWorkflowType::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 StorageWorkflowType::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.StorageWorkflowType.version)
  return version_;
}
inline void StorageWorkflowType::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.StorageWorkflowType.version)
}

// optional string workflow = 2;
inline bool StorageWorkflowType::has_workflow() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void StorageWorkflowType::set_has_workflow() {
  _has_bits_[0] |= 0x00000001u;
}
inline void StorageWorkflowType::clear_has_workflow() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void StorageWorkflowType::clear_workflow() {
  workflow_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_workflow();
}
inline const ::std::string& StorageWorkflowType::workflow() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.StorageWorkflowType.workflow)
  return workflow_.GetNoArena();
}
inline void StorageWorkflowType::set_workflow(const ::std::string& value) {
  set_has_workflow();
  workflow_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.StorageWorkflowType.workflow)
}
#if LANG_CXX11
inline void StorageWorkflowType::set_workflow(::std::string&& value) {
  set_has_workflow();
  workflow_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.StorageWorkflowType.workflow)
}
#endif
inline void StorageWorkflowType::set_workflow(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_workflow();
  workflow_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.StorageWorkflowType.workflow)
}
inline void StorageWorkflowType::set_workflow(const char* value, size_t size) {
  set_has_workflow();
  workflow_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.StorageWorkflowType.workflow)
}
inline ::std::string* StorageWorkflowType::mutable_workflow() {
  set_has_workflow();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.StorageWorkflowType.workflow)
  return workflow_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* StorageWorkflowType::release_workflow() {
  // @@protoc_insertion_point(field_release:opentxs.proto.StorageWorkflowType.workflow)
  clear_has_workflow();
  return workflow_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StorageWorkflowType::set_allocated_workflow(::std::string* workflow) {
  if (workflow != NULL) {
    set_has_workflow();
  } else {
    clear_has_workflow();
  }
  workflow_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), workflow);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.StorageWorkflowType.workflow)
}

// optional .opentxs.proto.PaymentWorkflowType type = 3;
inline bool StorageWorkflowType::has_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void StorageWorkflowType::set_has_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void StorageWorkflowType::clear_has_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void StorageWorkflowType::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::opentxs::proto::PaymentWorkflowType StorageWorkflowType::type() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.StorageWorkflowType.type)
  return static_cast< ::opentxs::proto::PaymentWorkflowType >(type_);
}
inline void StorageWorkflowType::set_type(::opentxs::proto::PaymentWorkflowType value) {
  assert(::opentxs::proto::PaymentWorkflowType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.StorageWorkflowType.type)
}

// optional .opentxs.proto.PaymentWorkflowState state = 4;
inline bool StorageWorkflowType::has_state() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void StorageWorkflowType::set_has_state() {
  _has_bits_[0] |= 0x00000008u;
}
inline void StorageWorkflowType::clear_has_state() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void StorageWorkflowType::clear_state() {
  state_ = 0;
  clear_has_state();
}
inline ::opentxs::proto::PaymentWorkflowState StorageWorkflowType::state() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.StorageWorkflowType.state)
  return static_cast< ::opentxs::proto::PaymentWorkflowState >(state_);
}
inline void StorageWorkflowType::set_state(::opentxs::proto::PaymentWorkflowState value) {
  assert(::opentxs::proto::PaymentWorkflowState_IsValid(value));
  set_has_state();
  state_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.StorageWorkflowType.state)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_StorageWorkflowType_2eproto__INCLUDED
