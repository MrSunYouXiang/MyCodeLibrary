//
//  UIView+SYXXIB.m
//  MyCodeLibrary
//
//  Created by syx on 2018/12/29.
//  Copyright © 2018 syx. All rights reserved.
//

#import "UIView+SYXXIB.h"

@implementation UIView (SYXXIB)

+ (id)ViewInitLoadXib
{
     return [[[NSBundle mainBundle] loadNibNamed:NSStringFromClass([self class]) owner:nil options:nil] firstObject];
}

@end
