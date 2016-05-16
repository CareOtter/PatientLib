
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.3.0.5
//   File : Examination_types.h
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
#include <bond/core/nullable.h>
#include <bond/core/bonded.h>

#include "BaseClasses_types.h"
#include "Observation_types.h"

namespace HealthCare
{
namespace Schemas
{
    
    struct Examination
      : ::HealthCare::Schemas::BaseItem
    {
        bond::maybe<bond::nullable<std::string> > Name;
        bond::maybe<bond::nullable<int64_t> > ExaminationDate;
        bond::maybe<bond::nullable<std::string> > ExaminationType;
        bond::nullable<bond::bonded< ::HealthCare::Schemas::BaseItemCollection< ::HealthCare::Schemas::Observation> > > Observations;
        
        Examination()
        {
        }

        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated copy ctor OK
        Examination(const Examination& other) = default;
#endif
        
#ifndef BOND_NO_CXX11_RVALUE_REFERENCES
        Examination(Examination&& other)
          : ::HealthCare::Schemas::BaseItem(std::move(other)),
            Name(std::move(other.Name)),
            ExaminationDate(std::move(other.ExaminationDate)),
            ExaminationType(std::move(other.ExaminationType)),
            Observations(std::move(other.Observations))
        {
        }
#endif
        
        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated operator= OK
        Examination& operator=(const Examination& other) = default;
#endif

        bool operator==(const Examination& other) const
        {
            return true
                && (static_cast<const ::HealthCare::Schemas::BaseItem&>(*this) == static_cast<const ::HealthCare::Schemas::BaseItem&>( other))
                && (Name == other.Name)
                && (ExaminationDate == other.ExaminationDate)
                && (ExaminationType == other.ExaminationType)
                && (Observations == other.Observations);
        }

        bool operator!=(const Examination& other) const
        {
            return !(*this == other);
        }

        void swap(Examination& other)
        {
            using std::swap;
            ::HealthCare::Schemas::BaseItem::swap( other);
            swap(Name, other.Name);
            swap(ExaminationDate, other.ExaminationDate);
            swap(ExaminationType, other.ExaminationType);
            swap(Observations, other.Observations);
        }

        struct Schema;

    protected:
        void InitMetadata(const char* name, const char* qualified_name)
        {
            ::HealthCare::Schemas::BaseItem::InitMetadata(name, qualified_name);
        }
    };

    inline void swap(Examination& left, Examination& right)
    {
        left.swap(right);
    }
} // namespace Schemas
} // namespace HealthCare

