//***************************************************
// This code was generated by a tool.  Do not modify.
//***************************************************

#import <Foundation/Foundation.h>
#import "CppBondSerializer.h"
#import <Note_reflection.h>
#import <NoteReferenceDto.h>

@implementation NoteReferenceDto

- (instancetype)initWithBondObject:(void*)obj {
  if (self = [super init]) {
    ::NoteReference* castObj = (::NoteReference*)obj;
    if (!castObj->ReferenceType.is_nothing() && castObj->ReferenceType.value().hasvalue()) self.referenceType =  [[NSNumber alloc] initWithInt: castObj->ReferenceType.value().value()];
    if (!castObj->ReferenceId.is_nothing()) self.referenceId =  [[NSString alloc] initWithUTF8String: castObj->ReferenceId.value().c_str()];
  }
  return self;
}

- (instancetype) initWithJson: (NSString*)json {
  NSError* error = nil;
  NSData* jsonData = [json dataUsingEncoding:NSUTF8StringEncoding];
  id jsonDictionary = [NSJSONSerialization JSONObjectWithData:jsonData options: kNilOptions error: &error];

  if (error != nil) {
    if (error.code == 3840) return [super init]; // No Data
    return nil;
  }
  if (![jsonDictionary isKindOfClass:[NSDictionary class]]) return nil;
  return [self initWithJsonDictionary: jsonDictionary];
}

- (instancetype) initWithJsonDictionary: (NSDictionary*)dictionary {
  if (self = [super init]) {
    if ([dictionary.allKeys containsObject: @"ReferenceType" ] && [dictionary objectForKey: @"ReferenceType"] != (id)[NSNull null]) {
      self.referenceTypeStringValue = [dictionary objectForKey: @"ReferenceType"];
    }
    if ([dictionary.allKeys containsObject: @"ReferenceId" ] && [dictionary objectForKey: @"ReferenceId"] != (id)[NSNull null]) {
      self.referenceId = [dictionary objectForKey: @"ReferenceId"];
    }
  }
  return self;
}

- (instancetype)initWithByteArray: (uint8_t*)byteArray length:(uint32_t)len {
  ::NoteReference obj = CppBondSerializer<::NoteReference>::deserializeFromByteArray(byteArray, len);
  return [self initWithBondObject: &obj];
}

- (void*)toBondObject {
  ::NoteReference* obj = new NoteReference();
  if (self.referenceType != nil) obj->ReferenceType.set_value().set(static_cast<::ReferenceType>([self.referenceType intValue]));
  if (self.referenceId != nil) obj->ReferenceId.set_value() = [self.referenceId cStringUsingEncoding:NSUTF8StringEncoding];
  return obj;
}

-(const uint8_t*) toByteArray: (uint32_t*)resultLen {
  auto obj = (::NoteReference*)[self toBondObject];
  return CppBondSerializer<::NoteReference>::serializeToByteArray(*obj, resultLen);
}

@end