//
//  Model.m
//  PlistDemo
//
//  Created by Developer on 12/19/13.
//  Copyright (c) 2013 EDUMobile. All rights reserved.
//

#import "Model.h"

@implementation Model

- (NSArray *) list
{
    if (!_list) {
        if (![self loadListFromFile:@"colors.plist"]) {
            _list = @[@"red", @"green", @"blue"];
        }
        
    }
    return _list;
}

- (void) addColor:(NSString *)colorName
{
    NSMutableArray *tempList = [self.list mutableCopy];
    [tempList addObject:colorName];
    self.list = tempList;
}

- (void) saveListToFile
{
    NSString *filePath = [self docDirPathForFileName:@"colors.plist"];
    [self.list writeToFile:filePath atomically:YES];
}

- (BOOL) loadListFromFile:(NSString *)filename
{
    BOOL fileExists = NO;
    NSString *filePath = [self docDirPathForFileName:filename];
    if ([[NSFileManager defaultManager] fileExistsAtPath:filePath]) {
        self.list = [NSArray arrayWithContentsOfFile:filePath];
        fileExists = YES;
    }
    return fileExists;
}

- (NSString *)docDirPathForFileName:(NSString *)filename
{
    NSArray *allDocPaths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    NSString *baseDocPath = [allDocPaths objectAtIndex:0];
    return [baseDocPath stringByAppendingPathComponent:filename];
}

@end
