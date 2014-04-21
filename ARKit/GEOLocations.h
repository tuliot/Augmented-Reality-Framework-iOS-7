//
//  GEOLocations.h
//  AR Kit
//
//  Created by Tulio Troncoso on April 2014
//  Copyright 2013 Agilite Software. All rights reserved.
//

#import "ARLocationDelegate.h"
 
@class ARCoordinate;

@interface GEOLocations : NSObject

@property(nonatomic,assign) id<ARLocationDelegate> delegate;

- (id)initWithDelegate:(id<ARLocationDelegate>) aDelegate;
- (NSMutableArray*)returnLocations;


@end
