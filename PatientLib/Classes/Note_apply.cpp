
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.3.0.5
//   File : Note_apply.cpp
//
// Changes to this file may cause incorrect behavior and will be lost when
// the code is regenerated.
// <auto-generated />
//------------------------------------------------------------------------------

#include "Note_apply.h"
#include "Note_reflection.h"

namespace HealthCare
{
namespace Schemas
{
    
    //
    // Overloads of Apply function with common transforms for NoteReference.
    // These overloads will be selected using argument dependent lookup
    // before bond::Apply function templates.
    //
    bool Apply(const bond::To<NoteReference>& transform,
               const bond::bonded<NoteReference>& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::InitSchemaDef& transform,
               const NoteReference& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::To<NoteReference>& transform,
               const bond::bonded<NoteReference, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::To<NoteReference>& transform,
               const bond::bonded<void, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const NoteReference& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<NoteReference>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<NoteReference, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<NoteReference, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<NoteReference, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const NoteReference& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<NoteReference>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<NoteReference, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<NoteReference, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<NoteReference, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::To<NoteReference>& transform,
               const bond::bonded<NoteReference, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::To<NoteReference>& transform,
               const bond::bonded<void, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const NoteReference& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<NoteReference>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<NoteReference, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<NoteReference, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<NoteReference, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const NoteReference& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<NoteReference>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<NoteReference, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<NoteReference, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<NoteReference, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::To<NoteReference>& transform,
               const bond::bonded<NoteReference, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::To<NoteReference>& transform,
               const bond::bonded<void, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const NoteReference& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<NoteReference>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<NoteReference, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<NoteReference, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<NoteReference, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const NoteReference& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<NoteReference>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<NoteReference, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<NoteReference, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<NoteReference, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    //
    // Overloads of Apply function with common transforms for Note.
    // These overloads will be selected using argument dependent lookup
    // before bond::Apply function templates.
    //
    bool Apply(const bond::To<Note>& transform,
               const bond::bonded<Note>& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::InitSchemaDef& transform,
               const Note& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::To<Note>& transform,
               const bond::bonded<Note, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::To<Note>& transform,
               const bond::bonded<void, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const Note& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Note>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Note, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Note, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Note, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const Note& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Note>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Note, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Note, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Note, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::To<Note>& transform,
               const bond::bonded<Note, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::To<Note>& transform,
               const bond::bonded<void, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const Note& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Note>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Note, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Note, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Note, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const Note& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Note>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Note, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Note, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Note, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::To<Note>& transform,
               const bond::bonded<Note, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::To<Note>& transform,
               const bond::bonded<void, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const Note& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Note>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Note, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Note, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Note, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const Note& value)
    {
        return bond::Apply<>(transform, value);
    }

    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Note>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Note, bond::CompactBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Note, bond::FastBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Note, bond::SimpleBinaryReader<bond::InputBuffer>&>& value)
    {
        return bond::Apply<>(transform, value);
    }
    
} // namespace Schemas
} // namespace HealthCare
