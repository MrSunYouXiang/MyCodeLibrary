//
//  NSString+AutoSize.m
//  MyCodeLibrary
//
//  Created by syx on 2018/12/29.
//  Copyright © 2018 syx. All rights reserved.
//

#import "NSString+AutoSize.h"

@implementation NSString (AutoSize)

- (float)widthSystemFontOfSize:(CGFloat)fontSize{
    return [self widthSystemFont: [UIFont systemFontOfSize: fontSize]];
}

- (float)widthSystemFont:(UIFont *)font{
    CGRect sizeWidthRect = [self boundingRectWithSize:CGSizeMake(MAXFLOAT, 0.0f) options:NSStringDrawingUsesLineFragmentOrigin | NSStringDrawingTruncatesLastVisibleLine | NSStringDrawingUsesFontLeading attributes:@{NSFontAttributeName:font} context:nil];
    return sizeWidthRect.size.width;
}

- (float)heightSystemFontOfSize:(float)fontSize width:(CGFloat)width{
    return [self heightSystemFont: [UIFont systemFontOfSize: fontSize] width: width];
}

- (float)heightSystemFont:(UIFont *)font width:(CGFloat)width{
    CGRect sizeHeightRect = [self boundingRectWithSize:CGSizeMake(width, MAXFLOAT) options:NSStringDrawingUsesLineFragmentOrigin | NSStringDrawingUsesFontLeading | NSStringDrawingTruncatesLastVisibleLine attributes:@{NSFontAttributeName:font} context:nil];
    return sizeHeightRect.size.height;
}

- (BOOL)containsString:(NSString *)str
{
    if ([self rangeOfString:str].location != NSNotFound) {
        return YES;
    }
    return NO;
}

@end
