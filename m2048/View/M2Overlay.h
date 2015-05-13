//
//  M2Overlay.h
//  m2048
//
//  Created by Danqing on 3/25/14.
//  Copyright (c) 2014 Danqing. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface M2Overlay : UIView

@property (nonatomic, weak) IBOutlet UILabel *message;

@property (nonatomic, weak) IBOutlet UIButton *keepPlaying;

@property (nonatomic, weak) IBOutlet UIButton *restartGame;

@property (nonatomic, weak) IBOutlet UILabel *timerLabel;

@property (nonatomic, weak) IBOutlet UILabel *timer;

@property (nonatomic, weak) IBOutlet UIButton *viewAd;

@end
