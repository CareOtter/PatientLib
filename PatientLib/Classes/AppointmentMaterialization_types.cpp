
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.3.0.5
//   File : AppointmentMaterialization_types.cpp
//
// Changes to this file may cause incorrect behavior and will be lost when
// the code is regenerated.
// <auto-generated />
//------------------------------------------------------------------------------

#include "AppointmentMaterialization_reflection.h"
#include <bond/core/exception.h>

namespace HealthCare
{
namespace Schemas
{
    
    const bond::Metadata AppointmentMaterialization::Schema::metadata
        = AppointmentMaterialization::Schema::GetMetadata();
    
    const bond::Metadata AppointmentMaterialization::Schema::s_Patient_metadata
        = bond::reflection::MetadataInit(bond::nothing, "Patient");
    
    const bond::Metadata AppointmentMaterialization::Schema::s_Provider_metadata
        = bond::reflection::MetadataInit(bond::nothing, "Provider");
    
    const bond::Metadata AppointmentMaterialization::Schema::s_Appointment_metadata
        = bond::reflection::MetadataInit(bond::nothing, "Appointment");

    
} // namespace Schemas
} // namespace HealthCare
