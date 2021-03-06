//
//  KHButton.h
//  KHTools
//
//  Created by Kosuke Hata on 7/6/13.
//  Copyright (c) 2013 Animal Robo. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    kKHButtonBack,
    kKHButtonImage,
    kKHButtonNormal,
    kKHButtonTypeMenu,
    kKHButtonTypeLocation,
    kKHButtonTypeBack,
    kKHButtonTypeNext,
    kKHButtonTypeYes,
    kKHButtonTypeNo,
    kKHBUttonTypePassword,
    kKHButtonTypeCancel,
    kKHBUttonTypeDone,
    kKHButtonTypeLogin,
    kKHButtonTypeLogout,
    kKHButtonTypeSignup,
    kKHButtonTypeHelp,
    kKHButtonTypeFacebookButton,
} KHButtonType;

@class KHButton;

@protocol KHButtonDelegate <NSObject>

@required
- (void)buttonWasTouchedUpInside:(KHButton *)button;

@optional
- (void)buttonWasTouchedUpOutside:(KHButton *)button;
- (void)buttonWasTouchedDown:(KHButton *)button;

@end

@interface KHButton : UIView {
    
}

@property (nonatomic, weak) id <KHButtonDelegate> delegate;
@property (nonatomic, strong) UIButton *button;
@property (nonatomic, strong) NSString *name;
@property (nonatomic) BOOL makeSound;


+ (KHButton *)buttonWithColor:(UIColor *)color withSize:(CGSize)size andTitle:(NSString *)title;
+ (KHButton *)buttonWithSize:(CGSize)size andImage:(UIImage *)image;

// initialization methods
- (id)initWithButtonSize:(CGSize)size
               withColor:(UIColor *)buttonColor
               withTitle:(NSString *)title;

- (id)initWithButtonSizeForImage:(CGSize)size;

// setter methods
- (void)setButtonColor:(UIColor *)bgColor;
- (void)setButtonFont:(NSString *)font withSize:(float)size;
- (void)setCornerRadius:(float)cornerRadius;
- (void)setButtonImage:(UIImage *)image;
- (void)setButtonTitle:(NSString *)title;
- (void)setButtonTextColor:(UIColor *)textColor;

// getter methods
- (UIImage *)getButtonImage;

// Animation fade in and out
- (void)fadeButtonIn;
- (void)fadeButtonOut;

// change alpha to 1, or 0
- (void)hideButton;
- (void)showButton;

@end