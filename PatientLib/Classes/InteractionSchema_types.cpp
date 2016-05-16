
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.3.0.5
//   File : InteractionSchema_types.cpp
//
// Changes to this file may cause incorrect behavior and will be lost when
// the code is regenerated.
// <auto-generated />
//------------------------------------------------------------------------------

#include "InteractionSchema_reflection.h"
#include <bond/core/exception.h>

namespace HealthCare
{
namespace Schemas
{
    
    namespace _bond_enumerators
    {
    namespace ItemType
    {
        const
        std::map<std::string, enum ItemType> _name_to_value_ItemType =
            boost::assign::map_list_of<std::string, enum ItemType>
                ("Unknown", Unknown)
                ("Patient", Patient)
                ("Facility", Facility)
                ("User", User)
                ("UserAuthData", UserAuthData)
                ("Provider", Provider)
                ("Appointment", Appointment)
                ("Dynamic", Dynamic);

        const
        std::map<enum ItemType, std::string> _value_to_name_ItemType =
            bond::reverse_map(_name_to_value_ItemType);

        const std::string& ToString(enum ItemType value)
        {
            std::map<enum ItemType, std::string>::const_iterator it =
                GetValueToNameMap(value).find(value);

            if (GetValueToNameMap(value).end() == it)
                bond::InvalidEnumValueException(value, "ItemType");

            return it->second;
        }

        void FromString(const std::string& name, enum ItemType& value)
        {
            std::map<std::string, enum ItemType>::const_iterator it =
                _name_to_value_ItemType.find(name);

            if (_name_to_value_ItemType.end() == it)
                bond::InvalidEnumValueException(name.c_str(), "ItemType");

            value = it->second;
        }

    } // namespace ItemType
    } // namespace _bond_enumerators

    
    const bond::Metadata CodeValue::Schema::metadata
        = CodeValue::Schema::GetMetadata();
    
    const bond::Metadata CodeValue::Schema::s_Code_metadata
        = bond::reflection::MetadataInit(bond::nothing, "Code");

    
    const bond::Metadata InteractionVerbCodeValue::Schema::metadata
        = InteractionVerbCodeValue::Schema::GetMetadata();
    
    const bond::Metadata InteractionVerbCodeValue::Schema::s_Verb_metadata
        = bond::reflection::MetadataInit(bond::nothing, "Verb");
    
    const bond::Metadata InteractionVerbCodeValue::Schema::s_Alternate_metadata
        = bond::reflection::MetadataInit(bond::nothing, "Alternate");

    
    const bond::Metadata RelationshipTypeCodeValue::Schema::metadata
        = RelationshipTypeCodeValue::Schema::GetMetadata();
    
    const bond::Metadata RelationshipTypeCodeValue::Schema::s_Name_metadata
        = bond::reflection::MetadataInit(bond::nothing, "Name");

    
    const bond::Metadata InteractionTypeCodeValue::Schema::metadata
        = InteractionTypeCodeValue::Schema::GetMetadata();
    
    const bond::Metadata InteractionTypeCodeValue::Schema::s_InteractionVerb_metadata
        = bond::reflection::MetadataInit(bond::nothing, "InteractionVerb");
    
    const bond::Metadata InteractionTypeCodeValue::Schema::s_RelationshipType_metadata
        = bond::reflection::MetadataInit(bond::nothing, "RelationshipType");
    
    const bond::Metadata InteractionTypeCodeValue::Schema::s_AppliesToStartNodeType_metadata
        = bond::reflection::MetadataInit(bond::nothing, "AppliesToStartNodeType");
    
    const bond::Metadata InteractionTypeCodeValue::Schema::s_AppliesToEndNodeType_metadata
        = bond::reflection::MetadataInit(bond::nothing, "AppliesToEndNodeType");
    
    const bond::Metadata InteractionTypeCodeValue::Schema::s_IsRelationshipEstablisher_metadata
        = bond::reflection::MetadataInit(bond::nothing, "IsRelationshipEstablisher");

    
    const bond::Metadata Interaction::Schema::metadata
        = Interaction::Schema::GetMetadata();
    
    const bond::Metadata Interaction::Schema::s_StartNode_metadata
        = bond::reflection::MetadataInit(bond::nothing, "StartNode");
    
    const bond::Metadata Interaction::Schema::s_EndNode_metadata
        = bond::reflection::MetadataInit(bond::nothing, "EndNode");
    
    const bond::Metadata Interaction::Schema::s_Type_metadata
        = bond::reflection::MetadataInit(bond::nothing, "Type");

    
} // namespace Schemas
} // namespace HealthCare
