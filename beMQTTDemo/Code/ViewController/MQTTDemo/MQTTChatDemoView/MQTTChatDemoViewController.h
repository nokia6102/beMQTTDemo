//
//  MainViewController.h
//  beMQTTDemo
//
//  Created by Ben Cheng on 2016/10/9, Tainan City, Taiwan
//  Copyright 2016 Ben Cheng. All rights reserved.
///

#import <UIKit/UIKit.h>


@interface MQTTChatDemoViewController : UIViewController {

}

- (instancetype)initWithServerIP:(NSString *)srvipaddr port:(NSUInteger)srvport clientName:(NSString *)name;

@end
