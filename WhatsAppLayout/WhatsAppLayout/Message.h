//
//  Message.h
//  WhatsAppLayout
//
//  Created by Hannibal Yang on 11/10/14.
//  Copyright (c) 2014 Hannibal Yang. All rights reserved.
//

#import <Foundation/Foundation.h>

// 固定取值一定要用枚举，体现自己的编程经验、水平和思想
// 枚举常量以枚举类型开头 MessageTypeMe -> 编程规范
// 或者枚举常量以 k + 枚举类型 开头
typedef enum {
    MessageTypeMe = 0, // 我发的信息状态
    MessageTypeOther = 1 // 别人发的信息状态
} MessageType;
@interface Message : NSObject

@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSString *icon;
@property (nonatomic, copy) NSString *time;
@property (nonatomic, assign) MessageType type;

+ (id)messageWithDict:(NSDictionary *)dict;

@end
