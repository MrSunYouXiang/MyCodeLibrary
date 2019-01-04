//
//  UIView+SYXCaptureImage.h
//  MyCodeLibrary
//
//  Created by syx on 2019/1/4.
//  Copyright © 2019 syx. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (SYXCaptureImage)

- (UIImage *)captureImage;

- (UIImage *)captureImageAtRect:(CGRect)rect;

@end

NS_ASSUME_NONNULL_END
