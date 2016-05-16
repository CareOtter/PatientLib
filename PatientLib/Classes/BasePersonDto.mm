//***************************************************
// This code was generated by a tool.  Do not modify.
//***************************************************

#import <Foundation/Foundation.h>
#import "CppBondSerializer.h"
#import <BasePerson_reflection.h>
#import <BasePersonDto.h>
#import <CoordinatesDto.h>
#import <PersonNameDto.h>
#import <DemographicsDto.h>
#import <ImageResourceDto.h>

@implementation BasePersonDto

- (instancetype)initWithBondObject:(void*)obj {
  if (self = [super init]) {
    ::BasePerson* castObj = (::BasePerson*)obj;
    self.id = [[NSNumber alloc] initWithLongLong: castObj->Id];
    if (!castObj->CreatedDate.is_nothing()) self.createdDate =  [[NSDate alloc] initWithTimeIntervalSince1970: castObj->CreatedDate.value()];
    if (!castObj->LastModifiedDate.is_nothing()) self.lastModifiedDate =  [[NSDate alloc] initWithTimeIntervalSince1970: castObj->LastModifiedDate.value()];
    if (castObj->Coordinates.hasvalue()) self.coordinates =  [[CoordinatesDto alloc] initWithBondObject: &(castObj->Coordinates.value())];
    if (!castObj->Name.is_nothing() && castObj->Name.value().hasvalue()) self.name =  [[PersonNameDto alloc] initWithBondObject: &(castObj->Name.value().value())];
    if (castObj->Demographics.hasvalue()) {
      auto newObj = castObj->Demographics.value().Deserialize();
      self.demographics = [[DemographicsDto alloc] initWithBondObject: &newObj];
    }
    if (!castObj->DateOfBirth.is_nothing() && castObj->DateOfBirth.value().hasvalue()) self.dateOfBirth =  [[NSDate alloc] initWithTimeIntervalSince1970: castObj->DateOfBirth.value().value()];
    if (!castObj->DateOfDeath.is_nothing() && castObj->DateOfDeath.value().hasvalue()) self.dateOfDeath =  [[NSDate alloc] initWithTimeIntervalSince1970: castObj->DateOfDeath.value().value()];
      self.imageResources = [[NSMutableArray alloc] init];
      for (auto it = castObj->ImageResources.begin(); it != castObj->ImageResources.end(); it++) {
        [self.imageResources addObject: [[ImageResourceDto alloc] initWithBondObject: &(*it)]];
      }
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
    if ([dictionary.allKeys containsObject: @"Coordinates" ] && [dictionary objectForKey: @"Coordinates"] != (id)[NSNull null]) {
      self.coordinates = [[CoordinatesDto alloc] initWithJsonDictionary:[dictionary objectForKey: @"Coordinates"]];
    }
    if ([dictionary.allKeys containsObject: @"Name" ] && [dictionary objectForKey: @"Name"] != (id)[NSNull null]) {
      self.name = [[PersonNameDto alloc] initWithJsonDictionary:[dictionary objectForKey: @"Name"]];
    }
    if ([dictionary.allKeys containsObject: @"Demographics" ] && [dictionary objectForKey: @"Demographics"] != (id)[NSNull null]) {
      self.demographics = [[DemographicsDto alloc] initWithJsonDictionary:[dictionary objectForKey: @"Demographics"]];
    }
    if ([dictionary.allKeys containsObject: @"DateOfBirth" ] && [dictionary objectForKey: @"DateOfBirth"] != (id)[NSNull null]) {
      self.dateOfBirth = [[NSDate alloc] initWithTimeIntervalSince1970: [[dictionary objectForKey: @"DateOfBirth"] longValue]];
    }
    if ([dictionary.allKeys containsObject: @"DateOfDeath" ] && [dictionary objectForKey: @"DateOfDeath"] != (id)[NSNull null]) {
      self.dateOfDeath = [[NSDate alloc] initWithTimeIntervalSince1970: [[dictionary objectForKey: @"DateOfDeath"] longValue]];
    }
    if ([dictionary.allKeys containsObject: @"ImageResources" ] && [dictionary objectForKey: @"ImageResources"] != (id)[NSNull null]) {
      self.imageResources = [[NSMutableArray alloc] init];
      for (NSDictionary* item in [dictionary objectForKey: @"ImageResources"]) {
        [self.imageResources addObject: [[ImageResourceDto alloc] initWithJsonDictionary:item]];
      }
    }
  }
  return self;
}

- (instancetype)initWithByteArray: (uint8_t*)byteArray length:(uint32_t)len {
  ::BasePerson obj = CppBondSerializer<::BasePerson>::deserializeFromByteArray(byteArray, len);
  return [self initWithBondObject: &obj];
}

- (void*)toBondObject {
  ::BasePerson* obj = new BasePerson();
  if (self.id != nil) obj->Id = [self.id longValue];
  if (self.createdDate != nil) obj->CreatedDate.set_value() = [self.createdDate timeIntervalSince1970];
  if (self.lastModifiedDate != nil) obj->LastModifiedDate.set_value() = [self.lastModifiedDate timeIntervalSince1970];
  if (self.coordinates != nil) obj->Coordinates.set(*(::Coordinates*)[self.coordinates toBondObject]);
  if (self.name != nil) obj->Name.set_value().set(*(::PersonName*)[self.name toBondObject]);
  if (self.demographics != nil) {
    auto bondedObj = CppBondSerializer<Demographics>::getBondedObject(*(::Demographics*)[self.demographics toBondObject]);
    obj->Demographics.set(bondedObj);
  }
  if (self.dateOfBirth != nil) obj->DateOfBirth.set_value().set([self.dateOfBirth timeIntervalSince1970]);
  if (self.dateOfDeath != nil) obj->DateOfDeath.set_value().set([self.dateOfDeath timeIntervalSince1970]);
  if (self.imageResources != nil) {
    for (id item in self.imageResources) {
      obj->ImageResources.push_back(*(::ImageResource*)[item toBondObject]);
    }
  }
  return obj;
}

-(const uint8_t*) toByteArray: (uint32_t*)resultLen {
  auto obj = (::BasePerson*)[self toBondObject];
  return CppBondSerializer<::BasePerson>::serializeToByteArray(*obj, resultLen);
}

@end
