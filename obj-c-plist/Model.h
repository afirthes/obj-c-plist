//
//  main.m
//  obj-c-plist
//
//  Created by sehio on 10.07.2021.
//
#import <Foundation/Foundation.h>

@interface Model : NSObject

@property (nonatomic, strong) NSArray *list;

- (void) addColor:(NSString *)colorName;
- (void) saveListToFile;
- (BOOL) loadListFromFile:(NSString *)filename;

@end
