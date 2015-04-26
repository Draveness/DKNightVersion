//
//  DKNightVersionManager.h
//  DKNightVersionManager
//
//  Created by apple on 4/14/15.
//  Copyright (c) 2015 DeltaX. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    DKThemeVersionNormal,
    DKThemeVersionNight,
} DKThemeVersion;

@protocol DKNightVersionSwichColorProtocol <NSObject>

- (void)switchColor;
- (NSArray *)subviews;

@end

@interface DKNightVersionManager : NSObject

/**
 *  @author Draveness
 *
 *  Returns global DKNightVersionManager instance.
 *
 *  @return DKNightVersionManager shared instance
 */
+ (DKNightVersionManager *)sharedNightVersionManager;

/**
 *  @author Draveness
 *
 *  Night falling
 */
- (void)nightFalling;

/**
 *  @author Draveness
 *
 *  Dawn coming
 */
- (void)dawnComing;


@end
