
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.3.0.5
//   File : UserSchema_apply.h
//
// Changes to this file may cause incorrect behavior and will be lost when
// the code is regenerated.
// <auto-generated />
//------------------------------------------------------------------------------

#pragma once

#include "UserSchema_types.h"
#include <bond/core/bond.h>
#include <bond/stream/output_buffer.h>
#include "BaseClasses_apply.h"
#include "BasePerson_apply.h"

namespace HealthCare
{
namespace Schemas
{
    
    //
    // Overloads of Apply function with common transforms for Preference.
    // These overloads will be selected using argument dependent lookup
    // before bond::Apply function templates.
    //
    bool Apply(const bond::To<Preference>& transform,
               const bond::bonded<Preference>& value);

    bool Apply(const bond::InitSchemaDef& transform,
               const Preference& value);
    
    bool Apply(const bond::To<Preference>& transform,
               const bond::bonded<Preference, bond::CompactBinaryReader<bond::InputBuffer>&>& value);

    bool Apply(const bond::To<Preference>& transform,
               const bond::bonded<void, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const Preference& value);

    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Preference>& value);
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Preference, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Preference, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Preference, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const Preference& value);

    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Preference>& value);
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Preference, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Preference, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Preference, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::To<Preference>& transform,
               const bond::bonded<Preference, bond::FastBinaryReader<bond::InputBuffer>&>& value);

    bool Apply(const bond::To<Preference>& transform,
               const bond::bonded<void, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const Preference& value);

    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Preference>& value);
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Preference, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Preference, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Preference, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const Preference& value);

    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Preference>& value);
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Preference, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Preference, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Preference, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::To<Preference>& transform,
               const bond::bonded<Preference, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);

    bool Apply(const bond::To<Preference>& transform,
               const bond::bonded<void, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const Preference& value);

    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Preference>& value);
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Preference, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Preference, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Preference, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const Preference& value);

    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Preference>& value);
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Preference, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Preference, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Preference, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    //
    // Overloads of Apply function with common transforms for Feedback.
    // These overloads will be selected using argument dependent lookup
    // before bond::Apply function templates.
    //
    bool Apply(const bond::To<Feedback>& transform,
               const bond::bonded<Feedback>& value);

    bool Apply(const bond::InitSchemaDef& transform,
               const Feedback& value);
    
    bool Apply(const bond::To<Feedback>& transform,
               const bond::bonded<Feedback, bond::CompactBinaryReader<bond::InputBuffer>&>& value);

    bool Apply(const bond::To<Feedback>& transform,
               const bond::bonded<void, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const Feedback& value);

    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Feedback>& value);
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Feedback, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Feedback, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Feedback, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const Feedback& value);

    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Feedback>& value);
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Feedback, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Feedback, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Feedback, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::To<Feedback>& transform,
               const bond::bonded<Feedback, bond::FastBinaryReader<bond::InputBuffer>&>& value);

    bool Apply(const bond::To<Feedback>& transform,
               const bond::bonded<void, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const Feedback& value);

    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Feedback>& value);
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Feedback, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Feedback, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Feedback, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const Feedback& value);

    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Feedback>& value);
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Feedback, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Feedback, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Feedback, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::To<Feedback>& transform,
               const bond::bonded<Feedback, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);

    bool Apply(const bond::To<Feedback>& transform,
               const bond::bonded<void, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const Feedback& value);

    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Feedback>& value);
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Feedback, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Feedback, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Feedback, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const Feedback& value);

    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Feedback>& value);
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Feedback, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Feedback, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Feedback, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    //
    // Overloads of Apply function with common transforms for User.
    // These overloads will be selected using argument dependent lookup
    // before bond::Apply function templates.
    //
    bool Apply(const bond::To<User>& transform,
               const bond::bonded<User>& value);

    bool Apply(const bond::InitSchemaDef& transform,
               const User& value);
    
    bool Apply(const bond::To<User>& transform,
               const bond::bonded<User, bond::CompactBinaryReader<bond::InputBuffer>&>& value);

    bool Apply(const bond::To<User>& transform,
               const bond::bonded<void, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const User& value);

    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<User>& value);
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<User, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<User, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<User, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const User& value);

    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<User>& value);
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<User, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<User, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<User, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::To<User>& transform,
               const bond::bonded<User, bond::FastBinaryReader<bond::InputBuffer>&>& value);

    bool Apply(const bond::To<User>& transform,
               const bond::bonded<void, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const User& value);

    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<User>& value);
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<User, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<User, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<User, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const User& value);

    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<User>& value);
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<User, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<User, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<User, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::To<User>& transform,
               const bond::bonded<User, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);

    bool Apply(const bond::To<User>& transform,
               const bond::bonded<void, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const User& value);

    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<User>& value);
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<User, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<User, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<User, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const User& value);

    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<User>& value);
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<User, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<User, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<User, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
} // namespace Schemas
} // namespace HealthCare