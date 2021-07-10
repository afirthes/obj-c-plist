//
//  TableViewController.h
//  PlistDemo
//
//  Created by Developer on 12/19/13.
//  Copyright (c) 2013 EDUMobile. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Model.h"
#import "AddingViewController.h"

@interface TableViewController : UITableViewController
<AddingDelegate>

@property (nonatomic, strong) Model *model;

@end
