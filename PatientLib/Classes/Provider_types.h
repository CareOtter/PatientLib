
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.3.0.5
//   File : Provider_types.h
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

#include "BaseClasses_types.h"

namespace HealthCare
{
namespace Schemas
{
    
    struct Provider
      : ::HealthCare::Schemas::LocatableBaseEntity
    {
        bond::maybe<bond::nullable<std::string> > NationalProviderIdentifier;
        bond::maybe<bond::nullable<std::string> > Name;
        
        Provider()
        {
        }

        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated copy ctor OK
        Provider(const Provider& other) = default;
#endif
        
#ifndef BOND_NO_CXX11_RVALUE_REFERENCES
        Provider(Provider&& other)
          : ::HealthCare::Schemas::LocatableBaseEntity(std::move(other)),
            NationalProviderIdentifier(std::move(other.NationalProviderIdentifier)),
            Name(std::move(other.Name))
        {
        }
#endif
        
        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated operator= OK
        Provider& operator=(const Provider& other) = default;
#endif

        bool operator==(const Provider& other) const
        {
            return true
                && (static_cast<const ::HealthCare::Schemas::LocatableBaseEntity&>(*this) == static_cast<const ::HealthCare::Schemas::LocatableBaseEntity&>( other))
                && (NationalProviderIdentifier == other.NationalProviderIdentifier)
                && (Name == other.Name);
        }

        bool operator!=(const Provider& other) const
        {
            return !(*this == other);
        }

        void swap(Provider& other)
        {
            using std::swap;
            ::HealthCare::Schemas::LocatableBaseEntity::swap( other);
            swap(NationalProviderIdentifier, other.NationalProviderIdentifier);
            swap(Name, other.Name);
        }

        struct Schema;

    protected:
        void InitMetadata(const char* name, const char* qualified_name)
        {
            ::HealthCare::Schemas::LocatableBaseEntity::InitMetadata(name, qualified_name);
        }
    };

    inline void swap(Provider& left, Provider& right)
    {
        left.swap(right);
    }
} // namespace Schemas
} // namespace HealthCare

