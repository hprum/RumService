//
//  RMMessage.h
//  RUMService
//
//  Created by efrat on 8/7/13.
//  Copyright (c) 2013 efrat. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RMMessage : NSObject {
    NSString* _headers;
}

@property NSInteger msgId;
@property (copy) NSString* pageTitle;
@property BOOL readyForSending;
@property long long lastUpdateTime;


+ (id) message;
- (NSString*) getHeaders;
- (NSString*) getValues;
- (NSString*) getValuesDataFormat;
- (void) updateMessage: (RMMessage*) msg;
- (BOOL) expired:(long) timeout;
- (BOOL) allDataInMsg;
- (NSString*) asString;

+ (NSString*)quotedField:(NSString*)field;
+ (id) updateField: (id) local newValue: (id) newValue empty: (id)empty;
+ (long long)updateFieldwithLong : (long long ) local newValue: (long long) newValue empty: (long long)empty;
+ (NSString*) updateFieldWithString: (NSString*) local newValue: (NSString*) newValue empty: (NSString*)empty;




@end
