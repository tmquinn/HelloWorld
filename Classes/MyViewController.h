//
//  MyViewController.h
//  HelloWorld
//
//  Created by Quinn Hoyer on 5/1/10.
//  Copyright 2010 Yahoo!. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface MyViewController : UIViewController <UITextFieldDelegate> {
	UITextField *textField;
	UILabel *label;
	NSString *string;

}

@property (nonatomic, retain) IBOutlet UITextField *textField;
@property (nonatomic, retain) IBOutlet UILabel *label;
@property (nonatomic, retain) IBOutlet NSString *string;

- (IBAction)changeGreeting:(id)sender;

@end
