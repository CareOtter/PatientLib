
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.3.0.5
//   File : Examination_types.cpp
//
// Changes to this file may cause incorrect behavior and will be lost when
// the code is regenerated.
// <auto-generated />
//------------------------------------------------------------------------------

#include "Examination_reflection.h"
#include <bond/core/exception.h>

namespace HealthCare
{
namespace Schemas
{
    
    const bond::Metadata Examination::Schema::metadata
        = Examination::Schema::GetMetadata();
    
    const bond::Metadata Examination::Schema::s_Name_metadata
        = bond::reflection::MetadataInit(bond::nothing, "Name");
    
    const bond::Metadata Examination::Schema::s_ExaminationDate_metadata
        = bond::reflection::MetadataInit(bond::nothing, "ExaminationDate");
    
    const bond::Metadata Examination::Schema::s_ExaminationType_metadata
        = bond::reflection::MetadataInit(bond::nothing, "ExaminationType");
    
    const bond::Metadata Examination::Schema::s_Observations_metadata
        = bond::reflection::MetadataInit("Observations");

    
} // namespace Schemas
} // namespace HealthCare
