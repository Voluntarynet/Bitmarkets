//
//  MKUpdateMessage.m
//  Bitmarkets
//
//  Created by Steve Dekorte on 12/8/14.
//  Copyright (c) 2014 voluntary.net. All rights reserved.
//
// example update message

/*
 
{
    "_type" : "UpdateMsg",
    "version" : "0.0",
    "url" : "https://voluntary.net.s3.amazonaws.com/Bitmarkets.0.0.zip",
    "message" : "lots of fixes",
    "hashSha256" : "...",
    "commitHash" : "...",
}
 
*/

#import "MKUpdateMessage.h"

@implementation MKUpdateMessage

- (NSString *)currentVersion
{
    NSDictionary *info = [NSBundle bundleForClass:[self class]].infoDictionary;
    NSString *versionString = [info objectForKey:@"CFBundleVersion"];
    return versionString;
}

- (NSString *)version
{
    return [self.dict objectForKey:@"version"];
}

- (NSComparisonResult)compare:(id)anObject
{
    return [self.version versionCompare:[(MKUpdateMessage *)anObject version]];
}

- (BOOL)isNewer
{
    return [self.version versionCompare:self.currentVersion] == NSOrderedDescending;
}

- (BOOL)isCurrentVersion
{
    return [self.version versionCompare:self.currentVersion] == NSOrderedSame;
}

- (void)deleteIfOlder
{
    if (!self.isNewer)
    {
        [self.bmMessage delete];
    }
}

- (void)showAlert
{
    
}
    
@end
