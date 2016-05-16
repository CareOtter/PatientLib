//
// This code was generated by a tool.  Do not modify.
//

#import <Foundation/Foundation.h>
#import "DtoType.h"
#import "BaseItemDto.h"

#ifndef CodeValueDto_h
#define CodeValueDto_h
@interface CodeValueDto: BaseItemDto<DtoType>

@property NSString* code;

- (instancetype) initWithBondObject: (void*)obj;
- (instancetype) initWithJson: (NSString*)json;
- (instancetype) initWithJsonDictionary: (NSDictionary*)dictionary;
- (instancetype) initWithByteArray: (uint8_t*)byteArray length:(uint32_t)len;
- (void*) toBondObject;
- (const uint8_t*) toByteArray: (uint32_t*)resultLen;

@end

#endif