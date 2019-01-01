// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Token.proto

#ifndef PROTOBUF_Token_2eproto__INCLUDED
#define PROTOBUF_Token_2eproto__INCLUDED

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
#include "CashEnums.pb.h"  // IWYU pragma: export
#include "LucreTokenData.pb.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_Token_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsTokenImpl();
void InitDefaultsToken();
inline void InitDefaults() {
  InitDefaultsToken();
}
}  // namespace protobuf_Token_2eproto
namespace opentxs {
namespace proto {
class Token;
class TokenDefaultTypeInternal;
extern TokenDefaultTypeInternal _Token_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class Token : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.Token) */ {
 public:
  Token();
  virtual ~Token();

  Token(const Token& from);

  inline Token& operator=(const Token& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Token(Token&& from) noexcept
    : Token() {
    *this = ::std::move(from);
  }

  inline Token& operator=(Token&& from) noexcept {
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

  static const Token& default_instance();

  enum AlgorithmCase {
    kLucre = 10,
    ALGORITHM_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Token* internal_default_instance() {
    return reinterpret_cast<const Token*>(
               &_Token_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Token* other);
  friend void swap(Token& a, Token& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Token* New() const PROTOBUF_FINAL { return New(NULL); }

  Token* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Token& from);
  void MergeFrom(const Token& from);
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
  void InternalSwap(Token* other);
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

  // optional uint64 series = 6;
  bool has_series() const;
  void clear_series();
  static const int kSeriesFieldNumber = 6;
  ::google::protobuf::uint64 series() const;
  void set_series(::google::protobuf::uint64 value);

  // optional uint64 denomination = 7;
  bool has_denomination() const;
  void clear_denomination();
  static const int kDenominationFieldNumber = 7;
  ::google::protobuf::uint64 denomination() const;
  void set_denomination(::google::protobuf::uint64 value);

  // optional int64 validfrom = 8;
  bool has_validfrom() const;
  void clear_validfrom();
  static const int kValidfromFieldNumber = 8;
  ::google::protobuf::int64 validfrom() const;
  void set_validfrom(::google::protobuf::int64 value);

  // optional int64 validto = 9;
  bool has_validto() const;
  void clear_validto();
  static const int kValidtoFieldNumber = 9;
  ::google::protobuf::int64 validto() const;
  void set_validto(::google::protobuf::int64 value);

  // optional .opentxs.proto.TokenState state = 3;
  bool has_state() const;
  void clear_state();
  static const int kStateFieldNumber = 3;
  ::opentxs::proto::TokenState state() const;
  void set_state(::opentxs::proto::TokenState value);

  // optional .opentxs.proto.LucreTokenData lucre = 10;
  bool has_lucre() const;
  void clear_lucre();
  static const int kLucreFieldNumber = 10;
  const ::opentxs::proto::LucreTokenData& lucre() const;
  ::opentxs::proto::LucreTokenData* release_lucre();
  ::opentxs::proto::LucreTokenData* mutable_lucre();
  void set_allocated_lucre(::opentxs::proto::LucreTokenData* lucre);

  AlgorithmCase algorithm_case() const;
  // @@protoc_insertion_point(class_scope:opentxs.proto.Token)
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
  void set_has_series();
  void clear_has_series();
  void set_has_denomination();
  void clear_has_denomination();
  void set_has_validfrom();
  void clear_has_validfrom();
  void set_has_validto();
  void clear_has_validto();
  void set_has_lucre();

  inline bool has_algorithm() const;
  void clear_algorithm();
  inline void clear_has_algorithm();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr notary_;
  ::google::protobuf::internal::ArenaStringPtr mint_;
  ::google::protobuf::uint32 version_;
  int type_;
  ::google::protobuf::uint64 series_;
  ::google::protobuf::uint64 denomination_;
  ::google::protobuf::int64 validfrom_;
  ::google::protobuf::int64 validto_;
  int state_;
  union AlgorithmUnion {
    AlgorithmUnion() {}
    ::opentxs::proto::LucreTokenData* lucre_;
  } algorithm_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::protobuf_Token_2eproto::TableStruct;
  friend void ::protobuf_Token_2eproto::InitDefaultsTokenImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Token

// optional uint32 version = 1;
inline bool Token::has_version() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Token::set_has_version() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Token::clear_has_version() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Token::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 Token::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Token.version)
  return version_;
}
inline void Token::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Token.version)
}

// optional .opentxs.proto.CashType type = 2;
inline bool Token::has_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Token::set_has_type() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Token::clear_has_type() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Token::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::opentxs::proto::CashType Token::type() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Token.type)
  return static_cast< ::opentxs::proto::CashType >(type_);
}
inline void Token::set_type(::opentxs::proto::CashType value) {
  assert(::opentxs::proto::CashType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Token.type)
}

// optional .opentxs.proto.TokenState state = 3;
inline bool Token::has_state() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void Token::set_has_state() {
  _has_bits_[0] |= 0x00000100u;
}
inline void Token::clear_has_state() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void Token::clear_state() {
  state_ = 0;
  clear_has_state();
}
inline ::opentxs::proto::TokenState Token::state() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Token.state)
  return static_cast< ::opentxs::proto::TokenState >(state_);
}
inline void Token::set_state(::opentxs::proto::TokenState value) {
  assert(::opentxs::proto::TokenState_IsValid(value));
  set_has_state();
  state_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Token.state)
}

// optional string notary = 4;
inline bool Token::has_notary() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Token::set_has_notary() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Token::clear_has_notary() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Token::clear_notary() {
  notary_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_notary();
}
inline const ::std::string& Token::notary() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Token.notary)
  return notary_.GetNoArena();
}
inline void Token::set_notary(const ::std::string& value) {
  set_has_notary();
  notary_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.Token.notary)
}
#if LANG_CXX11
inline void Token::set_notary(::std::string&& value) {
  set_has_notary();
  notary_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.Token.notary)
}
#endif
inline void Token::set_notary(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_notary();
  notary_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.Token.notary)
}
inline void Token::set_notary(const char* value, size_t size) {
  set_has_notary();
  notary_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.Token.notary)
}
inline ::std::string* Token::mutable_notary() {
  set_has_notary();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.Token.notary)
  return notary_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Token::release_notary() {
  // @@protoc_insertion_point(field_release:opentxs.proto.Token.notary)
  clear_has_notary();
  return notary_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Token::set_allocated_notary(::std::string* notary) {
  if (notary != NULL) {
    set_has_notary();
  } else {
    clear_has_notary();
  }
  notary_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), notary);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.Token.notary)
}

// optional string mint = 5;
inline bool Token::has_mint() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Token::set_has_mint() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Token::clear_has_mint() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Token::clear_mint() {
  mint_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_mint();
}
inline const ::std::string& Token::mint() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Token.mint)
  return mint_.GetNoArena();
}
inline void Token::set_mint(const ::std::string& value) {
  set_has_mint();
  mint_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.Token.mint)
}
#if LANG_CXX11
inline void Token::set_mint(::std::string&& value) {
  set_has_mint();
  mint_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.Token.mint)
}
#endif
inline void Token::set_mint(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_mint();
  mint_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.Token.mint)
}
inline void Token::set_mint(const char* value, size_t size) {
  set_has_mint();
  mint_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.Token.mint)
}
inline ::std::string* Token::mutable_mint() {
  set_has_mint();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.Token.mint)
  return mint_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Token::release_mint() {
  // @@protoc_insertion_point(field_release:opentxs.proto.Token.mint)
  clear_has_mint();
  return mint_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Token::set_allocated_mint(::std::string* mint) {
  if (mint != NULL) {
    set_has_mint();
  } else {
    clear_has_mint();
  }
  mint_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), mint);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.Token.mint)
}

// optional uint64 series = 6;
inline bool Token::has_series() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Token::set_has_series() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Token::clear_has_series() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Token::clear_series() {
  series_ = GOOGLE_ULONGLONG(0);
  clear_has_series();
}
inline ::google::protobuf::uint64 Token::series() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Token.series)
  return series_;
}
inline void Token::set_series(::google::protobuf::uint64 value) {
  set_has_series();
  series_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Token.series)
}

// optional uint64 denomination = 7;
inline bool Token::has_denomination() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Token::set_has_denomination() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Token::clear_has_denomination() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Token::clear_denomination() {
  denomination_ = GOOGLE_ULONGLONG(0);
  clear_has_denomination();
}
inline ::google::protobuf::uint64 Token::denomination() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Token.denomination)
  return denomination_;
}
inline void Token::set_denomination(::google::protobuf::uint64 value) {
  set_has_denomination();
  denomination_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Token.denomination)
}

// optional int64 validfrom = 8;
inline bool Token::has_validfrom() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Token::set_has_validfrom() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Token::clear_has_validfrom() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Token::clear_validfrom() {
  validfrom_ = GOOGLE_LONGLONG(0);
  clear_has_validfrom();
}
inline ::google::protobuf::int64 Token::validfrom() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Token.validfrom)
  return validfrom_;
}
inline void Token::set_validfrom(::google::protobuf::int64 value) {
  set_has_validfrom();
  validfrom_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Token.validfrom)
}

// optional int64 validto = 9;
inline bool Token::has_validto() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Token::set_has_validto() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Token::clear_has_validto() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Token::clear_validto() {
  validto_ = GOOGLE_LONGLONG(0);
  clear_has_validto();
}
inline ::google::protobuf::int64 Token::validto() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Token.validto)
  return validto_;
}
inline void Token::set_validto(::google::protobuf::int64 value) {
  set_has_validto();
  validto_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Token.validto)
}

// optional .opentxs.proto.LucreTokenData lucre = 10;
inline bool Token::has_lucre() const {
  return algorithm_case() == kLucre;
}
inline void Token::set_has_lucre() {
  _oneof_case_[0] = kLucre;
}
inline ::opentxs::proto::LucreTokenData* Token::release_lucre() {
  // @@protoc_insertion_point(field_release:opentxs.proto.Token.lucre)
  if (has_lucre()) {
    clear_has_algorithm();
      ::opentxs::proto::LucreTokenData* temp = algorithm_.lucre_;
    algorithm_.lucre_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::opentxs::proto::LucreTokenData& Token::lucre() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Token.lucre)
  return has_lucre()
      ? *algorithm_.lucre_
      : *reinterpret_cast< ::opentxs::proto::LucreTokenData*>(&::opentxs::proto::_LucreTokenData_default_instance_);
}
inline ::opentxs::proto::LucreTokenData* Token::mutable_lucre() {
  if (!has_lucre()) {
    clear_algorithm();
    set_has_lucre();
    algorithm_.lucre_ = new ::opentxs::proto::LucreTokenData;
  }
  // @@protoc_insertion_point(field_mutable:opentxs.proto.Token.lucre)
  return algorithm_.lucre_;
}

inline bool Token::has_algorithm() const {
  return algorithm_case() != ALGORITHM_NOT_SET;
}
inline void Token::clear_has_algorithm() {
  _oneof_case_[0] = ALGORITHM_NOT_SET;
}
inline Token::AlgorithmCase Token::algorithm_case() const {
  return Token::AlgorithmCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Token_2eproto__INCLUDED
