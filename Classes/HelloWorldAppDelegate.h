//
//  HelloWorldAppDelegate.h
//  HelloWorld
//
//  Created by Quinn Hoyer on 5/1/10.
//  Copyright Yahoo! 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MyViewController;

@interface HelloWorldAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	MyViewController *myViewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) MyViewController *myViewController;

@end

