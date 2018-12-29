//
//  NSString+SYXBase64.h
//  MyCodeLibrary
//
//  Created by syx on 2018/12/29.
//  Copyright © 2018 syx. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (SYXBase64)

- (NSString *)base64EncodeString:(NSString *)string;
- (NSString *)base64DecodeString:(NSString *)base64String;

@end

NS_ASSUME_NONNULL_END
