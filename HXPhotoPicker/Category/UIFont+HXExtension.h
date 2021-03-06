//
//  UIFont+HXExtension.h
//  HXPhotoPickerExample
//
//  Created by 洪欣 on 2017/10/14.
//  Copyright © 2017年 洪欣. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIFont (HXExtension)
+ (instancetype)hx_pingFangFontOfSize:(CGFloat)size;
+ (instancetype)hx_regularPingFangOfSize:(CGFloat)size;
+ (instancetype)hx_mediumPingFangOfSize:(CGFloat)size;
+ (instancetype)hx_boldPingFangOfSize:(CGFloat)size;
+ (instancetype)hx_helveticaNeueOfSize:(CGFloat)size;
+ (instancetype)hx_mediumHelveticaNeueOfSize:(CGFloat)size;
+ (instancetype)hx_mediumSFUITextOfSize:(CGFloat)size;
@end
