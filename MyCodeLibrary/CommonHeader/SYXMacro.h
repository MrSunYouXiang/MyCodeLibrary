//
//  SYXMacro.h
//  MyCodeLibrary
//
//  Created by syx on 2018/12/28.
//  Copyright © 2018 syx. All rights reserved.
//

#ifndef SYXMacro_h
#define SYXMacro_h

#define kScreenWidth            CGRectGetWidth([[UIScreen mainScreen] bounds])
#define kScreenHeight           CGRectGetHeight([[UIScreen mainScreen] bounds])
#define kAppStatusBarHeight     ([[UIApplication sharedApplication] statusBarFrame].size.height)

#define kSysVersion             [[[UIDevice currentDevice] systemVersion] floatValue]






#endif /* SYXMacro_h */
