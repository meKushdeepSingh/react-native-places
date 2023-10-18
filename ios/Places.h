
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNPlacesSpec.h"

@interface Places : NSObject <NativePlacesSpec>
#else
#import <React/RCTBridgeModule.h>

@interface Places : NSObject <RCTBridgeModule>
#endif

@end
