//
//  DtoType.h
//  HealthCareModel
//
//  Created by Mueller, Scott on 4/4/16.
//  Copyright © 2016 Care Otter. All rights reserved.
//

#ifndef DtoType_h
#define DtoType_h

@protocol DtoType <NSObject>

- (instancetype) initWithByteArray: (uint8_t*)byteArray length:(uint32_t)len;
- (instancetype) initWithJson: (NSString*)json;
- (const uint8_t*) toByteArray: (uint32_t*)resultLen;

@end

#endif /* DtoType_h */
