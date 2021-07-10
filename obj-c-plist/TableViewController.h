//
//  main.m
//  obj-c-plist
//
//  Created by sehio on 10.07.2021.
//

#import <UIKit/UIKit.h>
#import "Model.h"
#import "AddingViewController.h"

@interface TableViewController : UITableViewController
<AddingDelegate>

@property (nonatomic, strong) Model *model;

@end
