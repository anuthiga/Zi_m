//
//  AppDelegate.h
//  Zing_Mobile
//
//  Created by Anuthiga Sriskanthan on 12/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ZINGLogin;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (retain, nonatomic) IBOutlet ZINGLogin *login;
//@property (retain, nonatomic) IBOutlet ZINGManageEvents *manageEvents;
@end
