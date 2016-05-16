
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.3.0.5
//   File : Appointment_apply.cpp
//
// Changes to this file may cause incorrect behavior and will be lost when
// the code is regenerated.
// <auto-generated />
//------------------------------------------------------------------------------

#include "Appointment_apply.h"
#include "Appointment_reflection.h"

namespace HealthCare
{
namespace Schemas
{
    
    //
    // Overloads of Apply function with common transforms for Appointment.
    // These overloads will be selected using argument dependent lookup
    // before bond::Apply function templates.
    //
    bool Apply(const bond::To<Appointment>& transform,
               const bond::bonded<Appointment>& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::InitSchemaDef& transform,
               const Appointment& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::To<Appointment>& transform,
               const bond::bonded<Appointment, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::To<Appointment>& transform,
               const bond::bonded<void, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const Appointment& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Appointment>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Appointment, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Appointment, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Appointment, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const Appointment& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Appointment>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Appointment, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Appointment, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Appointment, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::To<Appointment>& transform,
               const bond::bonded<Appointment, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::To<Appointment>& transform,
               const bond::bonded<void, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const Appointment& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Appointment>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Appointment, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Appointment, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Appointment, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const Appointment& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Appointment>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Appointment, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Appointment, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Appointment, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::To<Appointment>& transform,
               const bond::bonded<Appointment, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::To<Appointment>& transform,
               const bond::bonded<void, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const Appointment& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Appointment>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Appointment, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Appointment, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Appointment, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const Appointment& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Appointment>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Appointment, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Appointment, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Appointment, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
} // namespace Schemas
} // namespace HealthCare
