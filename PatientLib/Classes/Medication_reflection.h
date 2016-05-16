
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.3.0.5
//   File : Medication_reflection.h
//
// Changes to this file may cause incorrect behavior and will be lost when
// the code is regenerated.
// <auto-generated />
//------------------------------------------------------------------------------

#pragma once

#include "Medication_types.h"
#include <bond/core/reflection.h>
#include "BaseClasses_reflection.h"
#include "Prescription_reflection.h"

namespace HealthCare
{
namespace Schemas
{
    //
    // Medication
    //
    struct Medication::Schema
    {
        typedef ::HealthCare::Schemas::BaseClinicalItem base;

        static const bond::Metadata metadata;
        
        private: static const bond::Metadata s_OrderId_metadata;
        private: static const bond::Metadata s_CommonName_metadata;
        private: static const bond::Metadata s_MedicalName_metadata;
        private: static const bond::Metadata s_Dose_metadata;
        private: static const bond::Metadata s_Units_metadata;
        private: static const bond::Metadata s_Strength_metadata;
        private: static const bond::Metadata s_Form_metadata;
        private: static const bond::Metadata s_Administered_metadata;
        private: static const bond::Metadata s_AdministrationStopped_metadata;
        private: static const bond::Metadata s_SignatureLine1_metadata;
        private: static const bond::Metadata s_SignatureLine2_metadata;
        private: static const bond::Metadata s_Site_metadata;
        private: static const bond::Metadata s_Route_metadata;
        private: static const bond::Metadata s_NDCNumber_metadata;
        private: static const bond::Metadata s_Prescription_metadata;
        private: static const bond::Metadata s_Frequency_metadata;
        private: static const bond::Metadata s_Duration_metadata;
        private: static const bond::Metadata s_Provider_metadata;
        private: static const bond::Metadata s_ProviderName_metadata;

        public: struct var
        {
            // OrderId
            typedef bond::reflection::FieldTemplate<
                0,
                bond::reflection::optional_field_modifier,
                Medication,
                bond::maybe<std::string>,
                &Medication::OrderId,
                &s_OrderId_metadata
            > OrderId;
        
            // CommonName
            typedef bond::reflection::FieldTemplate<
                1,
                bond::reflection::optional_field_modifier,
                Medication,
                bond::maybe<bond::nullable<std::string> >,
                &Medication::CommonName,
                &s_CommonName_metadata
            > CommonName;
        
            // MedicalName
            typedef bond::reflection::FieldTemplate<
                2,
                bond::reflection::optional_field_modifier,
                Medication,
                bond::maybe<bond::nullable<std::string> >,
                &Medication::MedicalName,
                &s_MedicalName_metadata
            > MedicalName;
        
            // Dose
            typedef bond::reflection::FieldTemplate<
                3,
                bond::reflection::optional_field_modifier,
                Medication,
                bond::maybe<bond::nullable<std::string> >,
                &Medication::Dose,
                &s_Dose_metadata
            > Dose;
        
            // Units
            typedef bond::reflection::FieldTemplate<
                4,
                bond::reflection::optional_field_modifier,
                Medication,
                bond::maybe<bond::nullable<std::string> >,
                &Medication::Units,
                &s_Units_metadata
            > Units;
        
            // Strength
            typedef bond::reflection::FieldTemplate<
                5,
                bond::reflection::optional_field_modifier,
                Medication,
                bond::maybe<bond::nullable<std::string> >,
                &Medication::Strength,
                &s_Strength_metadata
            > Strength;
        
            // Form
            typedef bond::reflection::FieldTemplate<
                6,
                bond::reflection::optional_field_modifier,
                Medication,
                bond::maybe<bond::nullable<std::string> >,
                &Medication::Form,
                &s_Form_metadata
            > Form;
        
            // Administered
            typedef bond::reflection::FieldTemplate<
                7,
                bond::reflection::optional_field_modifier,
                Medication,
                bond::maybe<bond::nullable<int64_t> >,
                &Medication::Administered,
                &s_Administered_metadata
            > Administered;
        
            // AdministrationStopped
            typedef bond::reflection::FieldTemplate<
                8,
                bond::reflection::optional_field_modifier,
                Medication,
                bond::maybe<bond::nullable<int64_t> >,
                &Medication::AdministrationStopped,
                &s_AdministrationStopped_metadata
            > AdministrationStopped;
        
            // SignatureLine1
            typedef bond::reflection::FieldTemplate<
                9,
                bond::reflection::optional_field_modifier,
                Medication,
                bond::maybe<bond::nullable<std::string> >,
                &Medication::SignatureLine1,
                &s_SignatureLine1_metadata
            > SignatureLine1;
        
            // SignatureLine2
            typedef bond::reflection::FieldTemplate<
                10,
                bond::reflection::optional_field_modifier,
                Medication,
                bond::maybe<bond::nullable<std::string> >,
                &Medication::SignatureLine2,
                &s_SignatureLine2_metadata
            > SignatureLine2;
        
            // Site
            typedef bond::reflection::FieldTemplate<
                11,
                bond::reflection::optional_field_modifier,
                Medication,
                bond::maybe<bond::nullable<std::string> >,
                &Medication::Site,
                &s_Site_metadata
            > Site;
        
            // Route
            typedef bond::reflection::FieldTemplate<
                12,
                bond::reflection::optional_field_modifier,
                Medication,
                bond::maybe<bond::nullable<std::string> >,
                &Medication::Route,
                &s_Route_metadata
            > Route;
        
            // NDCNumber
            typedef bond::reflection::FieldTemplate<
                13,
                bond::reflection::optional_field_modifier,
                Medication,
                bond::maybe<bond::nullable<std::string> >,
                &Medication::NDCNumber,
                &s_NDCNumber_metadata
            > NDCNumber;
        
            // Prescription
            typedef bond::reflection::FieldTemplate<
                14,
                bond::reflection::optional_field_modifier,
                Medication,
                bond::maybe<bond::nullable< ::HealthCare::Schemas::Prescription> >,
                &Medication::Prescription,
                &s_Prescription_metadata
            > Prescription;
        
            // Frequency
            typedef bond::reflection::FieldTemplate<
                15,
                bond::reflection::optional_field_modifier,
                Medication,
                bond::maybe<bond::nullable<std::string> >,
                &Medication::Frequency,
                &s_Frequency_metadata
            > Frequency;
        
            // Duration
            typedef bond::reflection::FieldTemplate<
                16,
                bond::reflection::optional_field_modifier,
                Medication,
                bond::maybe<bond::nullable<std::string> >,
                &Medication::Duration,
                &s_Duration_metadata
            > Duration;
        
            // Provider
            typedef bond::reflection::FieldTemplate<
                17,
                bond::reflection::optional_field_modifier,
                Medication,
                bond::maybe<bond::nullable<int64_t> >,
                &Medication::Provider,
                &s_Provider_metadata
            > Provider;
        
            // ProviderName
            typedef bond::reflection::FieldTemplate<
                18,
                bond::reflection::optional_field_modifier,
                Medication,
                bond::maybe<bond::nullable<std::string> >,
                &Medication::ProviderName,
                &s_ProviderName_metadata
            > ProviderName;
        };

        private: typedef boost::mpl::list<> fields0;
        private: typedef boost::mpl::push_front<fields0, var::ProviderName>::type fields1;
        private: typedef boost::mpl::push_front<fields1, var::Provider>::type fields2;
        private: typedef boost::mpl::push_front<fields2, var::Duration>::type fields3;
        private: typedef boost::mpl::push_front<fields3, var::Frequency>::type fields4;
        private: typedef boost::mpl::push_front<fields4, var::Prescription>::type fields5;
        private: typedef boost::mpl::push_front<fields5, var::NDCNumber>::type fields6;
        private: typedef boost::mpl::push_front<fields6, var::Route>::type fields7;
        private: typedef boost::mpl::push_front<fields7, var::Site>::type fields8;
        private: typedef boost::mpl::push_front<fields8, var::SignatureLine2>::type fields9;
        private: typedef boost::mpl::push_front<fields9, var::SignatureLine1>::type fields10;
        private: typedef boost::mpl::push_front<fields10, var::AdministrationStopped>::type fields11;
        private: typedef boost::mpl::push_front<fields11, var::Administered>::type fields12;
        private: typedef boost::mpl::push_front<fields12, var::Form>::type fields13;
        private: typedef boost::mpl::push_front<fields13, var::Strength>::type fields14;
        private: typedef boost::mpl::push_front<fields14, var::Units>::type fields15;
        private: typedef boost::mpl::push_front<fields15, var::Dose>::type fields16;
        private: typedef boost::mpl::push_front<fields16, var::MedicalName>::type fields17;
        private: typedef boost::mpl::push_front<fields17, var::CommonName>::type fields18;
        private: typedef boost::mpl::push_front<fields18, var::OrderId>::type fields19;

        public: typedef fields19::type fields;
        
        
        static bond::Metadata GetMetadata()
        {
            return bond::reflection::MetadataInit("Medication", "HealthCare.Schemas.Medication",
                bond::reflection::Attributes()
            );
        }
    };
    

    
} // namespace Schemas
} // namespace HealthCare
