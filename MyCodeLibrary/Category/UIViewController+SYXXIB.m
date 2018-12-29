//
//  UIViewController+SYXXIB.m
//  MyCodeLibrary
//
//  Created by syx on 2018/12/29.
//  Copyright © 2018 syx. All rights reserved.
//

#import "UIViewController+SYXXIB.h"

@implementation UIViewController (SYXXIB)

+ (id)ViewControllerInitLoadXib
{
     return [[self alloc] initWithNibName:NSStringFromClass([self class]) bundle:nil];
}

@end
