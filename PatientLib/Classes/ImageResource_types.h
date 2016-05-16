
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.3.0.5
//   File : ImageResource_types.h
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
    
    struct ImageResource
      : ::HealthCare::Schemas::BaseItem
    {
        bond::maybe<bond::nullable<std::string> > ResourceType;
        bond::maybe<bond::nullable<std::string> > ResourceExtension;
        bond::maybe<bond::nullable<std::string> > ResourceId;
        
        ImageResource()
        {
        }

        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated copy ctor OK
        ImageResource(const ImageResource& other) = default;
#endif
        
#ifndef BOND_NO_CXX11_RVALUE_REFERENCES
        ImageResource(ImageResource&& other)
          : ::HealthCare::Schemas::BaseItem(std::move(other)),
            ResourceType(std::move(other.ResourceType)),
            ResourceExtension(std::move(other.ResourceExtension)),
            ResourceId(std::move(other.ResourceId))
        {
        }
#endif
        
        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated operator= OK
        ImageResource& operator=(const ImageResource& other) = default;
#endif

        bool operator==(const ImageResource& other) const
        {
            return true
                && (static_cast<const ::HealthCare::Schemas::BaseItem&>(*this) == static_cast<const ::HealthCare::Schemas::BaseItem&>( other))
                && (ResourceType == other.ResourceType)
                && (ResourceExtension == other.ResourceExtension)
                && (ResourceId == other.ResourceId);
        }

        bool operator!=(const ImageResource& other) const
        {
            return !(*this == other);
        }

        void swap(ImageResource& other)
        {
            using std::swap;
            ::HealthCare::Schemas::BaseItem::swap( other);
            swap(ResourceType, other.ResourceType);
            swap(ResourceExtension, other.ResourceExtension);
            swap(ResourceId, other.ResourceId);
        }

        struct Schema;

    protected:
        void InitMetadata(const char* name, const char* qualified_name)
        {
            ::HealthCare::Schemas::BaseItem::InitMetadata(name, qualified_name);
        }
    };

    inline void swap(ImageResource& left, ImageResource& right)
    {
        left.swap(right);
    }
} // namespace Schemas
} // namespace HealthCare
