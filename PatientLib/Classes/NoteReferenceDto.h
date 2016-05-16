//
// This code was generated by a tool.  Do not modify.
//

#import <Foundation/Foundation.h>
#import "DtoType.h"

#ifndef NoteReferenceDto_h
#define NoteReferenceDto_h
@interface NoteReferenceDto: NSObject<DtoType>

@property NSString* referenceTypeStringValue;
@property NSNumber* referenceType;
@property NSString* referenceId;

- (instancetype) initWithBondObject: (void*)obj;
- (instancetype) initWithJson: (NSString*)json;
- (instancetype) initWithJsonDictionary: (NSDictionary*)dictionary;
- (instancetype) initWithByteArray: (uint8_t*)byteArray length:(uint32_t)len;
- (void*) toBondObject;
- (const uint8_t*) toByteArray: (uint32_t*)resultLen;

@end

#endif
