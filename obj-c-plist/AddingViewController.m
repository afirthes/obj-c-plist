//
//  AddingViewController.m
//  PlistDemo
//
//  Created by Developer on 12/19/13.
//  Copyright (c) 2013 EDUMobile. All rights reserved.
//

#import "AddingViewController.h"

@interface AddingViewController ()

@end

@implementation AddingViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (IBAction)finishedEditing:(UITextField *)sender
{
    [sender resignFirstResponder];
}

- (IBAction)btnOK:(id)sender
{
    [self.delegate colorWasAdded:self.color.text];
    [self.navigationController popToRootViewControllerAnimated:YES];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
