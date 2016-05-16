//
// This code was generated by a tool.  Do not modify.
//

#import <Foundation/Foundation.h>
#import "DtoType.h"
#import "NomenclatureDto.h"

#ifndef BillingProcedureDto_h
#define BillingProcedureDto_h
@interface BillingProcedureDto: NSObject<DtoType>

@property NSString* name;
@property NSString* id;
@property NomenclatureDto* nomenclature;

- (instancetype) initWithBondObject: (void*)obj;
- (instancetype) initWithJson: (NSString*)json;
- (instancetype) initWithJsonDictionary: (NSDictionary*)dictionary;
- (instancetype) initWithByteArray: (uint8_t*)byteArray length:(uint32_t)len;
- (void*) toBondObject;
- (const uint8_t*) toByteArray: (uint32_t*)resultLen;

@end

#endif
