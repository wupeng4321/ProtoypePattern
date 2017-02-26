//
//  Student.h
//  ProtoypePattern
//
//  Created by wupeng on 2017/2/26.
//  Copyright © 2017年 wupeng. All rights reserved.
//

#import "BaseCopyObject.h"

@interface Student : BaseCopyObject

@property (nonatomic, copy) NSString *name;

@property (nonatomic, strong) NSNumber *age;

@end
