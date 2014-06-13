//
//  MKTransactionProgressView.h
//  BitMarkets
//
//  Created by Steve Dekorte on 6/4/14.
//  Copyright (c) 2014 voluntary.net. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <NavKit/NavKit.h>
#import "MKStepsView.h"
#import "MKTransaction.h"

@interface MKTransactionProgressView : NavColoredView

@property (assign, nonatomic) NavView *navView;
@property (assign, nonatomic) NavNode *node; // transaction

@property (strong, nonatomic) MKStepsView *stepsView;
@property (strong, nonatomic) NSView *statusView;
@property (strong, nonatomic) NSView *bottomView; // overlays grey

@end
