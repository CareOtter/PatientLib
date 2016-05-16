
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.3.0.5
//   File : AppointmentMaterialization_types.h
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


#include "Patient_types.h"
#include "Provider_types.h"
#include "Appointment_types.h"

namespace HealthCare
{
namespace Schemas
{
    
    struct AppointmentMaterialization
    {
        bond::maybe<bond::nullable< ::HealthCare::Schemas::Patient> > Patient;
        bond::maybe<bond::nullable< ::HealthCare::Schemas::Provider> > Provider;
        bond::maybe<bond::nullable< ::HealthCare::Schemas::Appointment> > Appointment;
        
        AppointmentMaterialization()
        {
        }

        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated copy ctor OK
        AppointmentMaterialization(const AppointmentMaterialization& other) = default;
#endif
        
#ifndef BOND_NO_CXX11_RVALUE_REFERENCES
        AppointmentMaterialization(AppointmentMaterialization&& other)
          : Patient(std::move(other.Patient)),
            Provider(std::move(other.Provider)),
            Appointment(std::move(other.Appointment))
        {
        }
#endif
        
        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated operator= OK
        AppointmentMaterialization& operator=(const AppointmentMaterialization& other) = default;
#endif

        bool operator==(const AppointmentMaterialization& other) const
        {
            return true
                && (Patient == other.Patient)
                && (Provider == other.Provider)
                && (Appointment == other.Appointment);
        }

        bool operator!=(const AppointmentMaterialization& other) const
        {
            return !(*this == other);
        }

        void swap(AppointmentMaterialization& other)
        {
            using std::swap;
            swap(Patient, other.Patient);
            swap(Provider, other.Provider);
            swap(Appointment, other.Appointment);
        }

        struct Schema;

    protected:
        void InitMetadata(const char*, const char*)
        {
        }
    };

    inline void swap(AppointmentMaterialization& left, AppointmentMaterialization& right)
    {
        left.swap(right);
    }
} // namespace Schemas
} // namespace HealthCare

