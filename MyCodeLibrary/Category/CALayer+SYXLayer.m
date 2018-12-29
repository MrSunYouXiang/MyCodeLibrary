//
//  CALayer+SYXLayer.m
//  MyCodeLibrary
//
//  Created by syx on 2018/12/29.
//  Copyright © 2018 syx. All rights reserved.
//

#import "CALayer+SYXLayer.h"

@implementation CALayer (SYXLayer)

- (void)setBorderColorFromUIColor:(UIColor *)color
{
     self.borderColor = color.CGColor;
}

@end
