//  CarFactory.h
//  DesignPattern
//
//  Created by 冯铁军 on 2019/6/3.
//  Copyright © 2019年 冯铁军. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Tyre.h"
#import "Glass.h"
#import "Engine.h"
NS_ASSUME_NONNULL_BEGIN

@interface CarFactory : NSObject
+ (Tyre *)createTyre;
+ (Glass *)createGlass;
+ (Engine *)createEngine;

@end

NS_ASSUME_NONNULL_END
