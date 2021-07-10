//
//  Model.h
//  PlistDemo
//
//  Created by Developer on 12/19/13.
//  Copyright (c) 2013 EDUMobile. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Model : NSObject

@property (nonatomic, strong) NSArray *list;

- (void) addColor:(NSString *)colorName;
- (void) saveListToFile;
- (BOOL) loadListFromFile:(NSString *)filename;

@end
