//
//  MKBuyerPostLockEscrowMsg.h
//  BitMarkets
//
//  Created by Steve Dekorte on 5/7/14.
//  Copyright (c) 2014 voluntary.net. All rights reserved.
//

#import "MKEscrowMsg.h"

@interface MKBuyerPostLockEscrowMsg : MKEscrowMsg

- (void)setupFromSellerPayload:(NSString *)aPayload;
- (BOOL)postToBlockchain;

- (BOOL)isConfirmed;
- (BOOL)isCancelled;

@end