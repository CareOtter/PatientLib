
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.3.0.5
//   File : Order_types.h
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
    
    namespace _bond_enumerators
    {
    namespace OrderPriority
    {
        enum OrderPriority
        {
            Routine,
            Stat
        };
        
        extern const std::map<enum OrderPriority, std::string> _value_to_name_OrderPriority;
        extern const std::map<std::string, enum OrderPriority> _name_to_value_OrderPriority;

        inline
        const char* GetTypeName(enum OrderPriority)
        {
            return "OrderPriority";
        }

        inline
        const char* GetTypeName(enum OrderPriority, const bond::qualified_name_tag&)
        {
            return "HealthCare.Schemas.OrderPriority";
        }

        inline
        const std::map<enum OrderPriority, std::string>& GetValueToNameMap(enum OrderPriority)
        {
            return _value_to_name_OrderPriority;
        }

        inline
        const std::map<std::string, enum OrderPriority>& GetNameToValueMap(enum OrderPriority)
        {
            return _name_to_value_OrderPriority;
        }

        const std::string& ToString(enum OrderPriority value);

        void FromString(const std::string& name, enum OrderPriority& value);

        inline
        bool ToEnum(enum OrderPriority& value, const std::string& name)
        {
            std::map<std::string, enum OrderPriority>::const_iterator it =
                _name_to_value_OrderPriority.find(name);

            if (_name_to_value_OrderPriority.end() == it)
                return false;

            value = it->second;

            return true;
        }
    } // namespace OrderPriority
    } // namespace _bond_enumerators

    using namespace _bond_enumerators::OrderPriority;
    

    
    namespace _bond_enumerators
    {
    namespace OrderType
    {
        enum OrderType
        {
            Laboratory,
            Imaging
        };
        
        extern const std::map<enum OrderType, std::string> _value_to_name_OrderType;
        extern const std::map<std::string, enum OrderType> _name_to_value_OrderType;

        inline
        const char* GetTypeName(enum OrderType)
        {
            return "OrderType";
        }

        inline
        const char* GetTypeName(enum OrderType, const bond::qualified_name_tag&)
        {
            return "HealthCare.Schemas.OrderType";
        }

        inline
        const std::map<enum OrderType, std::string>& GetValueToNameMap(enum OrderType)
        {
            return _value_to_name_OrderType;
        }

        inline
        const std::map<std::string, enum OrderType>& GetNameToValueMap(enum OrderType)
        {
            return _name_to_value_OrderType;
        }

        const std::string& ToString(enum OrderType value);

        void FromString(const std::string& name, enum OrderType& value);

        inline
        bool ToEnum(enum OrderType& value, const std::string& name)
        {
            std::map<std::string, enum OrderType>::const_iterator it =
                _name_to_value_OrderType.find(name);

            if (_name_to_value_OrderType.end() == it)
                return false;

            value = it->second;

            return true;
        }
    } // namespace OrderType
    } // namespace _bond_enumerators

    using namespace _bond_enumerators::OrderType;
    

    
    struct Order
      : ::HealthCare::Schemas::BaseClinicalItem
    {
        bond::maybe<bond::nullable<int64_t> > OrderDate;
        bond::nullable<bond::bonded< ::HealthCare::Schemas::BaseItemCollection< ::HealthCare::Schemas::Observation> > > Results;
        bond::maybe<bond::nullable<int64_t> > ScheduledDate;
        bond::maybe<bond::nullable< ::HealthCare::Schemas::OrderPriority> > Priority;
        bond::maybe<bond::nullable<int64_t> > OrderingProvider;
        bond::maybe<bond::nullable< ::HealthCare::Schemas::OrderType> > OrderType;
        bond::maybe<bond::nullable<std::string> > PerformingFacility;
        bond::maybe<bond::nullable<std::string> > CopyTo;
        bond::maybe<bond::nullable<std::string> > OrderItemSpecificInformation;
        bond::maybe<bond::nullable<std::string> > CollectionInfo;
        bond::maybe<bond::nullable<std::string> > PatientInstructions;
        bond::maybe<bond::nullable<std::string> > PerformingFacilityInstructions;
        bond::maybe<bond::nullable<std::string> > OrderingProviderName;
        
        Order()
        {
        }

        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated copy ctor OK
        Order(const Order& other) = default;
#endif
        
#ifndef BOND_NO_CXX11_RVALUE_REFERENCES
        Order(Order&& other)
          : ::HealthCare::Schemas::BaseClinicalItem(std::move(other)),
            OrderDate(std::move(other.OrderDate)),
            Results(std::move(other.Results)),
            ScheduledDate(std::move(other.ScheduledDate)),
            Priority(std::move(other.Priority)),
            OrderingProvider(std::move(other.OrderingProvider)),
            OrderType(std::move(other.OrderType)),
            PerformingFacility(std::move(other.PerformingFacility)),
            CopyTo(std::move(other.CopyTo)),
            OrderItemSpecificInformation(std::move(other.OrderItemSpecificInformation)),
            CollectionInfo(std::move(other.CollectionInfo)),
            PatientInstructions(std::move(other.PatientInstructions)),
            PerformingFacilityInstructions(std::move(other.PerformingFacilityInstructions)),
            OrderingProviderName(std::move(other.OrderingProviderName))
        {
        }
#endif
        
        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated operator= OK
        Order& operator=(const Order& other) = default;
#endif

        bool operator==(const Order& other) const
        {
            return true
                && (static_cast<const ::HealthCare::Schemas::BaseClinicalItem&>(*this) == static_cast<const ::HealthCare::Schemas::BaseClinicalItem&>( other))
                && (OrderDate == other.OrderDate)
                && (Results == other.Results)
                && (ScheduledDate == other.ScheduledDate)
                && (Priority == other.Priority)
                && (OrderingProvider == other.OrderingProvider)
                && (OrderType == other.OrderType)
                && (PerformingFacility == other.PerformingFacility)
                && (CopyTo == other.CopyTo)
                && (OrderItemSpecificInformation == other.OrderItemSpecificInformation)
                && (CollectionInfo == other.CollectionInfo)
                && (PatientInstructions == other.PatientInstructions)
                && (PerformingFacilityInstructions == other.PerformingFacilityInstructions)
                && (OrderingProviderName == other.OrderingProviderName);
        }

        bool operator!=(const Order& other) const
        {
            return !(*this == other);
        }

        void swap(Order& other)
        {
            using std::swap;
            ::HealthCare::Schemas::BaseClinicalItem::swap( other);
            swap(OrderDate, other.OrderDate);
            swap(Results, other.Results);
            swap(ScheduledDate, other.ScheduledDate);
            swap(Priority, other.Priority);
            swap(OrderingProvider, other.OrderingProvider);
            swap(OrderType, other.OrderType);
            swap(PerformingFacility, other.PerformingFacility);
            swap(CopyTo, other.CopyTo);
            swap(OrderItemSpecificInformation, other.OrderItemSpecificInformation);
            swap(CollectionInfo, other.CollectionInfo);
            swap(PatientInstructions, other.PatientInstructions);
            swap(PerformingFacilityInstructions, other.PerformingFacilityInstructions);
            swap(OrderingProviderName, other.OrderingProviderName);
        }

        struct Schema;

    protected:
        void InitMetadata(const char* name, const char* qualified_name)
        {
            ::HealthCare::Schemas::BaseClinicalItem::InitMetadata(name, qualified_name);
        }
    };

    inline void swap(Order& left, Order& right)
    {
        left.swap(right);
    }
} // namespace Schemas
} // namespace HealthCare

