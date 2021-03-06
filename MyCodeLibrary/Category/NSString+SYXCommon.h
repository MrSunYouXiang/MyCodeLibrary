//
//  NSString+SYXCommon.h
//  MyCodeLibrary
//
//  Created by syx on 2019/1/3.
//  Copyright © 2019 syx. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (SYXCommon)

//是否为空
+ (BOOL)isEmpty:(NSString *)string;

//当前字符串是否只包含空白字符和换行符
- (BOOL)isWhitespaceAndNewlines;

//去除字符串前后的空白,不包含换行符
- (NSString *)trim;

//去除字符串中所有空白
- (NSString *)removeWhiteSpace;
- (NSString *)removeNewLine;

//将字符串以URL格式编码
- (NSString *)stringByUrlEncoding;

- (NSString *)capitalize;

//以给定字符串开始,忽略大小写
- (BOOL)startsWith:(NSString *)str;
//以指定条件判断字符串是否以给定字符串开始
- (BOOL)startsWith:(NSString *)str Options:(NSStringCompareOptions)compareOptions;


//以给定字符串结束，忽略大小写
- (BOOL)endsWith:(NSString *)str;
//以指定条件判断字符串是否以给定字符串结尾
- (BOOL)endsWith:(NSString *)str Options:(NSStringCompareOptions)compareOptions;

//包含给定的字符串, 忽略大小写
- (BOOL)containsString:(NSString *)str;
//以指定条件判断是否包含给定的字符串
- (BOOL)containsString:(NSString *)str Options:(NSStringCompareOptions)compareOptions;

//判断字符串是否相同，忽略大小写
- (BOOL)equalsString:(NSString *)str;


@end

NS_ASSUME_NONNULL_END
