//
//  BaseCopyObject.h
//  ProtoypePattern
//
//  Created by wupeng on 2017/2/26.
//  Copyright © 2017年 wupeng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BaseCopyObject : NSObject <NSCopying>


/**
 子类不需要重载

 @param zone zone
 @return 复制的对象
 */
- (id)copyWithZone:(NSZone *)zone;


/**
 由子类重载实现

 @param object 已经复制的对象
 */
- (void)copyOperationWithObject:(id)object;

@end
