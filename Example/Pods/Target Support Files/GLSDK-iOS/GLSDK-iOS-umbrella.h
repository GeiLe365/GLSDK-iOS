#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "GLManager.h"
#import "GLSDK.h"
#import "GLToastHudView.h"
#import "GLWXApiManager.h"

FOUNDATION_EXPORT double GLSDK_iOSVersionNumber;
FOUNDATION_EXPORT const unsigned char GLSDK_iOSVersionString[];

