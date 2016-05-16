//
// This code was generated by a tool.  Do not modify.
//

#import <Foundation/Foundation.h>
#import "DtoType.h"
#import "BaseItemDto.h"

#ifndef InvoiceDto_h
#define InvoiceDto_h
@interface InvoiceDto: BaseItemDto<DtoType>

@property NSDate* invoiceDate;
@property NSString* invoiceId;
@property NSString* patientName;
@property NSString* providerName;
@property NSString* procedureName;
@property NSNumber* charges;
@property NSNumber* insurancePayment;
@property NSNumber* patientPayment;
@property NSNumber* amountDueNow;
@property NSNumber* pendingWithInsurance;
@property NSString* invoiceStatus;
@property NSString* invoicePracticeId;
@property NSNumber* pendingPayment;
@property NSMutableArray* billingProcedures;

- (instancetype) initWithBondObject: (void*)obj;
- (instancetype) initWithJson: (NSString*)json;
- (instancetype) initWithJsonDictionary: (NSDictionary*)dictionary;
- (instancetype) initWithByteArray: (uint8_t*)byteArray length:(uint32_t)len;
- (void*) toBondObject;
- (const uint8_t*) toByteArray: (uint32_t*)resultLen;

@end

#endif
