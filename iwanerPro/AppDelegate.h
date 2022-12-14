//
//  AppDelegate.h
//  iwanerPro
//
//  Created by liyuanbo on 7/21/15.
//  Copyright (c) 2015 iwaner. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "MeViewController.h"
#import "FindViewController.h"
#import "PublicViewController.h"
#import "FriendsViewController.h"
#import "IwanViewController.h"
#import "PublicContentViewController.h"
#import "LoginViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate,UITabBarControllerDelegate,LoginViewControllerDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic,strong) MeViewController *meViewController;
@property (nonatomic,strong) FindViewController *findViewController;
@property (nonatomic,strong) PublicViewController *publicViewController;
@property (nonatomic,strong) FriendsViewController *friendsViewController;
@property (nonatomic,strong) IwanViewController *iwanViewController;
@property (nonatomic,strong) BSNavgationController *loginNav,*iwanNavi,*friendsNavi,*publicNavi,*findNavi,*meNavi;

@property(nonatomic,strong)LoginViewController  *loginViewController;

@end


