
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.3.0.5
//   File : Patient_apply.cpp
//
// Changes to this file may cause incorrect behavior and will be lost when
// the code is regenerated.
// <auto-generated />
//------------------------------------------------------------------------------

#include "Patient_apply.h"
#include "Patient_reflection.h"

namespace HealthCare
{
namespace Schemas
{
    
    //
    // Overloads of Apply function with common transforms for Patient.
    // These overloads will be selected using argument dependent lookup
    // before bond::Apply function templates.
    //
    bool Apply(const bond::To<Patient>& transform,
               const bond::bonded<Patient>& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::InitSchemaDef& transform,
               const Patient& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::To<Patient>& transform,
               const bond::bonded<Patient, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::To<Patient>& transform,
               const bond::bonded<void, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const Patient& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Patient>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Patient, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Patient, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Patient, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const Patient& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Patient>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Patient, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Patient, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Patient, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::To<Patient>& transform,
               const bond::bonded<Patient, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::To<Patient>& transform,
               const bond::bonded<void, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const Patient& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Patient>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Patient, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Patient, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Patient, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const Patient& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Patient>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Patient, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Patient, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Patient, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::To<Patient>& transform,
               const bond::bonded<Patient, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::To<Patient>& transform,
               const bond::bonded<void, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const Patient& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Patient>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Patient, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Patient, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Patient, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const Patient& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Patient>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Patient, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Patient, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Patient, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    //
    // Overloads of Apply function with common transforms for EmergencyPatient.
    // These overloads will be selected using argument dependent lookup
    // before bond::Apply function templates.
    //
    bool Apply(const bond::To<EmergencyPatient>& transform,
               const bond::bonded<EmergencyPatient>& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::InitSchemaDef& transform,
               const EmergencyPatient& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::To<EmergencyPatient>& transform,
               const bond::bonded<EmergencyPatient, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::To<EmergencyPatient>& transform,
               const bond::bonded<void, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const EmergencyPatient& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<EmergencyPatient>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<EmergencyPatient, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<EmergencyPatient, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<EmergencyPatient, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const EmergencyPatient& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<EmergencyPatient>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<EmergencyPatient, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<EmergencyPatient, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<EmergencyPatient, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::To<EmergencyPatient>& transform,
               const bond::bonded<EmergencyPatient, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::To<EmergencyPatient>& transform,
               const bond::bonded<void, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const EmergencyPatient& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<EmergencyPatient>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<EmergencyPatient, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<EmergencyPatient, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<EmergencyPatient, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const EmergencyPatient& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<EmergencyPatient>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<EmergencyPatient, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<EmergencyPatient, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<EmergencyPatient, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::To<EmergencyPatient>& transform,
               const bond::bonded<EmergencyPatient, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::To<EmergencyPatient>& transform,
               const bond::bonded<void, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const EmergencyPatient& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<EmergencyPatient>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<EmergencyPatient, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<EmergencyPatient, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<EmergencyPatient, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const EmergencyPatient& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<EmergencyPatient>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<EmergencyPatient, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<EmergencyPatient, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<EmergencyPatient, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    //
    // Overloads of Apply function with common transforms for RegistrationPatient.
    // These overloads will be selected using argument dependent lookup
    // before bond::Apply function templates.
    //
    bool Apply(const bond::To<RegistrationPatient>& transform,
               const bond::bonded<RegistrationPatient>& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::InitSchemaDef& transform,
               const RegistrationPatient& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::To<RegistrationPatient>& transform,
               const bond::bonded<RegistrationPatient, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::To<RegistrationPatient>& transform,
               const bond::bonded<void, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const RegistrationPatient& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<RegistrationPatient>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<RegistrationPatient, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<RegistrationPatient, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<RegistrationPatient, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const RegistrationPatient& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<RegistrationPatient>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<RegistrationPatient, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<RegistrationPatient, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<RegistrationPatient, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::To<RegistrationPatient>& transform,
               const bond::bonded<RegistrationPatient, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::To<RegistrationPatient>& transform,
               const bond::bonded<void, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const RegistrationPatient& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<RegistrationPatient>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<RegistrationPatient, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<RegistrationPatient, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<RegistrationPatient, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const RegistrationPatient& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<RegistrationPatient>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<RegistrationPatient, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<RegistrationPatient, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<RegistrationPatient, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::To<RegistrationPatient>& transform,
               const bond::bonded<RegistrationPatient, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::To<RegistrationPatient>& transform,
               const bond::bonded<void, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const RegistrationPatient& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<RegistrationPatient>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<RegistrationPatient, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<RegistrationPatient, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<RegistrationPatient, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const RegistrationPatient& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<RegistrationPatient>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<RegistrationPatient, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<RegistrationPatient, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<RegistrationPatient, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
} // namespace Schemas
} // namespace HealthCare
