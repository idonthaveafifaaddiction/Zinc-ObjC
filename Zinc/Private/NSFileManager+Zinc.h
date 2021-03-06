//
//  NSFileManager+Zinc.h
//  Zinc-iOS
//
//  Created by Andy Mroczkowski on 12/5/11.
//  Copyright (c) 2011 MindSnacks. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSFileManager (Zinc)

- (BOOL) zinc_directoryExistsAtPath:(NSString*)path;
- (BOOL) zinc_directoryExistsAtURL:(NSURL*)url;

- (BOOL) zinc_createDirectoryIfNeededAtPath:(NSString*)path error:(NSError**)outError;
- (BOOL) zinc_createDirectoryIfNeededAtURL:(NSURL*)url error:(NSError**)outError;

- (BOOL) zinc_removeItemAtPath:(NSString*)path error:(NSError**)outError;

/**
 Convenience method for moving files.
 @param srcPath the source path
 @param dstPath the destination path
 @param failIfExists If YES, raise an error if the dstPath exists, if NO proceed without an error.
 @param error output params
 */
- (BOOL) zinc_moveItemAtPath:(NSString*)srcPath toPath:(NSString*)dstPath failIfExists:(BOOL)failIfExists error:(NSError**)error;

/**
 Like zinc_moveItemAtPath:toPath:failIfExists:error but failIfExists is NO
 */
- (BOOL) zinc_moveItemAtPath:(NSString*)srcPath toPath:(NSString*)dstPath error:(NSError**)error;

@end
