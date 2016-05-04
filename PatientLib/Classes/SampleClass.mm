#import <Foundation/Foundation.h>
#import <SampleClass.h>

@implementation SampleClass

- (instancetype)initWithString:(NSString*)str {
  if (self = [super init]) {
    self.sampleProperty = str;
  }
  return self;
}

@end  