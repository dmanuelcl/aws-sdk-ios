/*
 * Copyright 2010-2014 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#import <Foundation/Foundation.h>
#import "../core/http/AWSMobileAnalyticsRequest.h"
#import "../core/AWSMobileAnalyticsContext.h"

@interface AWSMobileAnalyticsERSRequestBuilder : NSObject
+(AWSMobileAnalyticsERSRequestBuilder *)builderWithConfiguration:(id<AWSMobileAnalyticsConfiguration>)configuration
                                  withHttpClient:(id<AWSMobileAnalyticsHttpClient>)httpClient
                              withApplicationKey:(NSString*)applicationKey
                                    withUniqueId:(NSString*)uniqueId;

-(id<AWSMobileAnalyticsRequest>)buildWithObjects:(NSArray *)theObjects;
@end