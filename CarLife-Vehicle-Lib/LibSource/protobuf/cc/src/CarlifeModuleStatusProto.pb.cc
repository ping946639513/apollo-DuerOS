// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CarlifeModuleStatusProto.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "CarlifeModuleStatusProto.pb.h"

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

namespace com {
namespace baidu {
namespace carlife {
namespace protobuf {

namespace {

const ::google::protobuf::Descriptor* CarlifeModuleStatus_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CarlifeModuleStatus_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_CarlifeModuleStatusProto_2eproto() {
  protobuf_AddDesc_CarlifeModuleStatusProto_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "CarlifeModuleStatusProto.proto");
  GOOGLE_CHECK(file != NULL);
  CarlifeModuleStatus_descriptor_ = file->message_type(0);
  static const int CarlifeModuleStatus_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeModuleStatus, moduleid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeModuleStatus, statusid_),
  };
  CarlifeModuleStatus_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CarlifeModuleStatus_descriptor_,
      CarlifeModuleStatus::default_instance_,
      CarlifeModuleStatus_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeModuleStatus, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeModuleStatus, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CarlifeModuleStatus));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_CarlifeModuleStatusProto_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CarlifeModuleStatus_descriptor_, &CarlifeModuleStatus::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_CarlifeModuleStatusProto_2eproto() {
  delete CarlifeModuleStatus::default_instance_;
  delete CarlifeModuleStatus_reflection_;
}

void protobuf_AddDesc_CarlifeModuleStatusProto_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\036CarlifeModuleStatusProto.proto\022\032com.ba"
    "idu.carlife.protobuf\"9\n\023CarlifeModuleSta"
    "tus\022\020\n\010moduleID\030\001 \002(\005\022\020\n\010statusID\030\002 \002(\005", 119);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CarlifeModuleStatusProto.proto", &protobuf_RegisterTypes);
  CarlifeModuleStatus::default_instance_ = new CarlifeModuleStatus();
  CarlifeModuleStatus::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_CarlifeModuleStatusProto_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_CarlifeModuleStatusProto_2eproto {
  StaticDescriptorInitializer_CarlifeModuleStatusProto_2eproto() {
    protobuf_AddDesc_CarlifeModuleStatusProto_2eproto();
  }
} static_descriptor_initializer_CarlifeModuleStatusProto_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int CarlifeModuleStatus::kModuleIDFieldNumber;
const int CarlifeModuleStatus::kStatusIDFieldNumber;
#endif  // !_MSC_VER

CarlifeModuleStatus::CarlifeModuleStatus()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CarlifeModuleStatus::InitAsDefaultInstance() {
}

CarlifeModuleStatus::CarlifeModuleStatus(const CarlifeModuleStatus& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CarlifeModuleStatus::SharedCtor() {
  _cached_size_ = 0;
  moduleid_ = 0;
  statusid_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CarlifeModuleStatus::~CarlifeModuleStatus() {
  SharedDtor();
}

void CarlifeModuleStatus::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CarlifeModuleStatus::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CarlifeModuleStatus::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CarlifeModuleStatus_descriptor_;
}

const CarlifeModuleStatus& CarlifeModuleStatus::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CarlifeModuleStatusProto_2eproto();
  return *default_instance_;
}

CarlifeModuleStatus* CarlifeModuleStatus::default_instance_ = NULL;

CarlifeModuleStatus* CarlifeModuleStatus::New() const {
  return new CarlifeModuleStatus;
}

void CarlifeModuleStatus::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    moduleid_ = 0;
    statusid_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CarlifeModuleStatus::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 moduleID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &moduleid_)));
          set_has_moduleid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_statusID;
        break;
      }

      // required int32 statusID = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_statusID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &statusid_)));
          set_has_statusid();
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

void CarlifeModuleStatus::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 moduleID = 1;
  if (has_moduleid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->moduleid(), output);
  }

  // required int32 statusID = 2;
  if (has_statusid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->statusid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CarlifeModuleStatus::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 moduleID = 1;
  if (has_moduleid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->moduleid(), target);
  }

  // required int32 statusID = 2;
  if (has_statusid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->statusid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CarlifeModuleStatus::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 moduleID = 1;
    if (has_moduleid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->moduleid());
    }

    // required int32 statusID = 2;
    if (has_statusid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->statusid());
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

void CarlifeModuleStatus::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CarlifeModuleStatus* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CarlifeModuleStatus*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CarlifeModuleStatus::MergeFrom(const CarlifeModuleStatus& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_moduleid()) {
      set_moduleid(from.moduleid());
    }
    if (from.has_statusid()) {
      set_statusid(from.statusid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CarlifeModuleStatus::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CarlifeModuleStatus::CopyFrom(const CarlifeModuleStatus& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CarlifeModuleStatus::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void CarlifeModuleStatus::Swap(CarlifeModuleStatus* other) {
  if (other != this) {
    std::swap(moduleid_, other->moduleid_);
    std::swap(statusid_, other->statusid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CarlifeModuleStatus::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CarlifeModuleStatus_descriptor_;
  metadata.reflection = CarlifeModuleStatus_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace carlife
}  // namespace baidu
}  // namespace com

// @@protoc_insertion_point(global_scope)
