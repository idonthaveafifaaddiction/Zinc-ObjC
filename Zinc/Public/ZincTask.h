//
//  ZincTask.h
//  Zinc-iOS
//
//  Created by Andy Mroczkowski on 1/10/12.
//  Copyright (c) 2012 MindSnacks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZincGlobals.h"
#import "ZincOperation.h"

@class ZincRepo;
@class ZincTaskDescriptor;

@interface ZincTask : ZincOperation

+ (id) taskWithDescriptor:(ZincTaskDescriptor*)taskDesc repo:(ZincRepo*)repo;
+ (id) taskWithDescriptor:(ZincTaskDescriptor*)taskDesc repo:(ZincRepo*)repo input:(id)input;

- (ZincTaskDescriptor*) taskDescriptor;

@property (nonatomic, weak, readonly) ZincRepo* repo;
@property (nonatomic, strong, readonly) NSURL* resource;
@property (nonatomic, strong, readonly) id input;

@property (readonly, copy) NSString* title;

/**
 @discussion All child operations queued by this Task.
 */
@property (weak, readonly) NSArray* childOperations;

/**
 @discussion All child operations queued by this Task that are also ZincTasks
 */
@property (weak, readonly) NSArray* childTasks;

/**
 @discussion all events including events from child tasks 
 */
- (NSArray*) allEvents;

/**
 @discussion all errors that occurred including errors from child tasks
 */
- (NSArray*) allErrors;

@end
