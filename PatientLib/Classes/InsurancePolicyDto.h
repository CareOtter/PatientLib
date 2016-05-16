//
// This code was generated by a tool.  Do not modify.
//

#import <Foundation/Foundation.h>
#import "DtoType.h"
#import "AddressDto.h"
#import "PersonNameDto.h"
#import "BaseItemDto.h"

#ifndef InsurancePolicyDto_h
#define InsurancePolicyDto_h
@interface InsurancePolicyDto: BaseItemDto<DtoType>

@property AddressDto* address;
@property PersonNameDto* subscriberName;
@property NSString* subscriberSocialSecurityNumber;
@property NSString* relationship;
@property NSString* groupNumber;
@property NSString* subscriberNumber;
@property NSDate* effectiveDate;
@property NSDate* terminationDate;
@property NSNumber* coPay;
@property NSString* employer;
@property AddressDto* employerAddress;
@property NSDate* subscriberDateOfBirth;
@property AddressDto* subscriberAddress;
@property NSString* insurerOrganization;
@property NSString* insuranceName;

- (instancetype) initWithBondObject: (void*)obj;
- (instancetype) initWithJson: (NSString*)json;
- (instancetype) initWithJsonDictionary: (NSDictionary*)dictionary;
- (instancetype) initWithByteArray: (uint8_t*)byteArray length:(uint32_t)len;
- (void*) toBondObject;
- (const uint8_t*) toByteArray: (uint32_t*)resultLen;

@end

#endif