//
// This code was generated by a tool.  Do not modify.
//

#import <Foundation/Foundation.h>
#import "DtoType.h"
#import "CoordinatesDto.h"
#import "PersonNameDto.h"
#import "DemographicsDto.h"
#import "PersonContactInformationDto.h"
#import "BillingAccountDto.h"
#import "HealthRecordDto.h"
#import "BasePersonDto.h"

#ifndef PatientDto_h
#define PatientDto_h
@interface PatientDto: BasePersonDto<DtoType>

@property PersonNameDto* responsiblePersonName;
@property PersonNameDto* emergencyPersonName;
@property PersonContactInformationDto* responsiblePersonContactInformation;
@property PersonContactInformationDto* emergencyPersonContactInformation;
@property BillingAccountDto* billingAccount;
@property HealthRecordDto* healthRecord;
@property NSString* socialSecurityNumber;
@property NSMutableArray* insurancePolicies;
@property NSString* emergencyContactRelationship;
@property NSString* responsiblePartyRelationship;
@property NSDate* responsiblePartyDateOfBirth;
@property NSMutableArray* notes;
@property NSString* clinicalId;

- (instancetype) initWithBondObject: (void*)obj;
- (instancetype) initWithJson: (NSString*)json;
- (instancetype) initWithJsonDictionary: (NSDictionary*)dictionary;
- (instancetype) initWithByteArray: (uint8_t*)byteArray length:(uint32_t)len;
- (void*) toBondObject;
- (const uint8_t*) toByteArray: (uint32_t*)resultLen;

@end

#endif