
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.3.0.5
//   File : Appointment_types.cpp
//
// Changes to this file may cause incorrect behavior and will be lost when
// the code is regenerated.
// <auto-generated />
//------------------------------------------------------------------------------

#include "Appointment_reflection.h"
#include <bond/core/exception.h>

namespace HealthCare
{
namespace Schemas
{
    
    namespace _bond_enumerators
    {
    namespace AppointmentStatus
    {
        const
        std::map<std::string, enum AppointmentStatus> _name_to_value_AppointmentStatus =
            boost::assign::map_list_of<std::string, enum AppointmentStatus>
                ("Cancelled", Cancelled)
                ("NotCheckedIn", NotCheckedIn)
                ("CheckedIn", CheckedIn)
                ("Roomed", Roomed)
                ("ProviderReady", ProviderReady)
                ("Complete", Complete);

        const
        std::map<enum AppointmentStatus, std::string> _value_to_name_AppointmentStatus =
            bond::reverse_map(_name_to_value_AppointmentStatus);

        const std::string& ToString(enum AppointmentStatus value)
        {
            std::map<enum AppointmentStatus, std::string>::const_iterator it =
                GetValueToNameMap(value).find(value);

            if (GetValueToNameMap(value).end() == it)
                bond::InvalidEnumValueException(value, "AppointmentStatus");

            return it->second;
        }

        void FromString(const std::string& name, enum AppointmentStatus& value)
        {
            std::map<std::string, enum AppointmentStatus>::const_iterator it =
                _name_to_value_AppointmentStatus.find(name);

            if (_name_to_value_AppointmentStatus.end() == it)
                bond::InvalidEnumValueException(name.c_str(), "AppointmentStatus");

            value = it->second;
        }

    } // namespace AppointmentStatus
    } // namespace _bond_enumerators

    
    const bond::Metadata Appointment::Schema::metadata
        = Appointment::Schema::GetMetadata();
    
    const bond::Metadata Appointment::Schema::s_StartDate_metadata
        = bond::reflection::MetadataInit(bond::nothing, "StartDate");
    
    const bond::Metadata Appointment::Schema::s_DurationMinutes_metadata
        = bond::reflection::MetadataInit(bond::nothing, "DurationMinutes");
    
    const bond::Metadata Appointment::Schema::s_Status_metadata
        = bond::reflection::MetadataInit(bond::nothing, "Status");
    
    const bond::Metadata Appointment::Schema::s_ReasonForAppointment_metadata
        = bond::reflection::MetadataInit(bond::nothing, "ReasonForAppointment");
    
    const bond::Metadata Appointment::Schema::s_AppointmentType_metadata
        = bond::reflection::MetadataInit(bond::nothing, "AppointmentType");
    
    const bond::Metadata Appointment::Schema::s_RoomName_metadata
        = bond::reflection::MetadataInit(bond::nothing, "RoomName");
    
    const bond::Metadata Appointment::Schema::s_NoteId_metadata
        = bond::reflection::MetadataInit(bond::nothing, "NoteId");

    
} // namespace Schemas
} // namespace HealthCare