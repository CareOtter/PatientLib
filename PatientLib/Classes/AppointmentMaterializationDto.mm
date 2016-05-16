//***************************************************
// This code was generated by a tool.  Do not modify.
//***************************************************

#import <Foundation/Foundation.h>
#import "CppBondSerializer.h"
#import <AppointmentMaterialization_reflection.h>
#import <AppointmentMaterializationDto.h>
#import <PatientDto.h>
#import <ProviderDto.h>
#import <AppointmentDto.h>

@implementation AppointmentMaterializationDto

- (instancetype)initWithBondObject:(void*)obj {
  if (self = [super init]) {
    ::AppointmentMaterialization* castObj = (::AppointmentMaterialization*)obj;
    if (!castObj->Patient.is_nothing() && castObj->Patient.value().hasvalue()) self.patient =  [[PatientDto alloc] initWithBondObject: &(castObj->Patient.value().value())];
    if (!castObj->Provider.is_nothing() && castObj->Provider.value().hasvalue()) self.provider =  [[ProviderDto alloc] initWithBondObject: &(castObj->Provider.value().value())];
    if (!castObj->Appointment.is_nothing() && castObj->Appointment.value().hasvalue()) self.appointment =  [[AppointmentDto alloc] initWithBondObject: &(castObj->Appointment.value().value())];
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
    if ([dictionary.allKeys containsObject: @"Patient" ] && [dictionary objectForKey: @"Patient"] != (id)[NSNull null]) {
      self.patient = [[PatientDto alloc] initWithJsonDictionary:[dictionary objectForKey: @"Patient"]];
    }
    if ([dictionary.allKeys containsObject: @"Provider" ] && [dictionary objectForKey: @"Provider"] != (id)[NSNull null]) {
      self.provider = [[ProviderDto alloc] initWithJsonDictionary:[dictionary objectForKey: @"Provider"]];
    }
    if ([dictionary.allKeys containsObject: @"Appointment" ] && [dictionary objectForKey: @"Appointment"] != (id)[NSNull null]) {
      self.appointment = [[AppointmentDto alloc] initWithJsonDictionary:[dictionary objectForKey: @"Appointment"]];
    }
  }
  return self;
}

- (instancetype)initWithByteArray: (uint8_t*)byteArray length:(uint32_t)len {
  ::AppointmentMaterialization obj = CppBondSerializer<::AppointmentMaterialization>::deserializeFromByteArray(byteArray, len);
  return [self initWithBondObject: &obj];
}

- (void*)toBondObject {
  ::AppointmentMaterialization* obj = new AppointmentMaterialization();
  if (self.patient != nil) obj->Patient.set_value().set(*(::Patient*)[self.patient toBondObject]);
  if (self.provider != nil) obj->Provider.set_value().set(*(::Provider*)[self.provider toBondObject]);
  if (self.appointment != nil) obj->Appointment.set_value().set(*(::Appointment*)[self.appointment toBondObject]);
  return obj;
}

-(const uint8_t*) toByteArray: (uint32_t*)resultLen {
  auto obj = (::AppointmentMaterialization*)[self toBondObject];
  return CppBondSerializer<::AppointmentMaterialization>::serializeToByteArray(*obj, resultLen);
}

@end
