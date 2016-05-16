//***************************************************
// This code was generated by a tool.  Do not modify.
//***************************************************

#import <Foundation/Foundation.h>
#import "CppBondSerializer.h"
#import <BaseObservationSet_reflection.h>
#import <ObservationSetDescriptionDto.h>
#import <ObsCatalogSetItemDto.h>

@implementation ObservationSetDescriptionDto

- (instancetype)initWithBondObject:(void*)obj {
  if (self = [super init]) {
    ::ObservationSetDescription* castObj = (::ObservationSetDescription*)obj;
    self.id = [[NSNumber alloc] initWithLongLong: castObj->Id];
    if (!castObj->CreatedDate.is_nothing()) self.createdDate =  [[NSDate alloc] initWithTimeIntervalSince1970: castObj->CreatedDate.value()];
    if (!castObj->LastModifiedDate.is_nothing()) self.lastModifiedDate =  [[NSDate alloc] initWithTimeIntervalSince1970: castObj->LastModifiedDate.value()];
    if (!castObj->Name.is_nothing() && castObj->Name.value().hasvalue()) self.name =  [[NSString alloc] initWithUTF8String: castObj->Name.value().value().c_str()];
    if (!castObj->Description.is_nothing() && castObj->Description.value().hasvalue()) self.desc =  [[NSString alloc] initWithUTF8String: castObj->Description.value().value().c_str()];
    if (!castObj->EffectiveDate.is_nothing() && castObj->EffectiveDate.value().hasvalue()) self.effectiveDate =  [[NSDate alloc] initWithTimeIntervalSince1970: castObj->EffectiveDate.value().value()];
    if (!castObj->ExpiryDate.is_nothing() && castObj->ExpiryDate.value().hasvalue()) self.expiryDate =  [[NSDate alloc] initWithTimeIntervalSince1970: castObj->ExpiryDate.value().value()];
    if (!castObj->DisplayName.is_nothing() && castObj->DisplayName.value().hasvalue()) self.displayName =  [[NSString alloc] initWithUTF8String: castObj->DisplayName.value().value().c_str()];
    if (!castObj->IsGrouped.is_nothing() && castObj->IsGrouped.value().hasvalue()) self.isGrouped =  [[NSNumber alloc] initWithShort: castObj->IsGrouped.value().value()];
    if (!castObj->ObsSetType.is_nothing() && castObj->ObsSetType.value().hasvalue()) self.obsSetType =  [[NSString alloc] initWithUTF8String: castObj->ObsSetType.value().value().c_str()];
    if (!castObj->IsBorderOn.is_nothing() && castObj->IsBorderOn.value().hasvalue()) self.isBorderOn =  [[NSNumber alloc] initWithShort: castObj->IsBorderOn.value().value()];
    if (!castObj->IsDisplayRTFAsGrid.is_nothing() && castObj->IsDisplayRTFAsGrid.value().hasvalue()) self.isDisplayRTFAsGrid =  [[NSNumber alloc] initWithShort: castObj->IsDisplayRTFAsGrid.value().value()];
    if (!castObj->ObservationResultGridType.is_nothing() && castObj->ObservationResultGridType.value().hasvalue()) self.observationResultGridType =  [[NSNumber alloc] initWithShort: castObj->ObservationResultGridType.value().value()];
    if (!castObj->IsRTFBullet.is_nothing() && castObj->IsRTFBullet.value().hasvalue()) self.isRTFBullet =  [[NSNumber alloc] initWithShort: castObj->IsRTFBullet.value().value()];
    if (!castObj->IsRTFConcatenate.is_nothing() && castObj->IsRTFConcatenate.value().hasvalue()) self.isRTFConcatenate =  [[NSNumber alloc] initWithShort: castObj->IsRTFConcatenate.value().value()];
    if (!castObj->ObsSetItems.is_nothing()) {
      self.obsSetItems = [[NSMutableArray alloc] init];
      for (auto it = castObj->ObsSetItems.value().begin(); it != castObj->ObsSetItems.value().end(); it++) {
        [self.obsSetItems addObject: [[ObsCatalogSetItemDto alloc] initWithBondObject: &(*it)]];
      }
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
    if ([dictionary.allKeys containsObject: @"Name" ] && [dictionary objectForKey: @"Name"] != (id)[NSNull null]) {
      self.name = [dictionary objectForKey: @"Name"];
    }
    if ([dictionary.allKeys containsObject: @"Description" ] && [dictionary objectForKey: @"Description"] != (id)[NSNull null]) {
      self.desc = [dictionary objectForKey: @"Description"];
    }
    if ([dictionary.allKeys containsObject: @"EffectiveDate" ] && [dictionary objectForKey: @"EffectiveDate"] != (id)[NSNull null]) {
      self.effectiveDate = [[NSDate alloc] initWithTimeIntervalSince1970: [[dictionary objectForKey: @"EffectiveDate"] longValue]];
    }
    if ([dictionary.allKeys containsObject: @"ExpiryDate" ] && [dictionary objectForKey: @"ExpiryDate"] != (id)[NSNull null]) {
      self.expiryDate = [[NSDate alloc] initWithTimeIntervalSince1970: [[dictionary objectForKey: @"ExpiryDate"] longValue]];
    }
    if ([dictionary.allKeys containsObject: @"DisplayName" ] && [dictionary objectForKey: @"DisplayName"] != (id)[NSNull null]) {
      self.displayName = [dictionary objectForKey: @"DisplayName"];
    }
    if ([dictionary.allKeys containsObject: @"IsGrouped" ] && [dictionary objectForKey: @"IsGrouped"] != (id)[NSNull null]) {
      self.isGrouped = [dictionary objectForKey: @"IsGrouped"];
    }
    if ([dictionary.allKeys containsObject: @"ObsSetType" ] && [dictionary objectForKey: @"ObsSetType"] != (id)[NSNull null]) {
      self.obsSetType = [dictionary objectForKey: @"ObsSetType"];
    }
    if ([dictionary.allKeys containsObject: @"IsBorderOn" ] && [dictionary objectForKey: @"IsBorderOn"] != (id)[NSNull null]) {
      self.isBorderOn = [dictionary objectForKey: @"IsBorderOn"];
    }
    if ([dictionary.allKeys containsObject: @"IsDisplayRTFAsGrid" ] && [dictionary objectForKey: @"IsDisplayRTFAsGrid"] != (id)[NSNull null]) {
      self.isDisplayRTFAsGrid = [dictionary objectForKey: @"IsDisplayRTFAsGrid"];
    }
    if ([dictionary.allKeys containsObject: @"ObservationResultGridType" ] && [dictionary objectForKey: @"ObservationResultGridType"] != (id)[NSNull null]) {
      self.observationResultGridType = [dictionary objectForKey: @"ObservationResultGridType"];
    }
    if ([dictionary.allKeys containsObject: @"IsRTFBullet" ] && [dictionary objectForKey: @"IsRTFBullet"] != (id)[NSNull null]) {
      self.isRTFBullet = [dictionary objectForKey: @"IsRTFBullet"];
    }
    if ([dictionary.allKeys containsObject: @"IsRTFConcatenate" ] && [dictionary objectForKey: @"IsRTFConcatenate"] != (id)[NSNull null]) {
      self.isRTFConcatenate = [dictionary objectForKey: @"IsRTFConcatenate"];
    }
    if ([dictionary.allKeys containsObject: @"ObsSetItems" ] && [dictionary objectForKey: @"ObsSetItems"] != (id)[NSNull null]) {
      self.obsSetItems = [[NSMutableArray alloc] init];
      for (NSDictionary* item in [dictionary objectForKey: @"ObsSetItems"]) {
        [self.obsSetItems addObject: [[ObsCatalogSetItemDto alloc] initWithJsonDictionary:item]];
      }
    }
  }
  return self;
}

- (instancetype)initWithByteArray: (uint8_t*)byteArray length:(uint32_t)len {
  ::ObservationSetDescription obj = CppBondSerializer<::ObservationSetDescription>::deserializeFromByteArray(byteArray, len);
  return [self initWithBondObject: &obj];
}

- (void*)toBondObject {
  ::ObservationSetDescription* obj = new ObservationSetDescription();
  if (self.id != nil) obj->Id = [self.id longValue];
  if (self.createdDate != nil) obj->CreatedDate.set_value() = [self.createdDate timeIntervalSince1970];
  if (self.lastModifiedDate != nil) obj->LastModifiedDate.set_value() = [self.lastModifiedDate timeIntervalSince1970];
  if (self.name != nil) obj->Name.set_value().set([self.name cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.desc != nil) obj->Description.set_value().set([self.desc cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.effectiveDate != nil) obj->EffectiveDate.set_value().set([self.effectiveDate timeIntervalSince1970]);
  if (self.expiryDate != nil) obj->ExpiryDate.set_value().set([self.expiryDate timeIntervalSince1970]);
  if (self.displayName != nil) obj->DisplayName.set_value().set([self.displayName cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.isGrouped != nil) obj->IsGrouped.set_value().set([self.isGrouped shortValue]);
  if (self.obsSetType != nil) obj->ObsSetType.set_value().set([self.obsSetType cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.isBorderOn != nil) obj->IsBorderOn.set_value().set([self.isBorderOn shortValue]);
  if (self.isDisplayRTFAsGrid != nil) obj->IsDisplayRTFAsGrid.set_value().set([self.isDisplayRTFAsGrid shortValue]);
  if (self.observationResultGridType != nil) obj->ObservationResultGridType.set_value().set([self.observationResultGridType shortValue]);
  if (self.isRTFBullet != nil) obj->IsRTFBullet.set_value().set([self.isRTFBullet shortValue]);
  if (self.isRTFConcatenate != nil) obj->IsRTFConcatenate.set_value().set([self.isRTFConcatenate shortValue]);
  if (self.obsSetItems != nil) {
    for (id item in self.obsSetItems) {
      obj->ObsSetItems.set_value().push_back(*(::ObsCatalogSetItem*)[item toBondObject]);
    }
  }
  return obj;
}

-(const uint8_t*) toByteArray: (uint32_t*)resultLen {
  auto obj = (::ObservationSetDescription*)[self toBondObject];
  return CppBondSerializer<::ObservationSetDescription>::serializeToByteArray(*obj, resultLen);
}

@end