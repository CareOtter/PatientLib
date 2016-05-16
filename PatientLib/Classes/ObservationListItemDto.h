//
// This code was generated by a tool.  Do not modify.
//

#import <Foundation/Foundation.h>
#import "DtoType.h"

#ifndef ObservationListItemDto_h
#define ObservationListItemDto_h
@interface ObservationListItemDto: NSObject<DtoType>

@property NSNumber* isActive;
@property NSString* value;
@property NSNumber* displaySequence;
@property NSNumber* numericEquivNum;
@property NSNumber* isHeader;
@property NSString* displayType;
@property NSString* listValue;
@property NSString* suggestedText;
@property NSMutableArray* listItemRanges;

- (instancetype) initWithBondObject: (void*)obj;
- (instancetype) initWithJson: (NSString*)json;
- (instancetype) initWithJsonDictionary: (NSDictionary*)dictionary;
- (instancetype) initWithByteArray: (uint8_t*)byteArray length:(uint32_t)len;
- (void*) toBondObject;
- (const uint8_t*) toByteArray: (uint32_t*)resultLen;

@end

#endif
