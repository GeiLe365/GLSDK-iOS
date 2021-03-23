//
//  GLManager.h
//  GLSDKDemo
//
//  Created by GUO on 2020/11/27.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, GLEnvironmentType) {
    GLEnvironmentTypePro = 1, //生产环境
    GLEnvironmentTypeDev = 2, //开发环境
    GLEnvironmentTypeTest = 3,//测试环境
};

typedef NS_ENUM(NSUInteger, GLErrorCode) {
    GLErrorCodeLogin = 1, // 请先登录
    GLErrorCodeAuthorize = 2, //需要授权
    GLErrorCodeRefreshToken = 3, //刷新token
};

typedef void(^GLErrorCodeBlock)(GLErrorCode errorCode ,NSString *companyId, NSString *companyName, NSString *companyIcon);
typedef void(^GLNavigationBlock)(UINavigationController *navigationController);
@interface GLManager : NSObject

@property (nonatomic, copy) GLErrorCodeBlock errorCodeBlock;
@property (nonatomic, copy) GLNavigationBlock navigationBlock;

+ (instancetype)sharedManage;
/**
 SDK入口
 需配置一些分享key与百度定位key
 */

- (void)initWithWechatKey:(NSString *)wechatKey wechatSecrt:(NSString *)wechatSecrt qqKey:(NSString *)qqKey qqSecrt:(NSString *)qqSecrt baiduMapKey:(NSString *)baiduMapKey umAppKey:(NSString *)umAppKey thirdToken:(NSString *)thirdToken coopPartnetNo:(NSString *)coopPartnetNo wxUniversalLink:(NSString *)wxUniversalLink qqUniversalLink:(NSString *)qqUniversalLink environment:(GLEnvironmentType)environmentType;
/**
 打开默认页面
 */
- (void)openShopComplete:(GLErrorCodeBlock)complete;
/**
 打开其它页面 需传入URL - 可扫一扫使用
 */
- (void)openShopWithUrl:(NSString *)url complete:(GLErrorCodeBlock)complete;
/**
 获取当前环境
 */
- (GLEnvironmentType)getCurrentEnvironment;
/**
 设置当前登录token
 */
- (void)setCurrentToken:(NSString *)currentToken;
/**
 获取当前登录token以及合作ID
 */
- (NSDictionary *)getCurrentTokenAndCoopNo;
/**
 授权成功或失败都需调用此方法
 */
- (void)onAuthorization:(BOOL)isAuthorization;
/**
 跳转到钱包(暂时不用)
 */
- (void)onWalletCompelte:(GLNavigationBlock)complete;
/**
 微信支付回调
 */
- (void)wxCallBack:(NSString *)errorCode;
@end

NS_ASSUME_NONNULL_END
