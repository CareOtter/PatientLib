//***************************************************
// This code was generated by a tool.  Do not modify.
//***************************************************

#import <Foundation/Foundation.h>
#import "CppBondSerializer.h"
#import <BillingAccount_reflection.h>
#import <BillingAccountDto.h>
#import <InvoiceDto.h>

@implementation BillingAccountDto

- (instancetype)initWithBondObject:(void*)obj {
  if (self = [super init]) {
    ::BillingAccount* castObj = (::BillingAccount*)obj;
    if (!castObj->Id.is_nothing()) self.id =  [[NSString alloc] initWithUTF8String: castObj->Id.value().c_str()];
    if (!castObj->CreatedDate.is_nothing()) self.createdDate =  [[NSDate alloc] initWithTimeIntervalSince1970: castObj->CreatedDate.value()];
    if (!castObj->LastModifiedDate.is_nothing()) self.lastModifiedDate =  [[NSDate alloc] initWithTimeIntervalSince1970: castObj->LastModifiedDate.value()];
      self.invoices = [[NSMutableArray alloc] init];
      for (auto it = castObj->Invoices.begin(); it != castObj->Invoices.end(); it++) {
        [self.invoices addObject: [[InvoiceDto alloc] initWithBondObject: &(*it)]];
      }
    if (!castObj->Balance.is_nothing() && castObj->Balance.value().hasvalue()) self.balance =  [[NSNumber alloc] initWithDouble: castObj->Balance.value().value()];
    if (!castObj->PaymentPlan.is_nothing() && castObj->PaymentPlan.value().hasvalue()) self.paymentPlan =  [[NSNumber alloc] initWithDouble: castObj->PaymentPlan.value().value()];
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
    if ([dictionary.allKeys containsObject: @"Invoices" ] && [dictionary objectForKey: @"Invoices"] != (id)[NSNull null]) {
      self.invoices = [[NSMutableArray alloc] init];
      for (NSDictionary* item in [dictionary objectForKey: @"Invoices"]) {
        [self.invoices addObject: [[InvoiceDto alloc] initWithJsonDictionary:item]];
      }
    }
    if ([dictionary.allKeys containsObject: @"Balance" ] && [dictionary objectForKey: @"Balance"] != (id)[NSNull null]) {
      self.balance = [dictionary objectForKey: @"Balance"];
    }
    if ([dictionary.allKeys containsObject: @"PaymentPlan" ] && [dictionary objectForKey: @"PaymentPlan"] != (id)[NSNull null]) {
      self.paymentPlan = [dictionary objectForKey: @"PaymentPlan"];
    }
  }
  return self;
}

- (instancetype)initWithByteArray: (uint8_t*)byteArray length:(uint32_t)len {
  ::BillingAccount obj = CppBondSerializer<::BillingAccount>::deserializeFromByteArray(byteArray, len);
  return [self initWithBondObject: &obj];
}

- (void*)toBondObject {
  ::BillingAccount* obj = new BillingAccount();
  if (self.id != nil) obj->Id.set_value() = [self.id cStringUsingEncoding:NSUTF8StringEncoding];
  if (self.createdDate != nil) obj->CreatedDate.set_value() = [self.createdDate timeIntervalSince1970];
  if (self.lastModifiedDate != nil) obj->LastModifiedDate.set_value() = [self.lastModifiedDate timeIntervalSince1970];
  if (self.invoices != nil) {
    for (id item in self.invoices) {
      obj->Invoices.push_back(*(::Invoice*)[item toBondObject]);
    }
  }
  if (self.balance != nil) obj->Balance.set_value().set([self.balance doubleValue]);
  if (self.paymentPlan != nil) obj->PaymentPlan.set_value().set([self.paymentPlan doubleValue]);
  return obj;
}

-(const uint8_t*) toByteArray: (uint32_t*)resultLen {
  auto obj = (::BillingAccount*)[self toBondObject];
  return CppBondSerializer<::BillingAccount>::serializeToByteArray(*obj, resultLen);
}

@end