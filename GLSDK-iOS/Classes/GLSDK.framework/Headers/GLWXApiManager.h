//
//  GLWXApiManager.h
//  GLSDKDemo
//
//  Created by GUO on 2020/11/26.
//

#import <Foundation/Foundation.h>
#import "WXApi.h"

NS_ASSUME_NONNULL_BEGIN

@interface GLWXApiManager : NSObject <WXApiDelegate>

@property (nonatomic,copy) void(^transferResult)(int errCode);
//@property (nonatomic, assign) id<WXApiManagerDelegate> delegate;
@property (nonatomic,copy) void(^transferAuthoResult)(NSString *code);

+ (instancetype)sharedManager;
@end

NS_ASSUME_NONNULL_END
