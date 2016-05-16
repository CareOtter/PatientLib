//***************************************************
// This code was generated by a tool.  Do not modify.
//***************************************************

#import <Foundation/Foundation.h>
#import "CppBondSerializer.h"
#import <BaseClasses_reflection.h>
#import <BaseEntityDto.h>

@implementation BaseEntityDto

- (instancetype)initWithBondObject:(void*)obj {
  if (self = [super init]) {
    ::BaseEntity* castObj = (::BaseEntity*)obj;
    self.id = [[NSNumber alloc] initWithLongLong: castObj->Id];
    if (!castObj->CreatedDate.is_nothing()) self.createdDate =  [[NSDate alloc] initWithTimeIntervalSince1970: castObj->CreatedDate.value()];
    if (!castObj->LastModifiedDate.is_nothing()) self.lastModifiedDate =  [[NSDate alloc] initWithTimeIntervalSince1970: castObj->LastModifiedDate.value()];
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
    if ([dictionary.allKeys containsObject: @"Id" ] && [dictionary objectForKey: @"Id"] != (id)[NSNull null]) {
      self.id = [dictionary objectForKey: @"Id"];
    }
    if ([dictionary.allKeys containsObject: @"CreatedDate" ] && [dictionary objectForKey: @"CreatedDate"] != (id)[NSNull null]) {
      self.createdDate = [[NSDate alloc] initWithTimeIntervalSince1970: [[dictionary objectForKey: @"CreatedDate"] longValue]];
    }
    if ([dictionary.allKeys containsObject: @"LastModifiedDate" ] && [dictionary objectForKey: @"LastModifiedDate"] != (id)[NSNull null]) {
      self.lastModifiedDate = [[NSDate alloc] initWithTimeIntervalSince1970: [[dictionary objectForKey: @"LastModifiedDate"] longValue]];
    }
  }
  return self;
}

- (instancetype)initWithByteArray: (uint8_t*)byteArray length:(uint32_t)len {
  ::BaseEntity obj = CppBondSerializer<::BaseEntity>::deserializeFromByteArray(byteArray, len);
  return [self initWithBondObject: &obj];
}

- (void*)toBondObject {
  ::BaseEntity* obj = new BaseEntity();
  if (self.id != nil) obj->Id = [self.id longValue];
  if (self.createdDate != nil) obj->CreatedDate.set_value() = [self.createdDate timeIntervalSince1970];
  if (self.lastModifiedDate != nil) obj->LastModifiedDate.set_value() = [self.lastModifiedDate timeIntervalSince1970];
  return obj;
}

-(const uint8_t*) toByteArray: (uint32_t*)resultLen {
  auto obj = (::BaseEntity*)[self toBondObject];
  return CppBondSerializer<::BaseEntity>::serializeToByteArray(*obj, resultLen);
}

@end