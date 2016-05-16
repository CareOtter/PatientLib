
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.3.0.5
//   File : Examination_reflection.h
//
// Changes to this file may cause incorrect behavior and will be lost when
// the code is regenerated.
// <auto-generated />
//------------------------------------------------------------------------------

#pragma once

#include "Examination_types.h"
#include <bond/core/reflection.h>
#include "BaseClasses_reflection.h"
#include "Observation_reflection.h"

namespace HealthCare
{
namespace Schemas
{
    //
    // Examination
    //
    struct Examination::Schema
    {
        typedef ::HealthCare::Schemas::BaseItem base;

        static const bond::Metadata metadata;
        
        private: static const bond::Metadata s_Name_metadata;
        private: static const bond::Metadata s_ExaminationDate_metadata;
        private: static const bond::Metadata s_ExaminationType_metadata;
        private: static const bond::Metadata s_Observations_metadata;

        public: struct var
        {
            // Name
            typedef bond::reflection::FieldTemplate<
                0,
                bond::reflection::optional_field_modifier,
                Examination,
                bond::maybe<bond::nullable<std::string> >,
                &Examination::Name,
                &s_Name_metadata
            > Name;
        
            // ExaminationDate
            typedef bond::reflection::FieldTemplate<
                1,
                bond::reflection::optional_field_modifier,
                Examination,
                bond::maybe<bond::nullable<int64_t> >,
                &Examination::ExaminationDate,
                &s_ExaminationDate_metadata
            > ExaminationDate;
        
            // ExaminationType
            typedef bond::reflection::FieldTemplate<
                2,
                bond::reflection::optional_field_modifier,
                Examination,
                bond::maybe<bond::nullable<std::string> >,
                &Examination::ExaminationType,
                &s_ExaminationType_metadata
            > ExaminationType;
        
            // Observations
            typedef bond::reflection::FieldTemplate<
                3,
                bond::reflection::optional_field_modifier,
                Examination,
                bond::nullable<bond::bonded< ::HealthCare::Schemas::BaseItemCollection< ::HealthCare::Schemas::Observation> > >,
                &Examination::Observations,
                &s_Observations_metadata
            > Observations;
        };

        private: typedef boost::mpl::list<> fields0;
        private: typedef boost::mpl::push_front<fields0, var::Observations>::type fields1;
        private: typedef boost::mpl::push_front<fields1, var::ExaminationType>::type fields2;
        private: typedef boost::mpl::push_front<fields2, var::ExaminationDate>::type fields3;
        private: typedef boost::mpl::push_front<fields3, var::Name>::type fields4;

        public: typedef fields4::type fields;
        
        
        static bond::Metadata GetMetadata()
        {
            return bond::reflection::MetadataInit("Examination", "HealthCare.Schemas.Examination",
                bond::reflection::Attributes()
            );
        }
    };
    

    
} // namespace Schemas
} // namespace HealthCare