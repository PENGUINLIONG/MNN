// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_TYPE_MNN_H_
#define FLATBUFFERS_GENERATED_TYPE_MNN_H_

#include "flatbuffers/flatbuffers.h"

namespace MNN {

enum NetSource {
  NetSource_CAFFE = 0,
  NetSource_TENSORFLOW = 1,
  NetSource_TFLITE = 2,
  NetSource_ONNX = 3,
  NetSource_MIN = NetSource_CAFFE,
  NetSource_MAX = NetSource_ONNX
};

inline const NetSource (&EnumValuesNetSource())[4] {
  static const NetSource values[] = {
    NetSource_CAFFE,
    NetSource_TENSORFLOW,
    NetSource_TFLITE,
    NetSource_ONNX
  };
  return values;
}

inline const char * const *EnumNamesNetSource() {
  static const char * const names[5] = {
    "CAFFE",
    "TENSORFLOW",
    "TFLITE",
    "ONNX",
    nullptr
  };
  return names;
}

inline const char *EnumNameNetSource(NetSource e) {
  if (flatbuffers::IsOutRange(e, NetSource_CAFFE, NetSource_ONNX)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesNetSource()[index];
}

enum DataType {
  DataType_DT_INVALID = 0,
  DataType_DT_FLOAT = 1,
  DataType_DT_DOUBLE = 2,
  DataType_DT_INT32 = 3,
  DataType_DT_UINT8 = 4,
  DataType_DT_INT16 = 5,
  DataType_DT_INT8 = 6,
  DataType_DT_STRING = 7,
  DataType_DT_COMPLEX64 = 8,
  DataType_DT_INT64 = 9,
  DataType_DT_BOOL = 10,
  DataType_DT_QINT8 = 11,
  DataType_DT_QUINT8 = 12,
  DataType_DT_QINT32 = 13,
  DataType_DT_BFLOAT16 = 14,
  DataType_DT_QINT16 = 15,
  DataType_DT_QUINT16 = 16,
  DataType_DT_UINT16 = 17,
  DataType_DT_COMPLEX128 = 18,
  DataType_DT_HALF = 19,
  DataType_DT_RESOURCE = 20,
  DataType_DT_VARIANT = 21,
  DataType_MIN = DataType_DT_INVALID,
  DataType_MAX = DataType_DT_VARIANT
};

inline const DataType (&EnumValuesDataType())[22] {
  static const DataType values[] = {
    DataType_DT_INVALID,
    DataType_DT_FLOAT,
    DataType_DT_DOUBLE,
    DataType_DT_INT32,
    DataType_DT_UINT8,
    DataType_DT_INT16,
    DataType_DT_INT8,
    DataType_DT_STRING,
    DataType_DT_COMPLEX64,
    DataType_DT_INT64,
    DataType_DT_BOOL,
    DataType_DT_QINT8,
    DataType_DT_QUINT8,
    DataType_DT_QINT32,
    DataType_DT_BFLOAT16,
    DataType_DT_QINT16,
    DataType_DT_QUINT16,
    DataType_DT_UINT16,
    DataType_DT_COMPLEX128,
    DataType_DT_HALF,
    DataType_DT_RESOURCE,
    DataType_DT_VARIANT
  };
  return values;
}

inline const char * const *EnumNamesDataType() {
  static const char * const names[23] = {
    "DT_INVALID",
    "DT_FLOAT",
    "DT_DOUBLE",
    "DT_INT32",
    "DT_UINT8",
    "DT_INT16",
    "DT_INT8",
    "DT_STRING",
    "DT_COMPLEX64",
    "DT_INT64",
    "DT_BOOL",
    "DT_QINT8",
    "DT_QUINT8",
    "DT_QINT32",
    "DT_BFLOAT16",
    "DT_QINT16",
    "DT_QUINT16",
    "DT_UINT16",
    "DT_COMPLEX128",
    "DT_HALF",
    "DT_RESOURCE",
    "DT_VARIANT",
    nullptr
  };
  return names;
}

inline const char *EnumNameDataType(DataType e) {
  if (flatbuffers::IsOutRange(e, DataType_DT_INVALID, DataType_DT_VARIANT)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesDataType()[index];
}

inline const flatbuffers::TypeTable *NetSourceTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_CHAR, 0, 0 },
    { flatbuffers::ET_CHAR, 0, 0 },
    { flatbuffers::ET_CHAR, 0, 0 },
    { flatbuffers::ET_CHAR, 0, 0 }
  };
  static const flatbuffers::TypeFunction type_refs[] = {
    MNN::NetSourceTypeTable
  };
  static const char * const names[] = {
    "CAFFE",
    "TENSORFLOW",
    "TFLITE",
    "ONNX"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_ENUM, 4, type_codes, type_refs, nullptr, names
  };
  return &tt;
}

inline const flatbuffers::TypeTable *DataTypeTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 }
  };
  static const flatbuffers::TypeFunction type_refs[] = {
    MNN::DataTypeTypeTable
  };
  static const char * const names[] = {
    "DT_INVALID",
    "DT_FLOAT",
    "DT_DOUBLE",
    "DT_INT32",
    "DT_UINT8",
    "DT_INT16",
    "DT_INT8",
    "DT_STRING",
    "DT_COMPLEX64",
    "DT_INT64",
    "DT_BOOL",
    "DT_QINT8",
    "DT_QUINT8",
    "DT_QINT32",
    "DT_BFLOAT16",
    "DT_QINT16",
    "DT_QUINT16",
    "DT_UINT16",
    "DT_COMPLEX128",
    "DT_HALF",
    "DT_RESOURCE",
    "DT_VARIANT"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_ENUM, 22, type_codes, type_refs, nullptr, names
  };
  return &tt;
}

}  // namespace MNN

#endif  // FLATBUFFERS_GENERATED_TYPE_MNN_H_
