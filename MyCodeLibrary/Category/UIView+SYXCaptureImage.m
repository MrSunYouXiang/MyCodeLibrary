//
//  UIView+SYXCaptureImage.m
//  MyCodeLibrary
//
//  Created by syx on 2019/1/4.
//  Copyright © 2019 syx. All rights reserved.
//

#import "UIView+SYXCaptureImage.h"

@implementation UIView (SYXCaptureImage)

- (UIImage *)captureImage
{
    return [self captureImageAtRect:self.bounds];
}

- (UIImage *)captureImageAtRect:(CGRect)rect
{
    UIGraphicsBeginImageContextWithOptions(rect.size, NO, [[UIScreen mainScreen] scale]);
    CGContextRef context = UIGraphicsGetCurrentContext();
    CGContextTranslateCTM(context, rect.origin.x, rect.origin.y);
    [[self layer] renderInContext:context];
    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    
    return image;
}


@end
