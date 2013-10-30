//
//  RMSettings.h
//  RUMService
//
//  Created by efrat on 8/22/13.
//  Copyright (c) 2013 efrat. All rights reserved.
//

#import <Foundation/Foundation.h>

#define MESSAGE_DELIMITER @";;"
#define ESTIMATED_SERIALIZED_MESSAGE_SIZE  2048
#define DEFAULT_MAX_TRAFFIC_RATE_MESSAGES  1000
#define DEFAULT_MIN_SENDING_INTERVAL  30
#define DEFAULT_MAX_SENDING_INTERVAL 60*2


@interface RMSettings : NSObject

//ExternalSettings

@property (copy) NSString* appKey;
@property int minSendInterval;
@property int maxSendInterval;
@property int maxTrafficRateMessages;
@property (copy) NSString* cmUrl;
@property BOOL enableDynamicConfiguration;
@property BOOL isInDataMode;

//internalSettings
@property long maxTrafficRate;
@property long maxNetMessages;
@property long maxUaMessages;
@property (copy) NSString* msgContentType;
@property (copy) NSString* frameworkVersion;
@property int numSendRetries;



+ (RMSettings*)sharedInstance;

@end
