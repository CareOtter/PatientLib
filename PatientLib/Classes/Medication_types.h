
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.3.0.5
//   File : Medication_types.h
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
#include "Prescription_types.h"

namespace HealthCare
{
namespace Schemas
{
    
    struct Medication
      : ::HealthCare::Schemas::BaseClinicalItem
    {
        bond::maybe<std::string> OrderId;
        bond::maybe<bond::nullable<std::string> > CommonName;
        bond::maybe<bond::nullable<std::string> > MedicalName;
        bond::maybe<bond::nullable<std::string> > Dose;
        bond::maybe<bond::nullable<std::string> > Units;
        bond::maybe<bond::nullable<std::string> > Strength;
        bond::maybe<bond::nullable<std::string> > Form;
        bond::maybe<bond::nullable<int64_t> > Administered;
        bond::maybe<bond::nullable<int64_t> > AdministrationStopped;
        bond::maybe<bond::nullable<std::string> > SignatureLine1;
        bond::maybe<bond::nullable<std::string> > SignatureLine2;
        bond::maybe<bond::nullable<std::string> > Site;
        bond::maybe<bond::nullable<std::string> > Route;
        bond::maybe<bond::nullable<std::string> > NDCNumber;
        bond::maybe<bond::nullable< ::HealthCare::Schemas::Prescription> > Prescription;
        bond::maybe<bond::nullable<std::string> > Frequency;
        bond::maybe<bond::nullable<std::string> > Duration;
        bond::maybe<bond::nullable<int64_t> > Provider;
        bond::maybe<bond::nullable<std::string> > ProviderName;
        
        Medication()
        {
        }

        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated copy ctor OK
        Medication(const Medication& other) = default;
#endif
        
#ifndef BOND_NO_CXX11_RVALUE_REFERENCES
        Medication(Medication&& other)
          : ::HealthCare::Schemas::BaseClinicalItem(std::move(other)),
            OrderId(std::move(other.OrderId)),
            CommonName(std::move(other.CommonName)),
            MedicalName(std::move(other.MedicalName)),
            Dose(std::move(other.Dose)),
            Units(std::move(other.Units)),
            Strength(std::move(other.Strength)),
            Form(std::move(other.Form)),
            Administered(std::move(other.Administered)),
            AdministrationStopped(std::move(other.AdministrationStopped)),
            SignatureLine1(std::move(other.SignatureLine1)),
            SignatureLine2(std::move(other.SignatureLine2)),
            Site(std::move(other.Site)),
            Route(std::move(other.Route)),
            NDCNumber(std::move(other.NDCNumber)),
            Prescription(std::move(other.Prescription)),
            Frequency(std::move(other.Frequency)),
            Duration(std::move(other.Duration)),
            Provider(std::move(other.Provider)),
            ProviderName(std::move(other.ProviderName))
        {
        }
#endif
        
        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated operator= OK
        Medication& operator=(const Medication& other) = default;
#endif

        bool operator==(const Medication& other) const
        {
            return true
                && (static_cast<const ::HealthCare::Schemas::BaseClinicalItem&>(*this) == static_cast<const ::HealthCare::Schemas::BaseClinicalItem&>( other))
                && (OrderId == other.OrderId)
                && (CommonName == other.CommonName)
                && (MedicalName == other.MedicalName)
                && (Dose == other.Dose)
                && (Units == other.Units)
                && (Strength == other.Strength)
                && (Form == other.Form)
                && (Administered == other.Administered)
                && (AdministrationStopped == other.AdministrationStopped)
                && (SignatureLine1 == other.SignatureLine1)
                && (SignatureLine2 == other.SignatureLine2)
                && (Site == other.Site)
                && (Route == other.Route)
                && (NDCNumber == other.NDCNumber)
                && (Prescription == other.Prescription)
                && (Frequency == other.Frequency)
                && (Duration == other.Duration)
                && (Provider == other.Provider)
                && (ProviderName == other.ProviderName);
        }

        bool operator!=(const Medication& other) const
        {
            return !(*this == other);
        }

        void swap(Medication& other)
        {
            using std::swap;
            ::HealthCare::Schemas::BaseClinicalItem::swap( other);
            swap(OrderId, other.OrderId);
            swap(CommonName, other.CommonName);
            swap(MedicalName, other.MedicalName);
            swap(Dose, other.Dose);
            swap(Units, other.Units);
            swap(Strength, other.Strength);
            swap(Form, other.Form);
            swap(Administered, other.Administered);
            swap(AdministrationStopped, other.AdministrationStopped);
            swap(SignatureLine1, other.SignatureLine1);
            swap(SignatureLine2, other.SignatureLine2);
            swap(Site, other.Site);
            swap(Route, other.Route);
            swap(NDCNumber, other.NDCNumber);
            swap(Prescription, other.Prescription);
            swap(Frequency, other.Frequency);
            swap(Duration, other.Duration);
            swap(Provider, other.Provider);
            swap(ProviderName, other.ProviderName);
        }

        struct Schema;

    protected:
        void InitMetadata(const char* name, const char* qualified_name)
        {
            ::HealthCare::Schemas::BaseClinicalItem::InitMetadata(name, qualified_name);
        }
    };

    inline void swap(Medication& left, Medication& right)
    {
        left.swap(right);
    }
} // namespace Schemas
} // namespace HealthCare
