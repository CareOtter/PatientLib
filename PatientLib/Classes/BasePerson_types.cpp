
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.3.0.5
//   File : BasePerson_types.cpp
//
// Changes to this file may cause incorrect behavior and will be lost when
// the code is regenerated.
// <auto-generated />
//------------------------------------------------------------------------------

#include "BasePerson_reflection.h"
#include <bond/core/exception.h>

namespace HealthCare
{
namespace Schemas
{
    
    namespace _bond_enumerators
    {
    namespace RaceFlag
    {
        const
        std::map<std::string, enum RaceFlag> _name_to_value_RaceFlag =
            boost::assign::map_list_of<std::string, enum RaceFlag>
                ("_Blank", _Blank)
                ("AmericanIndianOrAlaskaNative", AmericanIndianOrAlaskaNative)
                ("Asian", Asian)
                ("Black", Black)
                ("Hispanic", Hispanic)
                ("PacificIslander", PacificIslander)
                ("Unknown", Unknown)
                ("Unspecified", Unspecified)
                ("White", White);

        const
        std::map<enum RaceFlag, std::string> _value_to_name_RaceFlag =
            bond::reverse_map(_name_to_value_RaceFlag);

        const std::string& ToString(enum RaceFlag value)
        {
            std::map<enum RaceFlag, std::string>::const_iterator it =
                GetValueToNameMap(value).find(value);

            if (GetValueToNameMap(value).end() == it)
                bond::InvalidEnumValueException(value, "RaceFlag");

            return it->second;
        }

        void FromString(const std::string& name, enum RaceFlag& value)
        {
            std::map<std::string, enum RaceFlag>::const_iterator it =
                _name_to_value_RaceFlag.find(name);

            if (_name_to_value_RaceFlag.end() == it)
                bond::InvalidEnumValueException(name.c_str(), "RaceFlag");

            value = it->second;
        }

    } // namespace RaceFlag
    } // namespace _bond_enumerators

    
    namespace _bond_enumerators
    {
    namespace EthnicityFlag
    {
        const
        std::map<std::string, enum EthnicityFlag> _name_to_value_EthnicityFlag =
            boost::assign::map_list_of<std::string, enum EthnicityFlag>
                ("_Blank", _Blank)
                ("Hispanic", Hispanic)
                ("NonHispanic", NonHispanic)
                ("Unknown", Unknown)
                ("Unspecified", Unspecified);

        const
        std::map<enum EthnicityFlag, std::string> _value_to_name_EthnicityFlag =
            bond::reverse_map(_name_to_value_EthnicityFlag);

        const std::string& ToString(enum EthnicityFlag value)
        {
            std::map<enum EthnicityFlag, std::string>::const_iterator it =
                GetValueToNameMap(value).find(value);

            if (GetValueToNameMap(value).end() == it)
                bond::InvalidEnumValueException(value, "EthnicityFlag");

            return it->second;
        }

        void FromString(const std::string& name, enum EthnicityFlag& value)
        {
            std::map<std::string, enum EthnicityFlag>::const_iterator it =
                _name_to_value_EthnicityFlag.find(name);

            if (_name_to_value_EthnicityFlag.end() == it)
                bond::InvalidEnumValueException(name.c_str(), "EthnicityFlag");

            value = it->second;
        }

    } // namespace EthnicityFlag
    } // namespace _bond_enumerators

    
    namespace _bond_enumerators
    {
    namespace Gender
    {
        const
        std::map<std::string, enum Gender> _name_to_value_Gender =
            boost::assign::map_list_of<std::string, enum Gender>
                ("Unspecified", Unspecified)
                ("Male", Male)
                ("Female", Female);

        const
        std::map<enum Gender, std::string> _value_to_name_Gender =
            bond::reverse_map(_name_to_value_Gender);

        const std::string& ToString(enum Gender value)
        {
            std::map<enum Gender, std::string>::const_iterator it =
                GetValueToNameMap(value).find(value);

            if (GetValueToNameMap(value).end() == it)
                bond::InvalidEnumValueException(value, "Gender");

            return it->second;
        }

        void FromString(const std::string& name, enum Gender& value)
        {
            std::map<std::string, enum Gender>::const_iterator it =
                _name_to_value_Gender.find(name);

            if (_name_to_value_Gender.end() == it)
                bond::InvalidEnumValueException(name.c_str(), "Gender");

            value = it->second;
        }

    } // namespace Gender
    } // namespace _bond_enumerators

    
    namespace _bond_enumerators
    {
    namespace TelephoneNumberKind
    {
        const
        std::map<std::string, enum TelephoneNumberKind> _name_to_value_TelephoneNumberKind =
            boost::assign::map_list_of<std::string, enum TelephoneNumberKind>
                ("NANP", NANP);

        const
        std::map<enum TelephoneNumberKind, std::string> _value_to_name_TelephoneNumberKind =
            bond::reverse_map(_name_to_value_TelephoneNumberKind);

        const std::string& ToString(enum TelephoneNumberKind value)
        {
            std::map<enum TelephoneNumberKind, std::string>::const_iterator it =
                GetValueToNameMap(value).find(value);

            if (GetValueToNameMap(value).end() == it)
                bond::InvalidEnumValueException(value, "TelephoneNumberKind");

            return it->second;
        }

        void FromString(const std::string& name, enum TelephoneNumberKind& value)
        {
            std::map<std::string, enum TelephoneNumberKind>::const_iterator it =
                _name_to_value_TelephoneNumberKind.find(name);

            if (_name_to_value_TelephoneNumberKind.end() == it)
                bond::InvalidEnumValueException(name.c_str(), "TelephoneNumberKind");

            value = it->second;
        }

    } // namespace TelephoneNumberKind
    } // namespace _bond_enumerators

    
    const bond::Metadata PersonName::Schema::metadata
        = PersonName::Schema::GetMetadata();
    
    const bond::Metadata PersonName::Schema::s_FirstName_metadata
        = bond::reflection::MetadataInit(bond::nothing, "FirstName");
    
    const bond::Metadata PersonName::Schema::s_LastName_metadata
        = bond::reflection::MetadataInit(bond::nothing, "LastName");
    
    const bond::Metadata PersonName::Schema::s_MiddleName_metadata
        = bond::reflection::MetadataInit(bond::nothing, "MiddleName");
    
    const bond::Metadata PersonName::Schema::s_Suffix_metadata
        = bond::reflection::MetadataInit(bond::nothing, "Suffix");
    
    const bond::Metadata PersonName::Schema::s_Credentials_metadata
        = bond::reflection::MetadataInit(bond::nothing, "Credentials");
    
    const bond::Metadata PersonName::Schema::s_Salutation_metadata
        = bond::reflection::MetadataInit(bond::nothing, "Salutation");
    
    const bond::Metadata PersonName::Schema::s_Nickname_metadata
        = bond::reflection::MetadataInit(bond::nothing, "Nickname");

    
    const bond::Metadata Address::Schema::metadata
        = Address::Schema::GetMetadata();
    
    const bond::Metadata Address::Schema::s_Line1_metadata
        = bond::reflection::MetadataInit(bond::nothing, "Line1");
    
    const bond::Metadata Address::Schema::s_Line2_metadata
        = bond::reflection::MetadataInit(bond::nothing, "Line2");
    
    const bond::Metadata Address::Schema::s_Line3_metadata
        = bond::reflection::MetadataInit(bond::nothing, "Line3");
    
    const bond::Metadata Address::Schema::s_City_metadata
        = bond::reflection::MetadataInit(bond::nothing, "City");
    
    const bond::Metadata Address::Schema::s_State_metadata
        = bond::reflection::MetadataInit(bond::nothing, "State");
    
    const bond::Metadata Address::Schema::s_ZipCode_metadata
        = bond::reflection::MetadataInit(bond::nothing, "ZipCode");
    
    const bond::Metadata Address::Schema::s_Country_metadata
        = bond::reflection::MetadataInit(bond::nothing, "Country");

    
    const bond::Metadata TelephoneNumber::Schema::metadata
        = TelephoneNumber::Schema::GetMetadata();
    
    const bond::Metadata TelephoneNumber::Schema::s_CountryCode_metadata
        = bond::reflection::MetadataInit(bond::nothing, "CountryCode");
    
    const bond::Metadata TelephoneNumber::Schema::s_Number_metadata
        = bond::reflection::MetadataInit(bond::nothing, "Number");
    
    const bond::Metadata TelephoneNumber::Schema::s_Ext_metadata
        = bond::reflection::MetadataInit(bond::nothing, "Ext");
    
    const bond::Metadata TelephoneNumber::Schema::s_Kind_metadata
        = bond::reflection::MetadataInit(bond::nothing, "Kind");

    
    const bond::Metadata PersonContactInformation::Schema::metadata
        = PersonContactInformation::Schema::GetMetadata();
    
    const bond::Metadata PersonContactInformation::Schema::s_MailingAddress_metadata
        = bond::reflection::MetadataInit(bond::nothing, "MailingAddress");
    
    const bond::Metadata PersonContactInformation::Schema::s_HomeTelephoneNumber_metadata
        = bond::reflection::MetadataInit(bond::nothing, "HomeTelephoneNumber");
    
    const bond::Metadata PersonContactInformation::Schema::s_CellularTelephoneNumber_metadata
        = bond::reflection::MetadataInit(bond::nothing, "CellularTelephoneNumber");
    
    const bond::Metadata PersonContactInformation::Schema::s_WorkTelephoneNumber_metadata
        = bond::reflection::MetadataInit(bond::nothing, "WorkTelephoneNumber");
    
    const bond::Metadata PersonContactInformation::Schema::s_EmailAddress_metadata
        = bond::reflection::MetadataInit(bond::nothing, "EmailAddress");
    
    const bond::Metadata PersonContactInformation::Schema::s_FaxTelephoneNumber_metadata
        = bond::reflection::MetadataInit(bond::nothing, "FaxTelephoneNumber");

    
    const bond::Metadata Demographics::Schema::metadata
        = Demographics::Schema::GetMetadata();
    
    const bond::Metadata Demographics::Schema::s_Gender_metadata
        = bond::reflection::MetadataInit(bond::nothing, "Gender");
    
    const bond::Metadata Demographics::Schema::s_Language_metadata
        = bond::reflection::MetadataInit(bond::nothing, "Language");
    
    const bond::Metadata Demographics::Schema::s_ContactInformation_metadata
        = bond::reflection::MetadataInit(bond::nothing, "ContactInformation");
    
    const bond::Metadata Demographics::Schema::s_Ethnicity_metadata
        = bond::reflection::MetadataInit(bond::nothing, "Ethnicity");
    
    const bond::Metadata Demographics::Schema::s_Race_metadata
        = bond::reflection::MetadataInit(bond::nothing, "Race");

    
    const bond::Metadata BasePerson::Schema::metadata
        = BasePerson::Schema::GetMetadata();
    
    const bond::Metadata BasePerson::Schema::s_Name_metadata
        = bond::reflection::MetadataInit(bond::nothing, "Name");
    
    const bond::Metadata BasePerson::Schema::s_Demographics_metadata
        = bond::reflection::MetadataInit("Demographics");
    
    const bond::Metadata BasePerson::Schema::s_DateOfBirth_metadata
        = bond::reflection::MetadataInit(bond::nothing, "DateOfBirth");
    
    const bond::Metadata BasePerson::Schema::s_DateOfDeath_metadata
        = bond::reflection::MetadataInit(bond::nothing, "DateOfDeath");
    
    const bond::Metadata BasePerson::Schema::s_ImageResources_metadata
        = bond::reflection::MetadataInit("ImageResources");

    
} // namespace Schemas
} // namespace HealthCare