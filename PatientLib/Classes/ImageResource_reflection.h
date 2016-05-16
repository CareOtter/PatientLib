
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.3.0.5
//   File : ImageResource_reflection.h
//
// Changes to this file may cause incorrect behavior and will be lost when
// the code is regenerated.
// <auto-generated />
//------------------------------------------------------------------------------

#pragma once

#include "ImageResource_types.h"
#include <bond/core/reflection.h>
#include "BaseClasses_reflection.h"

namespace HealthCare
{
namespace Schemas
{
    //
    // ImageResource
    //
    struct ImageResource::Schema
    {
        typedef ::HealthCare::Schemas::BaseItem base;

        static const bond::Metadata metadata;
        
        private: static const bond::Metadata s_ResourceType_metadata;
        private: static const bond::Metadata s_ResourceExtension_metadata;
        private: static const bond::Metadata s_ResourceId_metadata;

        public: struct var
        {
            // ResourceType
            typedef bond::reflection::FieldTemplate<
                0,
                bond::reflection::optional_field_modifier,
                ImageResource,
                bond::maybe<bond::nullable<std::string> >,
                &ImageResource::ResourceType,
                &s_ResourceType_metadata
            > ResourceType;
        
            // ResourceExtension
            typedef bond::reflection::FieldTemplate<
                1,
                bond::reflection::optional_field_modifier,
                ImageResource,
                bond::maybe<bond::nullable<std::string> >,
                &ImageResource::ResourceExtension,
                &s_ResourceExtension_metadata
            > ResourceExtension;
        
            // ResourceId
            typedef bond::reflection::FieldTemplate<
                2,
                bond::reflection::optional_field_modifier,
                ImageResource,
                bond::maybe<bond::nullable<std::string> >,
                &ImageResource::ResourceId,
                &s_ResourceId_metadata
            > ResourceId;
        };

        private: typedef boost::mpl::list<> fields0;
        private: typedef boost::mpl::push_front<fields0, var::ResourceId>::type fields1;
        private: typedef boost::mpl::push_front<fields1, var::ResourceExtension>::type fields2;
        private: typedef boost::mpl::push_front<fields2, var::ResourceType>::type fields3;

        public: typedef fields3::type fields;
        
        
        static bond::Metadata GetMetadata()
        {
            return bond::reflection::MetadataInit("ImageResource", "HealthCare.Schemas.ImageResource",
                bond::reflection::Attributes()
            );
        }
    };
    

    
} // namespace Schemas
} // namespace HealthCare