//
//  Deck.h
//  Matchismo
//
//  Created by 杜 艺卓 on 13-10-30.
//  Copyright (c) 2013年 BJTU. All rights reserved.
//

@import Foundation;
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
