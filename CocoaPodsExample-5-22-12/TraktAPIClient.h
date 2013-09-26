//
//  TraktAPIClient.h
//  CocoaPodsExample-5-22-12
//
//  Created by Andres Kwan on 9/26/13.
//  Copyright (c) 2013 Kwan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFHTTPClient.h>

extern NSString * const kTraktAPIKey;
extern NSString * const kTraktBaseURLString;

@interface TraktAPIClient : AFHTTPClient

+(TraktAPIClient *)sharedClient;

@end