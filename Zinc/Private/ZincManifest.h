//
//  ZCManifest.h
//  Zinc-iOS
//
//  Created by Andy Mroczkowski on 12/5/11.
//  Copyright (c) 2011 MindSnacks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZincGlobals.h"
#import "ZincModelObject.h"

@interface ZincManifest : ZincModelObject

+ (ZincManifest*) manifestWithPath:(NSString*)path error:(NSError**)outError;

- (id) init;
- (id) initWithDictionary:(NSDictionary*)dict;

@property (nonatomic, copy) NSString* bundleName;
@property (nonatomic, copy) NSString* catalogID;
@property (nonatomic, assign) ZincVersion version;
@property (nonatomic, copy) NSArray* flavors;

@property (nonatomic, readonly) NSString* bundleID;

- (NSString*) shaForFile:(NSString*)path;
- (NSArray*) formatsForFile:(NSString*)path;
- (NSString*) bestFormatForFile:(NSString*)path withPreferredFormats:(NSArray*)formats;
- (NSString*) bestFormatForFile:(NSString*)path;
- (NSUInteger) sizeForFile:(NSString*)path format:(NSString*)format;
- (NSArray*) flavorsForFile:(NSString*)path;

- (NSArray*) allFiles;
- (NSArray*) filesForFlavor:(NSString*)flavor;
- (NSArray*) allSHAs;
- (NSUInteger) fileCount;

- (NSURL*) bundleResource;

@end
