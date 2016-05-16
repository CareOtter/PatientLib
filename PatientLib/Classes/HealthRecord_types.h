
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.3.0.5
//   File : HealthRecord_types.h
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
#include "Allergy_types.h"
#include "Problem_types.h"
#include "SurgicalProcedure_types.h"
#include "FamilyProblem_types.h"
#include "SocialHistoryItem_types.h"
#include "Medication_types.h"
#include "Prescription_types.h"
#include "Observation_types.h"
#include "Order_types.h"
#include "Immunization_types.h"
#include "Examination_types.h"

namespace HealthCare
{
namespace Schemas
{
    
    struct HealthRecord
    {
        bond::nullable<bond::bonded< ::HealthCare::Schemas::BaseItemCollection< ::HealthCare::Schemas::Allergy> > > Allergies;
        bond::nullable<bond::bonded< ::HealthCare::Schemas::BaseItemCollection< ::HealthCare::Schemas::Problem> > > Problems;
        bond::nullable<bond::bonded< ::HealthCare::Schemas::BaseItemCollection< ::HealthCare::Schemas::SurgicalProcedure> > > SurgicalProcedures;
        bond::nullable<bond::bonded< ::HealthCare::Schemas::BaseItemCollection< ::HealthCare::Schemas::FamilyProblem> > > FamilyProblems;
        bond::nullable<bond::bonded< ::HealthCare::Schemas::BaseItemCollection< ::HealthCare::Schemas::SocialHistoryItem> > > SocialHistoryItems;
        bond::nullable<bond::bonded< ::HealthCare::Schemas::BaseItemCollection< ::HealthCare::Schemas::Medication> > > Medications;
        bond::nullable<bond::bonded< ::HealthCare::Schemas::BaseItemCollection< ::HealthCare::Schemas::Observation> > > Observations;
        bond::nullable<bond::bonded< ::HealthCare::Schemas::BaseItemCollection< ::HealthCare::Schemas::Order> > > Orders;
        bond::nullable<bond::bonded< ::HealthCare::Schemas::BaseItemCollection< ::HealthCare::Schemas::Immunization> > > Immunizations;
        bond::nullable<bond::bonded< ::HealthCare::Schemas::BaseItemCollection< ::HealthCare::Schemas::Examination> > > Examinations;
        
        HealthRecord()
        {
        }

        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated copy ctor OK
        HealthRecord(const HealthRecord& other) = default;
#endif
        
#ifndef BOND_NO_CXX11_RVALUE_REFERENCES
        HealthRecord(HealthRecord&& other)
          : Allergies(std::move(other.Allergies)),
            Problems(std::move(other.Problems)),
            SurgicalProcedures(std::move(other.SurgicalProcedures)),
            FamilyProblems(std::move(other.FamilyProblems)),
            SocialHistoryItems(std::move(other.SocialHistoryItems)),
            Medications(std::move(other.Medications)),
            Observations(std::move(other.Observations)),
            Orders(std::move(other.Orders)),
            Immunizations(std::move(other.Immunizations)),
            Examinations(std::move(other.Examinations))
        {
        }
#endif
        
        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated operator= OK
        HealthRecord& operator=(const HealthRecord& other) = default;
#endif

        bool operator==(const HealthRecord& other) const
        {
            return true
                && (Allergies == other.Allergies)
                && (Problems == other.Problems)
                && (SurgicalProcedures == other.SurgicalProcedures)
                && (FamilyProblems == other.FamilyProblems)
                && (SocialHistoryItems == other.SocialHistoryItems)
                && (Medications == other.Medications)
                && (Observations == other.Observations)
                && (Orders == other.Orders)
                && (Immunizations == other.Immunizations)
                && (Examinations == other.Examinations);
        }

        bool operator!=(const HealthRecord& other) const
        {
            return !(*this == other);
        }

        void swap(HealthRecord& other)
        {
            using std::swap;
            swap(Allergies, other.Allergies);
            swap(Problems, other.Problems);
            swap(SurgicalProcedures, other.SurgicalProcedures);
            swap(FamilyProblems, other.FamilyProblems);
            swap(SocialHistoryItems, other.SocialHistoryItems);
            swap(Medications, other.Medications);
            swap(Observations, other.Observations);
            swap(Orders, other.Orders);
            swap(Immunizations, other.Immunizations);
            swap(Examinations, other.Examinations);
        }

        struct Schema;

    protected:
        void InitMetadata(const char*, const char*)
        {
        }
    };

    inline void swap(HealthRecord& left, HealthRecord& right)
    {
        left.swap(right);
    }
} // namespace Schemas
} // namespace HealthCare
