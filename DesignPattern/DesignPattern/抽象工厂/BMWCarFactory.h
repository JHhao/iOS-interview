//  BMWCarFactory.h
//  DesignPattern
//
//  Created by 冯铁军 on 2019/6/3.
//  Copyright © 2019年 冯铁军. All rights reserved.
//

#import "CarFactory.h"

NS_ASSUME_NONNULL_BEGIN

@interface BMWCarFactory : CarFactory
+ (BMWTyre *)createTyre;
+ (BMWGlass *)createGlass;
+ (BMWEngine *)createEngine;
@end

NS_ASSUME_NONNULL_END
