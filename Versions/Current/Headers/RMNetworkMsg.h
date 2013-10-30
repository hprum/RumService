//
//  RMNetworkMsg.h
//  RUMService
//
//  Created by efrat on 8/12/13.
//  Copyright (c) 2013 efrat. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RMMessage.h"

@interface RMNetworkMsg : RMMessage
@property           long        requestSize;
@property (copy)    NSString*   clientMethod;
@property           long        clientPort;
@property (copy)    NSString*   headerHpTvColor;
@property (copy)    NSString*   headerHpCamColor;
@property (copy)    NSString*   documentLocationHref;
@property           long        responseSize;
@property (copy)    NSString*   userName;
@property           long        responseCode;
@property (copy)    NSString*   refferer;
@property     long long        requestTime;
@property     long long        responseStart;
@property     long long        responseEnd;
@property (copy)    NSString*   postData;
@property (copy)    NSString*   requestHeaders;
@property (copy)    NSString*   responseHeaders;

- (NSString*) prepareURL: (NSString*) url postData: (NSString*) postData requestHeaders: (NSString*) requestHeaders;

@end
