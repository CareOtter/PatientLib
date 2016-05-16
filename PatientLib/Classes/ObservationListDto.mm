//***************************************************
// This code was generated by a tool.  Do not modify.
//***************************************************

#import <Foundation/Foundation.h>
#import "CppBondSerializer.h"
#import <BaseObservation_reflection.h>
#import <ObservationListDto.h>
#import <ObservationListItemDto.h>

@implementation ObservationListDto

- (instancetype)initWithBondObject:(void*)obj {
  if (self = [super init]) {
    ::ObservationList* castObj = (::ObservationList*)obj;
    if (!castObj->code.is_nothing() && castObj->code.value().hasvalue()) self.code =  [[NSString alloc] initWithUTF8String: castObj->code.value().value().c_str()];
    if (!castObj->Description.is_nothing() && castObj->Description.value().hasvalue()) self.desc =  [[NSString alloc] initWithUTF8String: castObj->Description.value().value().c_str()];
    if (!castObj->MaxValueLength.is_nothing() && castObj->MaxValueLength.value().hasvalue()) self.maxValueLength =  [[NSNumber alloc] initWithShort: castObj->MaxValueLength.value().value()];
    if (!castObj->IsRestricted.is_nothing() && castObj->IsRestricted.value().hasvalue()) self.isRestricted =  [[NSNumber alloc] initWithShort: castObj->IsRestricted.value().value()];
    if (!castObj->SelectionType.is_nothing() && castObj->SelectionType.value().hasvalue()) self.selectionType =  [[NSNumber alloc] initWithShort: castObj->SelectionType.value().value()];
    if (!castObj->MultiSelectSeparator.is_nothing() && castObj->MultiSelectSeparator.value().hasvalue()) self.multiSelectSeparator =  [[NSString alloc] initWithUTF8String: castObj->MultiSelectSeparator.value().value().c_str()];
    if (!castObj->ControlType.is_nothing() && castObj->ControlType.value().hasvalue()) self.controlType =  [[NSString alloc] initWithUTF8String: castObj->ControlType.value().value().c_str()];
    if (!castObj->IsHorizontal.is_nothing() && castObj->IsHorizontal.value().hasvalue()) self.isHorizontal =  [[NSNumber alloc] initWithShort: castObj->IsHorizontal.value().value()];
    if (!castObj->ListItems.is_nothing()) {
      self.listItems = [[NSMutableArray alloc] init];
      for (auto it = castObj->ListItems.value().begin(); it != castObj->ListItems.value().end(); it++) {
        [self.listItems addObject: [[ObservationListItemDto alloc] initWithBondObject: &(*it)]];
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
    if ([dictionary.allKeys containsObject: @"code" ] && [dictionary objectForKey: @"code"] != (id)[NSNull null]) {
      self.code = [dictionary objectForKey: @"code"];
    }
    if ([dictionary.allKeys containsObject: @"Description" ] && [dictionary objectForKey: @"Description"] != (id)[NSNull null]) {
      self.desc = [dictionary objectForKey: @"Description"];
    }
    if ([dictionary.allKeys containsObject: @"MaxValueLength" ] && [dictionary objectForKey: @"MaxValueLength"] != (id)[NSNull null]) {
      self.maxValueLength = [dictionary objectForKey: @"MaxValueLength"];
    }
    if ([dictionary.allKeys containsObject: @"IsRestricted" ] && [dictionary objectForKey: @"IsRestricted"] != (id)[NSNull null]) {
      self.isRestricted = [dictionary objectForKey: @"IsRestricted"];
    }
    if ([dictionary.allKeys containsObject: @"SelectionType" ] && [dictionary objectForKey: @"SelectionType"] != (id)[NSNull null]) {
      self.selectionType = [dictionary objectForKey: @"SelectionType"];
    }
    if ([dictionary.allKeys containsObject: @"MultiSelectSeparator" ] && [dictionary objectForKey: @"MultiSelectSeparator"] != (id)[NSNull null]) {
      self.multiSelectSeparator = [dictionary objectForKey: @"MultiSelectSeparator"];
    }
    if ([dictionary.allKeys containsObject: @"ControlType" ] && [dictionary objectForKey: @"ControlType"] != (id)[NSNull null]) {
      self.controlType = [dictionary objectForKey: @"ControlType"];
    }
    if ([dictionary.allKeys containsObject: @"IsHorizontal" ] && [dictionary objectForKey: @"IsHorizontal"] != (id)[NSNull null]) {
      self.isHorizontal = [dictionary objectForKey: @"IsHorizontal"];
    }
    if ([dictionary.allKeys containsObject: @"ListItems" ] && [dictionary objectForKey: @"ListItems"] != (id)[NSNull null]) {
      self.listItems = [[NSMutableArray alloc] init];
      for (NSDictionary* item in [dictionary objectForKey: @"ListItems"]) {
        [self.listItems addObject: [[ObservationListItemDto alloc] initWithJsonDictionary:item]];
      }
    }
  }
  return self;
}

- (instancetype)initWithByteArray: (uint8_t*)byteArray length:(uint32_t)len {
  ::ObservationList obj = CppBondSerializer<::ObservationList>::deserializeFromByteArray(byteArray, len);
  return [self initWithBondObject: &obj];
}

- (void*)toBondObject {
  ::ObservationList* obj = new ObservationList();
  if (self.code != nil) obj->code.set_value().set([self.code cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.desc != nil) obj->Description.set_value().set([self.desc cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.maxValueLength != nil) obj->MaxValueLength.set_value().set([self.maxValueLength shortValue]);
  if (self.isRestricted != nil) obj->IsRestricted.set_value().set([self.isRestricted shortValue]);
  if (self.selectionType != nil) obj->SelectionType.set_value().set([self.selectionType shortValue]);
  if (self.multiSelectSeparator != nil) obj->MultiSelectSeparator.set_value().set([self.multiSelectSeparator cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.controlType != nil) obj->ControlType.set_value().set([self.controlType cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.isHorizontal != nil) obj->IsHorizontal.set_value().set([self.isHorizontal shortValue]);
  if (self.listItems != nil) {
    for (id item in self.listItems) {
      obj->ListItems.set_value().push_back(*(::ObservationListItem*)[item toBondObject]);
    }
  }
  return obj;
}

-(const uint8_t*) toByteArray: (uint32_t*)resultLen {
  auto obj = (::ObservationList*)[self toBondObject];
  return CppBondSerializer<::ObservationList>::serializeToByteArray(*obj, resultLen);
}

@end