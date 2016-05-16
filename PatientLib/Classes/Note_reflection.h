
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.3.0.5
//   File : Note_reflection.h
//
// Changes to this file may cause incorrect behavior and will be lost when
// the code is regenerated.
// <auto-generated />
//------------------------------------------------------------------------------

#pragma once

#include "Note_types.h"
#include <bond/core/reflection.h>
#include "BaseClasses_reflection.h"
#include "HealthRecord_reflection.h"

namespace HealthCare
{
namespace Schemas
{
    //
    // NoteReference
    //
    struct NoteReference::Schema
    {
        typedef bond::no_base base;

        static const bond::Metadata metadata;
        
        private: static const bond::Metadata s_ReferenceType_metadata;
        private: static const bond::Metadata s_ReferenceId_metadata;

        public: struct var
        {
            // ReferenceType
            typedef bond::reflection::FieldTemplate<
                0,
                bond::reflection::optional_field_modifier,
                NoteReference,
                bond::maybe<bond::nullable< ::HealthCare::Schemas::ReferenceType> >,
                &NoteReference::ReferenceType,
                &s_ReferenceType_metadata
            > ReferenceType;
        
            // ReferenceId
            typedef bond::reflection::FieldTemplate<
                1,
                bond::reflection::optional_field_modifier,
                NoteReference,
                bond::maybe<std::string>,
                &NoteReference::ReferenceId,
                &s_ReferenceId_metadata
            > ReferenceId;
        };

        private: typedef boost::mpl::list<> fields0;
        private: typedef boost::mpl::push_front<fields0, var::ReferenceId>::type fields1;
        private: typedef boost::mpl::push_front<fields1, var::ReferenceType>::type fields2;

        public: typedef fields2::type fields;
        
        
        static bond::Metadata GetMetadata()
        {
            return bond::reflection::MetadataInit("NoteReference", "HealthCare.Schemas.NoteReference",
                bond::reflection::Attributes()
            );
        }
    };
    

    //
    // Note
    //
    struct Note::Schema
    {
        typedef ::HealthCare::Schemas::BaseItem base;

        static const bond::Metadata metadata;
        
        private: static const bond::Metadata s_NoteStatus_metadata;
        private: static const bond::Metadata s_NoteDate_metadata;
        private: static const bond::Metadata s_References_metadata;
        private: static const bond::Metadata s_HealthRecordSnapshot_metadata;
        private: static const bond::Metadata s_Comments_metadata;
        private: static const bond::Metadata s_ChiefComplaint_metadata;

        public: struct var
        {
            // NoteStatus
            typedef bond::reflection::FieldTemplate<
                0,
                bond::reflection::optional_field_modifier,
                Note,
                bond::maybe<bond::nullable< ::HealthCare::Schemas::NoteStatus> >,
                &Note::NoteStatus,
                &s_NoteStatus_metadata
            > NoteStatus;
        
            // NoteDate
            typedef bond::reflection::FieldTemplate<
                1,
                bond::reflection::optional_field_modifier,
                Note,
                bond::maybe<bond::nullable<int64_t> >,
                &Note::NoteDate,
                &s_NoteDate_metadata
            > NoteDate;
        
            // References
            typedef bond::reflection::FieldTemplate<
                2,
                bond::reflection::optional_field_modifier,
                Note,
                bond::nullable<bond::bonded< ::HealthCare::Schemas::BaseItemCollection< ::HealthCare::Schemas::NoteReference> > >,
                &Note::References,
                &s_References_metadata
            > References;
        
            // HealthRecordSnapshot
            typedef bond::reflection::FieldTemplate<
                3,
                bond::reflection::optional_field_modifier,
                Note,
                bond::maybe<bond::nullable< ::HealthCare::Schemas::HealthRecord> >,
                &Note::HealthRecordSnapshot,
                &s_HealthRecordSnapshot_metadata
            > HealthRecordSnapshot;
        
            // Comments
            typedef bond::reflection::FieldTemplate<
                4,
                bond::reflection::optional_field_modifier,
                Note,
                bond::maybe<bond::nullable<std::string> >,
                &Note::Comments,
                &s_Comments_metadata
            > Comments;
        
            // ChiefComplaint
            typedef bond::reflection::FieldTemplate<
                5,
                bond::reflection::optional_field_modifier,
                Note,
                bond::maybe<bond::nullable<std::string> >,
                &Note::ChiefComplaint,
                &s_ChiefComplaint_metadata
            > ChiefComplaint;
        };

        private: typedef boost::mpl::list<> fields0;
        private: typedef boost::mpl::push_front<fields0, var::ChiefComplaint>::type fields1;
        private: typedef boost::mpl::push_front<fields1, var::Comments>::type fields2;
        private: typedef boost::mpl::push_front<fields2, var::HealthRecordSnapshot>::type fields3;
        private: typedef boost::mpl::push_front<fields3, var::References>::type fields4;
        private: typedef boost::mpl::push_front<fields4, var::NoteDate>::type fields5;
        private: typedef boost::mpl::push_front<fields5, var::NoteStatus>::type fields6;

        public: typedef fields6::type fields;
        
        
        static bond::Metadata GetMetadata()
        {
            return bond::reflection::MetadataInit("Note", "HealthCare.Schemas.Note",
                bond::reflection::Attributes()
            );
        }
    };
    

    
} // namespace Schemas
} // namespace HealthCare