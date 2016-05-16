//
//  CppBondSerializer.hpp
//  BondTest
//
//  Created by Mueller, Scott on 11/22/15.
//  Copyright © 2015 Care Otter. All rights reserved.
//

#ifndef CppBondSerializer_hpp
#define CppBondSerializer_hpp

#include <stdio.h>

#include <iostream>
#include <string.h>
#include <bond/core/bond.h>
#include <bond/stream/output_buffer.h>
#include <bond/stream/stdio_output_stream.h>
#include <bond/protocol/simple_json_writer.h>

#include "BasePerson_reflection.h"


template <class T>
class CppBondSerializer
{
public:
  
  static const T deserializeFromByteArray(uint8_t* data, uint32_t length);
  
  static const uint8_t* serializeToByteArray(T obj, uint32_t* outlength);
  
  static const bond::bonded<T> getBondedObject(T obj);
  
};

using namespace HealthCare::Schemas;

template <class T>
const T CppBondSerializer<T>::deserializeFromByteArray(uint8_t* data, uint32_t length)
{
  // Read in from Compact format
  T objOut;
  bond::blob objBlob(data, length);
  bond::InputBuffer inputBuffer(objBlob);
  bond::CompactBinaryReader<bond::InputBuffer> reader(inputBuffer);
  bond::Deserialize(reader, objOut);
  
  return objOut;
}

template <class T>
const uint8_t* CppBondSerializer<T>::serializeToByteArray(T obj, uint32_t* outlength)
{
  // Serialize to Compact format
  bond::OutputBuffer outputBuffer;
  bond::CompactBinaryWriter<bond::OutputBuffer> writer(outputBuffer);
  Serialize(obj, writer);
  bond::blob data = outputBuffer.GetBuffer();
  
  *outlength = data.length();
  return (uint8_t*)data.data();
}

template <class T>
const bond::bonded<T> CppBondSerializer<T>::getBondedObject(T obj) {
  bond::OutputBuffer outputBuffer;
  bond::CompactBinaryWriter<bond::OutputBuffer> writer(outputBuffer);
  Serialize(obj, writer);
  bond::CompactBinaryReader<bond::InputBuffer> reader(outputBuffer.GetBuffer());
  bond::bonded<T> bondedObj(reader);
  return bondedObj;
}

#endif /* CppBondSerializer_hpp */


