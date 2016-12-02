//
//  AppDelegate.h
//  learn-IOS
//
//  Created by Sunning on 2016/12/2.
//  Copyright © 2016年 Sunning. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

