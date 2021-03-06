// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protocol/Proto/ServerRunData.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "protocol/Proto/ServerRunData.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace protocol {
namespace ServerRun {

namespace {

const ::google::protobuf::Descriptor* ParamData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ParamData_reflection_ = NULL;
const ::google::protobuf::Descriptor* ScheduleParamData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ScheduleParamData_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_protocol_2fProto_2fServerRunData_2eproto() {
  protobuf_AddDesc_protocol_2fProto_2fServerRunData_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "protocol/Proto/ServerRunData.proto");
  GOOGLE_CHECK(file != NULL);
  ParamData_descriptor_ = file->message_type(0);
  static const int ParamData_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ParamData, paramname_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ParamData, paramvalue_),
  };
  ParamData_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ParamData_descriptor_,
      ParamData::default_instance_,
      ParamData_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ParamData, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ParamData, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ParamData));
  ScheduleParamData_descriptor_ = file->message_type(1);
  static const int ScheduleParamData_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ScheduleParamData, paramlist_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ScheduleParamData, configid_),
  };
  ScheduleParamData_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ScheduleParamData_descriptor_,
      ScheduleParamData::default_instance_,
      ScheduleParamData_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ScheduleParamData, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ScheduleParamData, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ScheduleParamData));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_protocol_2fProto_2fServerRunData_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ParamData_descriptor_, &ParamData::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ScheduleParamData_descriptor_, &ScheduleParamData::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_protocol_2fProto_2fServerRunData_2eproto() {
  delete ParamData::default_instance_;
  delete ParamData_reflection_;
  delete ScheduleParamData::default_instance_;
  delete ScheduleParamData_reflection_;
}

void protobuf_AddDesc_protocol_2fProto_2fServerRunData_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\"protocol/Proto/ServerRunData.proto\022\022pr"
    "otocol.ServerRun\"2\n\tParamData\022\021\n\tparamNa"
    "me\030\001 \002(\t\022\022\n\nparamValue\030\002 \002(\t\"W\n\021Schedule"
    "ParamData\0220\n\tparamList\030\001 \003(\0132\035.protocol."
    "ServerRun.ParamData\022\020\n\010configID\030\002 \001(\004", 197);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "protocol/Proto/ServerRunData.proto", &protobuf_RegisterTypes);
  ParamData::default_instance_ = new ParamData();
  ScheduleParamData::default_instance_ = new ScheduleParamData();
  ParamData::default_instance_->InitAsDefaultInstance();
  ScheduleParamData::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_protocol_2fProto_2fServerRunData_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_protocol_2fProto_2fServerRunData_2eproto {
  StaticDescriptorInitializer_protocol_2fProto_2fServerRunData_2eproto() {
    protobuf_AddDesc_protocol_2fProto_2fServerRunData_2eproto();
  }
} static_descriptor_initializer_protocol_2fProto_2fServerRunData_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ParamData::kParamNameFieldNumber;
const int ParamData::kParamValueFieldNumber;
#endif  // !_MSC_VER

ParamData::ParamData()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ParamData::InitAsDefaultInstance() {
}

ParamData::ParamData(const ParamData& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ParamData::SharedCtor() {
  _cached_size_ = 0;
  paramname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  paramvalue_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ParamData::~ParamData() {
  SharedDtor();
}

void ParamData::SharedDtor() {
  if (paramname_ != &::google::protobuf::internal::kEmptyString) {
    delete paramname_;
  }
  if (paramvalue_ != &::google::protobuf::internal::kEmptyString) {
    delete paramvalue_;
  }
  if (this != default_instance_) {
  }
}

void ParamData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ParamData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ParamData_descriptor_;
}

const ParamData& ParamData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_protocol_2fProto_2fServerRunData_2eproto();
  return *default_instance_;
}

ParamData* ParamData::default_instance_ = NULL;

ParamData* ParamData::New() const {
  return new ParamData;
}

void ParamData::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_paramname()) {
      if (paramname_ != &::google::protobuf::internal::kEmptyString) {
        paramname_->clear();
      }
    }
    if (has_paramvalue()) {
      if (paramvalue_ != &::google::protobuf::internal::kEmptyString) {
        paramvalue_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ParamData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string paramName = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_paramname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->paramname().data(), this->paramname().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_paramValue;
        break;
      }

      // required string paramValue = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_paramValue:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_paramvalue()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->paramvalue().data(), this->paramvalue().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ParamData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string paramName = 1;
  if (has_paramname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->paramname().data(), this->paramname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->paramname(), output);
  }

  // required string paramValue = 2;
  if (has_paramvalue()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->paramvalue().data(), this->paramvalue().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->paramvalue(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ParamData::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string paramName = 1;
  if (has_paramname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->paramname().data(), this->paramname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->paramname(), target);
  }

  // required string paramValue = 2;
  if (has_paramvalue()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->paramvalue().data(), this->paramvalue().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->paramvalue(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ParamData::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string paramName = 1;
    if (has_paramname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->paramname());
    }

    // required string paramValue = 2;
    if (has_paramvalue()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->paramvalue());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ParamData::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ParamData* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ParamData*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ParamData::MergeFrom(const ParamData& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_paramname()) {
      set_paramname(from.paramname());
    }
    if (from.has_paramvalue()) {
      set_paramvalue(from.paramvalue());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ParamData::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ParamData::CopyFrom(const ParamData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ParamData::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void ParamData::Swap(ParamData* other) {
  if (other != this) {
    std::swap(paramname_, other->paramname_);
    std::swap(paramvalue_, other->paramvalue_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ParamData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ParamData_descriptor_;
  metadata.reflection = ParamData_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int ScheduleParamData::kParamListFieldNumber;
const int ScheduleParamData::kConfigIDFieldNumber;
#endif  // !_MSC_VER

ScheduleParamData::ScheduleParamData()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ScheduleParamData::InitAsDefaultInstance() {
}

ScheduleParamData::ScheduleParamData(const ScheduleParamData& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ScheduleParamData::SharedCtor() {
  _cached_size_ = 0;
  configid_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ScheduleParamData::~ScheduleParamData() {
  SharedDtor();
}

void ScheduleParamData::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ScheduleParamData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ScheduleParamData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ScheduleParamData_descriptor_;
}

const ScheduleParamData& ScheduleParamData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_protocol_2fProto_2fServerRunData_2eproto();
  return *default_instance_;
}

ScheduleParamData* ScheduleParamData::default_instance_ = NULL;

ScheduleParamData* ScheduleParamData::New() const {
  return new ScheduleParamData;
}

void ScheduleParamData::Clear() {
  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    configid_ = GOOGLE_ULONGLONG(0);
  }
  paramlist_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ScheduleParamData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .protocol.ServerRun.ParamData paramList = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_paramList:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_paramlist()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_paramList;
        if (input->ExpectTag(16)) goto parse_configID;
        break;
      }

      // optional uint64 configID = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_configID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &configid_)));
          set_has_configid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ScheduleParamData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .protocol.ServerRun.ParamData paramList = 1;
  for (int i = 0; i < this->paramlist_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->paramlist(i), output);
  }

  // optional uint64 configID = 2;
  if (has_configid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->configid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ScheduleParamData::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .protocol.ServerRun.ParamData paramList = 1;
  for (int i = 0; i < this->paramlist_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->paramlist(i), target);
  }

  // optional uint64 configID = 2;
  if (has_configid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->configid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ScheduleParamData::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    // optional uint64 configID = 2;
    if (has_configid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->configid());
    }

  }
  // repeated .protocol.ServerRun.ParamData paramList = 1;
  total_size += 1 * this->paramlist_size();
  for (int i = 0; i < this->paramlist_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->paramlist(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ScheduleParamData::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ScheduleParamData* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ScheduleParamData*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ScheduleParamData::MergeFrom(const ScheduleParamData& from) {
  GOOGLE_CHECK_NE(&from, this);
  paramlist_.MergeFrom(from.paramlist_);
  if (from._has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    if (from.has_configid()) {
      set_configid(from.configid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ScheduleParamData::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ScheduleParamData::CopyFrom(const ScheduleParamData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ScheduleParamData::IsInitialized() const {

  for (int i = 0; i < paramlist_size(); i++) {
    if (!this->paramlist(i).IsInitialized()) return false;
  }
  return true;
}

void ScheduleParamData::Swap(ScheduleParamData* other) {
  if (other != this) {
    paramlist_.Swap(&other->paramlist_);
    std::swap(configid_, other->configid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ScheduleParamData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ScheduleParamData_descriptor_;
  metadata.reflection = ScheduleParamData_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace ServerRun
}  // namespace protocol

// @@protoc_insertion_point(global_scope)
