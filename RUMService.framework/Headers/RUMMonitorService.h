//
//  RUMMonitorService.h
//  RUMService
//
//  Created by efrat on 8/20/13.
//  Copyright (c) 2013 efrat. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RMNetworkMsg.h"

@interface RUMMonitorService : NSObject

+ (RUMMonitorService*) sharedInstance;
- (void) updateNetworkMessage: (RMNetworkMsg*) msg;
- (void)stopMonitoring;
//+ (RUMMonitorService*) serviceWithCMURL: (NSString*) cmUrl ApplicationKey: (NSString*)appKey Port:(int) port TrafficRate:(int)trafficRate MinSendInterval: (int)minSendInt MaxDelay:(int)maxSendInt;
//+ serviceWithCMHost:(NSString*) host ApplicationKey: (NSString*) appKey;
- (void) flush;


@end
