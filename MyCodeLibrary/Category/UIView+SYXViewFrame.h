//
//  UIView+SYXViewFrame.h
//  MyCodeLibrary
//
//  Created by syx on 2019/1/4.
//  Copyright © 2019 syx. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (SYXViewFrame)

CGPoint CGRectGetCenter(CGRect rect);
CGRect  CGRectMoveToCenter(CGRect rect, CGPoint center);

@property CGPoint origin;
@property CGSize size;

@property (readonly) CGPoint bottomLeft;
@property (readonly) CGPoint bottomRight;
@property (readonly) CGPoint topRight;

@property CGFloat height;
@property CGFloat width;

@property CGFloat top;
@property CGFloat left;

@property CGFloat bottom;
@property CGFloat right;

- (void) moveBy: (CGPoint) delta;
- (void) scaleBy: (CGFloat) scaleFactor;
- (void) fitInSize: (CGSize) aSize;

//获得视图的父控制器
- (UIViewController *)getParentviewController;
//设置push后的界面的leftItem只是箭头，且title为白色
- (void)setPushToViewLeftItemNil;
- (void)setTabBarPushToViewLeftItemNil;

//把颜色转为图片
+ (UIImage *)createImageWithColor: (UIColor *) color;

+ (UIImage *)createImageWithColor: (UIColor *) color size:(CGSize)size;
@end

NS_ASSUME_NONNULL_END
