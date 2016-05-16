
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.3.0.5
//   File : Appointment_types.h
//
// Changes to this file may cause incorrect behavior and will be lost when
// the code is regenerated.
// <auto-generated />
//------------------------------------------------------------------------------

#pragma once

#include <bond/core/bond_version.h>

#if BOND_VERSION < 0x302
#error This file was generated by a newer version of Bond compiler
#error and is incompatible with your version Bond library.
#endif

#if BOND_MIN_CODEGEN_VERSION > 0x0305
#error This file was generated by an older version of Bond compiler
#error and is incompatible with your version Bond library.
#endif

#include <bond/core/config.h>
#include <bond/core/containers.h>


#include "BaseClasses_types.h"

namespace HealthCare
{
namespace Schemas
{
    
    namespace _bond_enumerators
    {
    namespace AppointmentStatus
    {
        enum AppointmentStatus
        {
            Cancelled = 0,
            NotCheckedIn = 1,
            CheckedIn = 2,
            Roomed = 3,
            ProviderReady = 4,
            Complete = 5
        };
        
        extern const std::map<enum AppointmentStatus, std::string> _value_to_name_AppointmentStatus;
        extern const std::map<std::string, enum AppointmentStatus> _name_to_value_AppointmentStatus;

        inline
        const char* GetTypeName(enum AppointmentStatus)
        {
            return "AppointmentStatus";
        }

        inline
        const char* GetTypeName(enum AppointmentStatus, const bond::qualified_name_tag&)
        {
            return "HealthCare.Schemas.AppointmentStatus";
        }

        inline
        const std::map<enum AppointmentStatus, std::string>& GetValueToNameMap(enum AppointmentStatus)
        {
            return _value_to_name_AppointmentStatus;
        }

        inline
        const std::map<std::string, enum AppointmentStatus>& GetNameToValueMap(enum AppointmentStatus)
        {
            return _name_to_value_AppointmentStatus;
        }

        const std::string& ToString(enum AppointmentStatus value);

        void FromString(const std::string& name, enum AppointmentStatus& value);

        inline
        bool ToEnum(enum AppointmentStatus& value, const std::string& name)
        {
            std::map<std::string, enum AppointmentStatus>::const_iterator it =
                _name_to_value_AppointmentStatus.find(name);

            if (_name_to_value_AppointmentStatus.end() == it)
                return false;

            value = it->second;

            return true;
        }
    } // namespace AppointmentStatus
    } // namespace _bond_enumerators

    using namespace _bond_enumerators::AppointmentStatus;
    

    
    struct Appointment
      : ::HealthCare::Schemas::BaseEntity
    {
        bond::maybe<bond::nullable<int64_t> > StartDate;
        bond::maybe<bond::nullable<int64_t> > DurationMinutes;
        bond::maybe<bond::nullable< ::HealthCare::Schemas::AppointmentStatus> > Status;
        bond::maybe<bond::nullable<std::string> > ReasonForAppointment;
        bond::maybe<bond::nullable<std::string> > AppointmentType;
        bond::maybe<bond::nullable<std::string> > RoomName;
        bond::maybe<bond::nullable<std::string> > NoteId;
        
        Appointment()
        {
        }

        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated copy ctor OK
        Appointment(const Appointment& other) = default;
#endif
        
#ifndef BOND_NO_CXX11_RVALUE_REFERENCES
        Appointment(Appointment&& other)
          : ::HealthCare::Schemas::BaseEntity(std::move(other)),
            StartDate(std::move(other.StartDate)),
            DurationMinutes(std::move(other.DurationMinutes)),
            Status(std::move(other.Status)),
            ReasonForAppointment(std::move(other.ReasonForAppointment)),
            AppointmentType(std::move(other.AppointmentType)),
            RoomName(std::move(other.RoomName)),
            NoteId(std::move(other.NoteId))
        {
        }
#endif
        
        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated operator= OK
        Appointment& operator=(const Appointment& other) = default;
#endif

        bool operator==(const Appointment& other) const
        {
            return true
                && (static_cast<const ::HealthCare::Schemas::BaseEntity&>(*this) == static_cast<const ::HealthCare::Schemas::BaseEntity&>( other))
                && (StartDate == other.StartDate)
                && (DurationMinutes == other.DurationMinutes)
                && (Status == other.Status)
                && (ReasonForAppointment == other.ReasonForAppointment)
                && (AppointmentType == other.AppointmentType)
                && (RoomName == other.RoomName)
                && (NoteId == other.NoteId);
        }

        bool operator!=(const Appointment& other) const
        {
            return !(*this == other);
        }

        void swap(Appointment& other)
        {
            using std::swap;
            ::HealthCare::Schemas::BaseEntity::swap( other);
            swap(StartDate, other.StartDate);
            swap(DurationMinutes, other.DurationMinutes);
            swap(Status, other.Status);
            swap(ReasonForAppointment, other.ReasonForAppointment);
            swap(AppointmentType, other.AppointmentType);
            swap(RoomName, other.RoomName);
            swap(NoteId, other.NoteId);
        }

        struct Schema;

    protected:
        void InitMetadata(const char* name, const char* qualified_name)
        {
            ::HealthCare::Schemas::BaseEntity::InitMetadata(name, qualified_name);
        }
    };

    inline void swap(Appointment& left, Appointment& right)
    {
        left.swap(right);
    }
} // namespace Schemas
} // namespace HealthCare

