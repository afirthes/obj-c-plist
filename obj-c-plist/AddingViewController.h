//
//  AddingViewController.h
//  PlistDemo
//
//  Created by Developer on 12/19/13.
//  Copyright (c) 2013 EDUMobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AddingDelegate <NSObject>

- (void)colorWasAdded:(NSString *)colorName;

@end

@interface AddingViewController : UIViewController

@property (nonatomic, strong) id <AddingDelegate> delegate;
@property (nonatomic, strong) IBOutlet UITextField *color;

- (IBAction)finishedEditing:(UITextField *)sender;
- (IBAction)btnOK:(id)sender;

@end
