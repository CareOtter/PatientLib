//***************************************************
// This code was generated by a tool.  Do not modify.
//***************************************************

#import <Foundation/Foundation.h>
#import "CppBondSerializer.h"
#import <BaseClasses_reflection.h>
#import <BaseClinicalItemDto.h>
#import <NomenclatureDto.h>

@implementation BaseClinicalItemDto

- (instancetype)initWithBondObject:(void*)obj {
  if (self = [super init]) {
    ::BaseClinicalItem* castObj = (::BaseClinicalItem*)obj;
    if (!castObj->Id.is_nothing()) self.id =  [[NSString alloc] initWithUTF8String: castObj->Id.value().c_str()];
    if (!castObj->CreatedDate.is_nothing()) self.createdDate =  [[NSDate alloc] initWithTimeIntervalSince1970: castObj->CreatedDate.value()];
    if (!castObj->LastModifiedDate.is_nothing()) self.lastModifiedDate =  [[NSDate alloc] initWithTimeIntervalSince1970: castObj->LastModifiedDate.value()];
    if (!castObj->Name.is_nothing()) self.name =  [[NSString alloc] initWithUTF8String: castObj->Name.value().c_str()];
    if (!castObj->Status.is_nothing()) self.status =  [[NSString alloc] initWithUTF8String: castObj->Status.value().c_str()];
      self.nomenclatureIds = [[NSMutableArray alloc] init];
      for (auto it = castObj->NomenclatureIds.begin(); it != castObj->NomenclatureIds.end(); it++) {
        [self.nomenclatureIds addObject: [[NomenclatureDto alloc] initWithBondObject: &(*it)]];
      }
    if (!castObj->ClinicalDescription.is_nothing()) self.clinicalDescription =  [[NSString alloc] initWithUTF8String: castObj->ClinicalDescription.value().c_str()];
    if (!castObj->ReportingSource.is_nothing()) self.reportingSource =  [[NSString alloc] initWithUTF8String: castObj->ReportingSource.value().c_str()];
    if (!castObj->Comments.is_nothing()) self.comments =  [[NSString alloc] initWithUTF8String: castObj->Comments.value().c_str()];
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
    if ([dictionary.allKeys containsObject: @"Status" ] && [dictionary objectForKey: @"Status"] != (id)[NSNull null]) {
      self.status = [dictionary objectForKey: @"Status"];
    }
    if ([dictionary.allKeys containsObject: @"NomenclatureIds" ] && [dictionary objectForKey: @"NomenclatureIds"] != (id)[NSNull null]) {
      self.nomenclatureIds = [[NSMutableArray alloc] init];
      for (NSDictionary* item in [dictionary objectForKey: @"NomenclatureIds"]) {
        [self.nomenclatureIds addObject: [[NomenclatureDto alloc] initWithJsonDictionary:item]];
      }
    }
    if ([dictionary.allKeys containsObject: @"ClinicalDescription" ] && [dictionary objectForKey: @"ClinicalDescription"] != (id)[NSNull null]) {
      self.clinicalDescription = [dictionary objectForKey: @"ClinicalDescription"];
    }
    if ([dictionary.allKeys containsObject: @"ReportingSource" ] && [dictionary objectForKey: @"ReportingSource"] != (id)[NSNull null]) {
      self.reportingSource = [dictionary objectForKey: @"ReportingSource"];
    }
    if ([dictionary.allKeys containsObject: @"Comments" ] && [dictionary objectForKey: @"Comments"] != (id)[NSNull null]) {
      self.comments = [dictionary objectForKey: @"Comments"];
    }
  }
  return self;
}

- (instancetype)initWithByteArray: (uint8_t*)byteArray length:(uint32_t)len {
  ::BaseClinicalItem obj = CppBondSerializer<::BaseClinicalItem>::deserializeFromByteArray(byteArray, len);
  return [self initWithBondObject: &obj];
}

- (void*)toBondObject {
  ::BaseClinicalItem* obj = new BaseClinicalItem();
  if (self.id != nil) obj->Id.set_value() = [self.id cStringUsingEncoding:NSUTF8StringEncoding];
  if (self.createdDate != nil) obj->CreatedDate.set_value() = [self.createdDate timeIntervalSince1970];
  if (self.lastModifiedDate != nil) obj->LastModifiedDate.set_value() = [self.lastModifiedDate timeIntervalSince1970];
  if (self.name != nil) obj->Name.set_value() = [self.name cStringUsingEncoding:NSUTF8StringEncoding];
  if (self.status != nil) obj->Status.set_value() = [self.status cStringUsingEncoding:NSUTF8StringEncoding];
  if (self.nomenclatureIds != nil) {
    for (id item in self.nomenclatureIds) {
      obj->NomenclatureIds.push_back(*(::Nomenclature*)[item toBondObject]);
    }
  }
  if (self.clinicalDescription != nil) obj->ClinicalDescription.set_value() = [self.clinicalDescription cStringUsingEncoding:NSUTF8StringEncoding];
  if (self.reportingSource != nil) obj->ReportingSource.set_value() = [self.reportingSource cStringUsingEncoding:NSUTF8StringEncoding];
  if (self.comments != nil) obj->Comments.set_value() = [self.comments cStringUsingEncoding:NSUTF8StringEncoding];
  return obj;
}

-(const uint8_t*) toByteArray: (uint32_t*)resultLen {
  auto obj = (::BaseClinicalItem*)[self toBondObject];
  return CppBondSerializer<::BaseClinicalItem>::serializeToByteArray(*obj, resultLen);
}

@end
