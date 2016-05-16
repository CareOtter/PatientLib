//
// This code was generated by a tool.  Do not modify.
//

#import <Foundation/Foundation.h>
#import "DtoType.h"
#import "BaseClinicalItemDto.h"

#ifndef ImmunizationDto_h
#define ImmunizationDto_h
@interface ImmunizationDto: BaseClinicalItemDto<DtoType>

@property NSString* orderId;
@property NSDate* administeredDate;
@property NSNumber* administeringProvider;
@property NSNumber* orderingProvider;
@property NSString* lotId;
@property NSDate* lotExpirationDate;
@property NSString* routeOfAdministration;
@property NSString* siteOfInjection;
@property NSString* manufacturer;
@property NSString* series;
@property NSString* dose;
@property NSString* doseUnit;
@property NSString* reasonDeclined;
@property NSNumber* isDeclined;
@property NSDate* declinedDate;
@property NSMutableArray* reactions;

- (instancetype) initWithBondObject: (void*)obj;
- (instancetype) initWithJson: (NSString*)json;
- (instancetype) initWithJsonDictionary: (NSDictionary*)dictionary;
- (instancetype) initWithByteArray: (uint8_t*)byteArray length:(uint32_t)len;
- (void*) toBondObject;
- (const uint8_t*) toByteArray: (uint32_t*)resultLen;

@end

#endif