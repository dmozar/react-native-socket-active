
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNSocketActiveSpec.h"

@interface SocketActive : NSObject <NativeSocketActiveSpec>
#else
#import <React/RCTBridgeModule.h>

@interface SocketActive : NSObject <RCTBridgeModule>
#endif

@end
