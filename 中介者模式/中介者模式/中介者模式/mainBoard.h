//
//  mainBoard.h
//  中介者模式
//
//  Created by 神州锐达 on 2017/11/15.
//  Copyright © 2017年 onePiece. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Cup.h"
#import "driver.h"
#import "videoCard.h"
@interface mainBoard : NSObject

+(instancetype)sharedBoard;

-(void)handleData:(NSString *)data dataSource:(id)source;

@end
