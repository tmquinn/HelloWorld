//
//  HelloWorldAppDelegate.m
//  HelloWorld
//
//  Created by Quinn Hoyer on 5/1/10.
//  Copyright Yahoo! 2010. All rights reserved.
//

#import "HelloWorldAppDelegate.h"

#import "MyViewController.h"

@implementation HelloWorldAppDelegate

@synthesize window;

@synthesize myViewController;


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {    

    // Override point for customization after application launch
	MyViewController *aViewController = [[MyViewController alloc]
										 initWithNibName:@"MyViewController" bundle:[NSBundle mainBundle]];
	[self setMyViewController:aViewController];
	[aViewController release];
	
	UIView *controllersView = [myViewController view];
	[window addSubview:controllersView];
										 
										 
    [window makeKeyAndVisible];
	
	return YES;
}


- (void)dealloc {
	[myViewController release];
    [window release];
    [super dealloc];
}


@end
