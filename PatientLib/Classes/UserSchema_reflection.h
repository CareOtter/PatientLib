
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.3.0.5
//   File : UserSchema_reflection.h
//
// Changes to this file may cause incorrect behavior and will be lost when
// the code is regenerated.
// <auto-generated />
//------------------------------------------------------------------------------

#pragma once

#include "UserSchema_types.h"
#include <bond/core/reflection.h>
#include "BaseClasses_reflection.h"
#include "BasePerson_reflection.h"

namespace HealthCare
{
namespace Schemas
{
    //
    // Preference
    //
    struct Preference::Schema
    {
        typedef ::HealthCare::Schemas::BaseItem base;

        static const bond::Metadata metadata;
        
        private: static const bond::Metadata s_Key_metadata;
        private: static const bond::Metadata s_Value_metadata;

        public: struct var
        {
            // Key
            typedef bond::reflection::FieldTemplate<
                0,
                bond::reflection::optional_field_modifier,
                Preference,
                bond::maybe<bond::nullable<std::string> >,
                &Preference::Key,
                &s_Key_metadata
            > Key;
        
            // Value
            typedef bond::reflection::FieldTemplate<
                1,
                bond::reflection::optional_field_modifier,
                Preference,
                bond::maybe<bond::nullable<std::string> >,
                &Preference::Value,
                &s_Value_metadata
            > Value;
        };

        private: typedef boost::mpl::list<> fields0;
        private: typedef boost::mpl::push_front<fields0, var::Value>::type fields1;
        private: typedef boost::mpl::push_front<fields1, var::Key>::type fields2;

        public: typedef fields2::type fields;
        
        
        static bond::Metadata GetMetadata()
        {
            return bond::reflection::MetadataInit("Preference", "HealthCare.Schemas.Preference",
                bond::reflection::Attributes()
            );
        }
    };
    

    //
    // Feedback
    //
    struct Feedback::Schema
    {
        typedef ::HealthCare::Schemas::BaseItem base;

        static const bond::Metadata metadata;
        
        private: static const bond::Metadata s_Type_metadata;
        private: static const bond::Metadata s_Text_metadata;
        private: static const bond::Metadata s_PageName_metadata;
        private: static const bond::Metadata s_IsPageInfoIncluded_metadata;
        private: static const bond::Metadata s_IsUserInfoIncluded_metadata;
        private: static const bond::Metadata s_Status_metadata;

        public: struct var
        {
            // Type
            typedef bond::reflection::FieldTemplate<
                0,
                bond::reflection::optional_field_modifier,
                Feedback,
                bond::maybe<bond::nullable< ::HealthCare::Schemas::FeedbackType> >,
                &Feedback::Type,
                &s_Type_metadata
            > Type;
        
            // Text
            typedef bond::reflection::FieldTemplate<
                1,
                bond::reflection::optional_field_modifier,
                Feedback,
                bond::maybe<bond::nullable<std::string> >,
                &Feedback::Text,
                &s_Text_metadata
            > Text;
        
            // PageName
            typedef bond::reflection::FieldTemplate<
                2,
                bond::reflection::optional_field_modifier,
                Feedback,
                bond::maybe<bond::nullable<std::string> >,
                &Feedback::PageName,
                &s_PageName_metadata
            > PageName;
        
            // IsPageInfoIncluded
            typedef bond::reflection::FieldTemplate<
                3,
                bond::reflection::optional_field_modifier,
                Feedback,
                bond::maybe<bond::nullable<bool> >,
                &Feedback::IsPageInfoIncluded,
                &s_IsPageInfoIncluded_metadata
            > IsPageInfoIncluded;
        
            // IsUserInfoIncluded
            typedef bond::reflection::FieldTemplate<
                4,
                bond::reflection::optional_field_modifier,
                Feedback,
                bond::maybe<bond::nullable<bool> >,
                &Feedback::IsUserInfoIncluded,
                &s_IsUserInfoIncluded_metadata
            > IsUserInfoIncluded;
        
            // Status
            typedef bond::reflection::FieldTemplate<
                5,
                bond::reflection::optional_field_modifier,
                Feedback,
                bond::maybe<bond::nullable< ::HealthCare::Schemas::FeedbackStatus> >,
                &Feedback::Status,
                &s_Status_metadata
            > Status;
        };

        private: typedef boost::mpl::list<> fields0;
        private: typedef boost::mpl::push_front<fields0, var::Status>::type fields1;
        private: typedef boost::mpl::push_front<fields1, var::IsUserInfoIncluded>::type fields2;
        private: typedef boost::mpl::push_front<fields2, var::IsPageInfoIncluded>::type fields3;
        private: typedef boost::mpl::push_front<fields3, var::PageName>::type fields4;
        private: typedef boost::mpl::push_front<fields4, var::Text>::type fields5;
        private: typedef boost::mpl::push_front<fields5, var::Type>::type fields6;

        public: typedef fields6::type fields;
        
        
        static bond::Metadata GetMetadata()
        {
            return bond::reflection::MetadataInit("Feedback", "HealthCare.Schemas.Feedback",
                bond::reflection::Attributes()
            );
        }
    };
    

    //
    // User
    //
    struct User::Schema
    {
        typedef ::HealthCare::Schemas::BasePerson base;

        static const bond::Metadata metadata;
        
        private: static const bond::Metadata s_Preferences_metadata;
        private: static const bond::Metadata s_Feedback_metadata;
        private: static const bond::Metadata s_UserType_metadata;

        public: struct var
        {
            // Preferences
            typedef bond::reflection::FieldTemplate<
                0,
                bond::reflection::optional_field_modifier,
                User,
                bond::nullable<bond::bonded< ::HealthCare::Schemas::BaseItemCollection< ::HealthCare::Schemas::Preference> > >,
                &User::Preferences,
                &s_Preferences_metadata
            > Preferences;
        
            // Feedback
            typedef bond::reflection::FieldTemplate<
                1,
                bond::reflection::optional_field_modifier,
                User,
                bond::nullable<bond::bonded< ::HealthCare::Schemas::BaseItemCollection< ::HealthCare::Schemas::Feedback> > >,
                &User::Feedback,
                &s_Feedback_metadata
            > Feedback;
        
            // UserType
            typedef bond::reflection::FieldTemplate<
                2,
                bond::reflection::optional_field_modifier,
                User,
                bond::maybe<bond::nullable< ::HealthCare::Schemas::UserType> >,
                &User::UserType,
                &s_UserType_metadata
            > UserType;
        };

        private: typedef boost::mpl::list<> fields0;
        private: typedef boost::mpl::push_front<fields0, var::UserType>::type fields1;
        private: typedef boost::mpl::push_front<fields1, var::Feedback>::type fields2;
        private: typedef boost::mpl::push_front<fields2, var::Preferences>::type fields3;

        public: typedef fields3::type fields;
        
        
        static bond::Metadata GetMetadata()
        {
            return bond::reflection::MetadataInit("User", "HealthCare.Schemas.User",
                bond::reflection::Attributes()
            );
        }
    };
    

    
} // namespace Schemas
} // namespace HealthCare
