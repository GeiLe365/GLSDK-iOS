//
//  GLToastHudView.h
//  GLSDKDemo
//
//  Created by GUO on 2020/12/1.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN


@interface GLToastHudView : UIView

+ (GLToastHudView *)sharedInstance;
- (void)ShowMessage:(NSString *)msg;

@end

NS_ASSUME_NONNULL_END
