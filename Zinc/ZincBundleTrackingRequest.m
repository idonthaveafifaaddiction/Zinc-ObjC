//
//  ZincBundleTrackingRequest.m
//  Zinc-ObjC
//
//  Created by Andy Mroczkowski on 8/9/12.
//  Copyright (c) 2012 MindSnacks. All rights reserved.
//

#import "ZincBundleTrackingRequest.h"

@implementation ZincBundleTrackingRequest


+ (ZincBundleTrackingRequest*) bundleTrackingRequestWithBundleID:(NSString*)bundleID
                                                    distribution:(NSString*)distribution
                                                          flavor:(NSString*)flavor
                                             automaticallyUpdate:(BOOL)automaticallyUpdate
{
    ZincBundleTrackingRequest* req = [[ZincBundleTrackingRequest alloc] init];
    req.bundleID = bundleID;
    req.distribution = distribution;
    req.flavor = flavor;
    req.updateAutomatically = automaticallyUpdate;
    return req;
}

+ (ZincBundleTrackingRequest*) bundleTrackingRequestWithBundleID:(NSString*)bundleID
                                                    distribution:(NSString*)distribution
                                             automaticallyUpdate:(BOOL)automaticallyUpdate
{
    ZincBundleTrackingRequest* req = [[ZincBundleTrackingRequest alloc] init];
    req.bundleID = bundleID;
    req.distribution = distribution;
    req.updateAutomatically = automaticallyUpdate;
    return req;
}

@end
