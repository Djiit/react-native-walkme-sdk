
#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>
#endif

#import <WalkMeSDK/WalkMeSDK.h>

#define wmCampaignInfoEventDismissed    @"wmCampaignInfoEventDismissed"
#define wmCampaignInfoEventWillShow     @"wmCampaignInfoEventWillShow"

@interface RNWalkMeSdk : RCTEventEmitter <RCTBridgeModule, WMCampaignInfoDelegate>

@end
  
