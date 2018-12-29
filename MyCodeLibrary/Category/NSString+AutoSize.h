//
//  NSString+AutoSize.h
//  MyCodeLibrary
//
//  Created by syx on 2018/12/29.
//  Copyright © 2018 syx. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (AutoSize)

- (float)widthSystemFontOfSize:(CGFloat)fontSize;
- (float)widthSystemFont:(UIFont *)font;
- (float)heightSystemFont:(UIFont *)font width:(CGFloat)width;
- (float)heightSystemFontOfSize:(float)fontSize width:(CGFloat)width;

- (BOOL)containsString:(NSString *)str;

@end

NS_ASSUME_NONNULL_END
