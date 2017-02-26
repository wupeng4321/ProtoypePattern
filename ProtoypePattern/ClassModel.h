//
//  ClassModel.h
//  ProtoypePattern
//
//  Created by wupeng on 2017/2/26.
//  Copyright © 2017年 wupeng. All rights reserved.
//

#import "BaseCopyObject.h"

@interface ClassModel : BaseCopyObject

@property (nonatomic, strong) NSString  *className;

@property (nonatomic, strong) NSArray   *students;

@end
