//
//  Card.h
//  Matchismo
//
//  Created by 杜 艺卓 on 13-10-30.
//  Copyright (c) 2013年 BJTU. All rights reserved.
//

@import Foundation;

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter = isChosen) BOOL chosen;
@property (nonatomic, getter = isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;
@end
