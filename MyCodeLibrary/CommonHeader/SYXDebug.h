//
//  SYXDebug.h
//  MyCodeLibrary
//
//  Created by syx on 2019/1/4.
//  Copyright © 2019 syx. All rights reserved.
//

#ifndef SYXDebug_h
#define SYXDebug_h

#ifdef DEBUG
#define NSLog(format, ...) printf("\n[%s] %s [第%d行] %s\n", __TIME__, __FUNCTION__, __LINE__, [[NSString stringWithFormat:format, ## __VA_ARGS__] UTF8String]);
#define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#define NSLog(format, ...)
#define DLog(...)
#endif

#endif /* SYXDebug_h */
