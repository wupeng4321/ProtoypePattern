//
//  Student.m
//  ProtoypePattern
//
//  Created by wupeng on 2017/2/26.
//  Copyright © 2017年 wupeng. All rights reserved.
//

#import "Student.h"

@implementation Student

- (void)copyOperationWithObject:(Student *)object {
    
    object.name = self.name;
    
    object.age  = self.age;
}


@end
