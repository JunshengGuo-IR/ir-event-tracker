//
//  irAppDelegate.h
//  DemoApplication
//
//  Created by Tyler Thomas on 1/10/13.
//  Copyright (c) 2013 Impact Radius. All rights reserved.
//

#import <UIKit/UIKit.h>

@class irViewController;

@interface irAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) irViewController *viewController;

@end
