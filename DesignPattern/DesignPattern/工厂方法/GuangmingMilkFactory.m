//  GuangmingMilkFactory.m
//  DesignPattern
//
//  Created by 冯铁军 on 2019/6/3.
//  Copyright © 2019年 冯铁军. All rights reserved.
//

#import "GuangmingMilkFactory.h"
#import "GuangmingMilk.h"
@implementation GuangmingMilkFactory
+ (Milk *)createMilk{
    return GuangmingMilk.new;
}
@end
