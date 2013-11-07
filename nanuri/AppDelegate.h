//
//  AppDelegate.h
//  nanuri
//
//  Created by Hong kijoo on 13. 11. 7..
//  Copyright (c) 2013년 Hong kijoo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NMapViewController.h"
#import "GAI.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
	NMapViewController *mapViewController;
    
}
@property(nonatomic, strong) id<GAITracker> tracker;
@property (strong, nonatomic) UIWindow *window;

@end
