//***************************************************
// This code was generated by a tool.  Do not modify.
//***************************************************

#import <Foundation/Foundation.h>
#import "CppBondSerializer.h"
#import <Prescription_reflection.h>
#import <PrescriptionDto.h>
#import <NomenclatureDto.h>

@implementation PrescriptionDto

- (instancetype)initWithBondObject:(void*)obj {
  if (self = [super init]) {
    ::Prescription* castObj = (::Prescription*)obj;
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
    if (!castObj->InternalTraceNumber.is_nothing() && castObj->InternalTraceNumber.value().hasvalue()) self.internalTraceNumber =  [[NSString alloc] initWithUTF8String: castObj->InternalTraceNumber.value().value().c_str()];
    if (!castObj->SPINumber.is_nothing() && castObj->SPINumber.value().hasvalue()) self.sPINumber =  [[NSString alloc] initWithUTF8String: castObj->SPINumber.value().value().c_str()];
    if (!castObj->NCPDPNumber.is_nothing() && castObj->NCPDPNumber.value().hasvalue()) self.nCPDPNumber =  [[NSString alloc] initWithUTF8String: castObj->NCPDPNumber.value().value().c_str()];
    if (!castObj->SentDate.is_nothing() && castObj->SentDate.value().hasvalue()) self.sentDate =  [[NSDate alloc] initWithTimeIntervalSince1970: castObj->SentDate.value().value()];
    if (!castObj->MessageType.is_nothing() && castObj->MessageType.value().hasvalue()) self.messageType =  [[NSString alloc] initWithUTF8String: castObj->MessageType.value().value().c_str()];
    if (!castObj->MessageFunction.is_nothing() && castObj->MessageFunction.value().hasvalue()) self.messageFunction =  [[NSString alloc] initWithUTF8String: castObj->MessageFunction.value().value().c_str()];
    if (!castObj->PrescriberReferenceNumber.is_nothing() && castObj->PrescriberReferenceNumber.value().hasvalue()) self.prescriberReferenceNumber =  [[NSString alloc] initWithUTF8String: castObj->PrescriberReferenceNumber.value().value().c_str()];
    if (!castObj->PrescriberNPI.is_nothing() && castObj->PrescriberNPI.value().hasvalue()) self.prescriberNPI =  [[NSString alloc] initWithUTF8String: castObj->PrescriberNPI.value().value().c_str()];
    if (!castObj->PrescriberLicenseNumber.is_nothing() && castObj->PrescriberLicenseNumber.value().hasvalue()) self.prescriberLicenseNumber =  [[NSString alloc] initWithUTF8String: castObj->PrescriberLicenseNumber.value().value().c_str()];
    if (!castObj->PrescriberName.is_nothing() && castObj->PrescriberName.value().hasvalue()) self.prescriberName =  [[NSString alloc] initWithUTF8String: castObj->PrescriberName.value().value().c_str()];
    if (!castObj->PrescriberAddress.is_nothing() && castObj->PrescriberAddress.value().hasvalue()) self.prescriberAddress =  [[NSString alloc] initWithUTF8String: castObj->PrescriberAddress.value().value().c_str()];
    if (!castObj->PrescriberPhone.is_nothing() && castObj->PrescriberPhone.value().hasvalue()) self.prescriberPhone =  [[NSString alloc] initWithUTF8String: castObj->PrescriberPhone.value().value().c_str()];
    if (!castObj->PharmacyNPI.is_nothing() && castObj->PharmacyNPI.value().hasvalue()) self.pharmacyNPI =  [[NSString alloc] initWithUTF8String: castObj->PharmacyNPI.value().value().c_str()];
    if (!castObj->PharmacyNCPDP.is_nothing() && castObj->PharmacyNCPDP.value().hasvalue()) self.pharmacyNCPDP =  [[NSString alloc] initWithUTF8String: castObj->PharmacyNCPDP.value().value().c_str()];
    if (!castObj->PharmacyName.is_nothing() && castObj->PharmacyName.value().hasvalue()) self.pharmacyName =  [[NSString alloc] initWithUTF8String: castObj->PharmacyName.value().value().c_str()];
    if (!castObj->PharmacyPhone.is_nothing() && castObj->PharmacyPhone.value().hasvalue()) self.pharmacyPhone =  [[NSString alloc] initWithUTF8String: castObj->PharmacyPhone.value().value().c_str()];
    if (!castObj->Directions.is_nothing() && castObj->Directions.value().hasvalue()) self.directions =  [[NSString alloc] initWithUTF8String: castObj->Directions.value().value().c_str()];
    if (!castObj->DateWritten.is_nothing() && castObj->DateWritten.value().hasvalue()) self.dateWritten =  [[NSDate alloc] initWithTimeIntervalSince1970: castObj->DateWritten.value().value()];
    if (!castObj->DaysSupply.is_nothing() && castObj->DaysSupply.value().hasvalue()) self.daysSupply =  [[NSNumber alloc] initWithShort: castObj->DaysSupply.value().value()];
    if (!castObj->SubstitutionsAllowed.is_nothing() && castObj->SubstitutionsAllowed.value().hasvalue()) self.substitutionsAllowed =  [[NSNumber alloc] initWithBool: castObj->SubstitutionsAllowed.value().value()];
    if (!castObj->Refills.is_nothing() && castObj->Refills.value().hasvalue()) self.refills =  [[NSNumber alloc] initWithShort: castObj->Refills.value().value()];
    if (!castObj->PrimaryPayerIdNumber.is_nothing() && castObj->PrimaryPayerIdNumber.value().hasvalue()) self.primaryPayerIdNumber =  [[NSString alloc] initWithUTF8String: castObj->PrimaryPayerIdNumber.value().value().c_str()];
    if (!castObj->PayerName.is_nothing() && castObj->PayerName.value().hasvalue()) self.payerName =  [[NSString alloc] initWithUTF8String: castObj->PayerName.value().value().c_str()];
    if (!castObj->MemberId.is_nothing() && castObj->MemberId.value().hasvalue()) self.memberId =  [[NSString alloc] initWithUTF8String: castObj->MemberId.value().value().c_str()];
    if (!castObj->GroupId.is_nothing() && castObj->GroupId.value().hasvalue()) self.groupId =  [[NSString alloc] initWithUTF8String: castObj->GroupId.value().value().c_str()];
    if (!castObj->NumberOfDoses.is_nothing() && castObj->NumberOfDoses.value().hasvalue()) self.numberOfDoses =  [[NSNumber alloc] initWithShort: castObj->NumberOfDoses.value().value()];
    if (!castObj->PrescribeAsWritten.is_nothing() && castObj->PrescribeAsWritten.value().hasvalue()) self.prescribeAsWritten =  [[NSNumber alloc] initWithBool: castObj->PrescribeAsWritten.value().value()];
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
    if ([dictionary.allKeys containsObject: @"InternalTraceNumber" ] && [dictionary objectForKey: @"InternalTraceNumber"] != (id)[NSNull null]) {
      self.internalTraceNumber = [dictionary objectForKey: @"InternalTraceNumber"];
    }
    if ([dictionary.allKeys containsObject: @"SPINumber" ] && [dictionary objectForKey: @"SPINumber"] != (id)[NSNull null]) {
      self.sPINumber = [dictionary objectForKey: @"SPINumber"];
    }
    if ([dictionary.allKeys containsObject: @"NCPDPNumber" ] && [dictionary objectForKey: @"NCPDPNumber"] != (id)[NSNull null]) {
      self.nCPDPNumber = [dictionary objectForKey: @"NCPDPNumber"];
    }
    if ([dictionary.allKeys containsObject: @"SentDate" ] && [dictionary objectForKey: @"SentDate"] != (id)[NSNull null]) {
      self.sentDate = [[NSDate alloc] initWithTimeIntervalSince1970: [[dictionary objectForKey: @"SentDate"] longValue]];
    }
    if ([dictionary.allKeys containsObject: @"MessageType" ] && [dictionary objectForKey: @"MessageType"] != (id)[NSNull null]) {
      self.messageType = [dictionary objectForKey: @"MessageType"];
    }
    if ([dictionary.allKeys containsObject: @"MessageFunction" ] && [dictionary objectForKey: @"MessageFunction"] != (id)[NSNull null]) {
      self.messageFunction = [dictionary objectForKey: @"MessageFunction"];
    }
    if ([dictionary.allKeys containsObject: @"PrescriberReferenceNumber" ] && [dictionary objectForKey: @"PrescriberReferenceNumber"] != (id)[NSNull null]) {
      self.prescriberReferenceNumber = [dictionary objectForKey: @"PrescriberReferenceNumber"];
    }
    if ([dictionary.allKeys containsObject: @"PrescriberNPI" ] && [dictionary objectForKey: @"PrescriberNPI"] != (id)[NSNull null]) {
      self.prescriberNPI = [dictionary objectForKey: @"PrescriberNPI"];
    }
    if ([dictionary.allKeys containsObject: @"PrescriberLicenseNumber" ] && [dictionary objectForKey: @"PrescriberLicenseNumber"] != (id)[NSNull null]) {
      self.prescriberLicenseNumber = [dictionary objectForKey: @"PrescriberLicenseNumber"];
    }
    if ([dictionary.allKeys containsObject: @"PrescriberName" ] && [dictionary objectForKey: @"PrescriberName"] != (id)[NSNull null]) {
      self.prescriberName = [dictionary objectForKey: @"PrescriberName"];
    }
    if ([dictionary.allKeys containsObject: @"PrescriberAddress" ] && [dictionary objectForKey: @"PrescriberAddress"] != (id)[NSNull null]) {
      self.prescriberAddress = [dictionary objectForKey: @"PrescriberAddress"];
    }
    if ([dictionary.allKeys containsObject: @"PrescriberPhone" ] && [dictionary objectForKey: @"PrescriberPhone"] != (id)[NSNull null]) {
      self.prescriberPhone = [dictionary objectForKey: @"PrescriberPhone"];
    }
    if ([dictionary.allKeys containsObject: @"PharmacyNPI" ] && [dictionary objectForKey: @"PharmacyNPI"] != (id)[NSNull null]) {
      self.pharmacyNPI = [dictionary objectForKey: @"PharmacyNPI"];
    }
    if ([dictionary.allKeys containsObject: @"PharmacyNCPDP" ] && [dictionary objectForKey: @"PharmacyNCPDP"] != (id)[NSNull null]) {
      self.pharmacyNCPDP = [dictionary objectForKey: @"PharmacyNCPDP"];
    }
    if ([dictionary.allKeys containsObject: @"PharmacyName" ] && [dictionary objectForKey: @"PharmacyName"] != (id)[NSNull null]) {
      self.pharmacyName = [dictionary objectForKey: @"PharmacyName"];
    }
    if ([dictionary.allKeys containsObject: @"PharmacyPhone" ] && [dictionary objectForKey: @"PharmacyPhone"] != (id)[NSNull null]) {
      self.pharmacyPhone = [dictionary objectForKey: @"PharmacyPhone"];
    }
    if ([dictionary.allKeys containsObject: @"Directions" ] && [dictionary objectForKey: @"Directions"] != (id)[NSNull null]) {
      self.directions = [dictionary objectForKey: @"Directions"];
    }
    if ([dictionary.allKeys containsObject: @"DateWritten" ] && [dictionary objectForKey: @"DateWritten"] != (id)[NSNull null]) {
      self.dateWritten = [[NSDate alloc] initWithTimeIntervalSince1970: [[dictionary objectForKey: @"DateWritten"] longValue]];
    }
    if ([dictionary.allKeys containsObject: @"DaysSupply" ] && [dictionary objectForKey: @"DaysSupply"] != (id)[NSNull null]) {
      self.daysSupply = [dictionary objectForKey: @"DaysSupply"];
    }
    if ([dictionary.allKeys containsObject: @"SubstitutionsAllowed" ] && [dictionary objectForKey: @"SubstitutionsAllowed"] != (id)[NSNull null]) {
      self.substitutionsAllowed = [dictionary objectForKey: @"SubstitutionsAllowed"];
    }
    if ([dictionary.allKeys containsObject: @"Refills" ] && [dictionary objectForKey: @"Refills"] != (id)[NSNull null]) {
      self.refills = [dictionary objectForKey: @"Refills"];
    }
    if ([dictionary.allKeys containsObject: @"PrimaryPayerIdNumber" ] && [dictionary objectForKey: @"PrimaryPayerIdNumber"] != (id)[NSNull null]) {
      self.primaryPayerIdNumber = [dictionary objectForKey: @"PrimaryPayerIdNumber"];
    }
    if ([dictionary.allKeys containsObject: @"PayerName" ] && [dictionary objectForKey: @"PayerName"] != (id)[NSNull null]) {
      self.payerName = [dictionary objectForKey: @"PayerName"];
    }
    if ([dictionary.allKeys containsObject: @"MemberId" ] && [dictionary objectForKey: @"MemberId"] != (id)[NSNull null]) {
      self.memberId = [dictionary objectForKey: @"MemberId"];
    }
    if ([dictionary.allKeys containsObject: @"GroupId" ] && [dictionary objectForKey: @"GroupId"] != (id)[NSNull null]) {
      self.groupId = [dictionary objectForKey: @"GroupId"];
    }
    if ([dictionary.allKeys containsObject: @"NumberOfDoses" ] && [dictionary objectForKey: @"NumberOfDoses"] != (id)[NSNull null]) {
      self.numberOfDoses = [dictionary objectForKey: @"NumberOfDoses"];
    }
    if ([dictionary.allKeys containsObject: @"PrescribeAsWritten" ] && [dictionary objectForKey: @"PrescribeAsWritten"] != (id)[NSNull null]) {
      self.prescribeAsWritten = [dictionary objectForKey: @"PrescribeAsWritten"];
    }
  }
  return self;
}

- (instancetype)initWithByteArray: (uint8_t*)byteArray length:(uint32_t)len {
  ::Prescription obj = CppBondSerializer<::Prescription>::deserializeFromByteArray(byteArray, len);
  return [self initWithBondObject: &obj];
}

- (void*)toBondObject {
  ::Prescription* obj = new Prescription();
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
  if (self.internalTraceNumber != nil) obj->InternalTraceNumber.set_value().set([self.internalTraceNumber cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.sPINumber != nil) obj->SPINumber.set_value().set([self.sPINumber cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.nCPDPNumber != nil) obj->NCPDPNumber.set_value().set([self.nCPDPNumber cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.sentDate != nil) obj->SentDate.set_value().set([self.sentDate timeIntervalSince1970]);
  if (self.messageType != nil) obj->MessageType.set_value().set([self.messageType cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.messageFunction != nil) obj->MessageFunction.set_value().set([self.messageFunction cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.prescriberReferenceNumber != nil) obj->PrescriberReferenceNumber.set_value().set([self.prescriberReferenceNumber cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.prescriberNPI != nil) obj->PrescriberNPI.set_value().set([self.prescriberNPI cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.prescriberLicenseNumber != nil) obj->PrescriberLicenseNumber.set_value().set([self.prescriberLicenseNumber cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.prescriberName != nil) obj->PrescriberName.set_value().set([self.prescriberName cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.prescriberAddress != nil) obj->PrescriberAddress.set_value().set([self.prescriberAddress cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.prescriberPhone != nil) obj->PrescriberPhone.set_value().set([self.prescriberPhone cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.pharmacyNPI != nil) obj->PharmacyNPI.set_value().set([self.pharmacyNPI cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.pharmacyNCPDP != nil) obj->PharmacyNCPDP.set_value().set([self.pharmacyNCPDP cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.pharmacyName != nil) obj->PharmacyName.set_value().set([self.pharmacyName cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.pharmacyPhone != nil) obj->PharmacyPhone.set_value().set([self.pharmacyPhone cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.directions != nil) obj->Directions.set_value().set([self.directions cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.dateWritten != nil) obj->DateWritten.set_value().set([self.dateWritten timeIntervalSince1970]);
  if (self.daysSupply != nil) obj->DaysSupply.set_value().set([self.daysSupply shortValue]);
  if (self.substitutionsAllowed != nil) obj->SubstitutionsAllowed.set_value().set([self.substitutionsAllowed boolValue]);
  if (self.refills != nil) obj->Refills.set_value().set([self.refills shortValue]);
  if (self.primaryPayerIdNumber != nil) obj->PrimaryPayerIdNumber.set_value().set([self.primaryPayerIdNumber cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.payerName != nil) obj->PayerName.set_value().set([self.payerName cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.memberId != nil) obj->MemberId.set_value().set([self.memberId cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.groupId != nil) obj->GroupId.set_value().set([self.groupId cStringUsingEncoding:NSUTF8StringEncoding]);
  if (self.numberOfDoses != nil) obj->NumberOfDoses.set_value().set([self.numberOfDoses shortValue]);
  if (self.prescribeAsWritten != nil) obj->PrescribeAsWritten.set_value().set([self.prescribeAsWritten boolValue]);
  return obj;
}

-(const uint8_t*) toByteArray: (uint32_t*)resultLen {
  auto obj = (::Prescription*)[self toBondObject];
  return CppBondSerializer<::Prescription>::serializeToByteArray(*obj, resultLen);
}

@end