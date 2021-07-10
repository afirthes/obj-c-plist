//
//  main.m
//  obj-c-plist
//
//  Created by sehio on 10.07.2021.
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
