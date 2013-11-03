//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by 杜 艺卓 on 13-11-3.
//  Copyright (c) 2013年 BJTU. All rights reserved.
//

@import Foundation;
#import "Deck.h"
#import "Card.h"

@interface CardMatchingGame : NSObject

@property (nonatomic, readonly) NSInteger score;

- (id)initWithCardCount:(NSUInteger)count
              usingDeck:(Deck *)deck;
- (void)chooseCardAtIndex:(NSUInteger)index;
- (Card *)cardAtIndex:(NSUInteger)index;

@end
