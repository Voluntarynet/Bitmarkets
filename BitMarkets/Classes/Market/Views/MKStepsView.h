//
//  MKStepsView.h
//  BitMarkets
//
//  Created by Steve Dekorte on 6/10/14.
//  Copyright (c) 2014 voluntary.net. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <NavKit/NavKit.h>

@interface MKStepsView : NavColoredView

@property (assign, nonatomic) NavNode *node; // transaction

@property (assign, nonatomic) id delegate;


@end
