//  BMWCarFactory.m
//  DesignPattern
//
//  Created by 冯铁军 on 2019/6/3.
//  Copyright © 2019年 冯铁军. All rights reserved.
//

#import "BMWCarFactory.h"

@implementation BMWCarFactory
+ (BMWTyre *)createTyre{
    return BMWTyre.new;
}
+ (BMWGlass *)createGlass{
    return BMWGlass.new;
}
+ (BMWEngine *)createEngine{
    return BMWEngine.new;
}
@end
