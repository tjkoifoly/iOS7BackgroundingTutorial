//
//  CTCFirstViewController.h
//  iOS7BackgroundingTutorial
//
//  Created by Brian H Mayo on 9/21/13.
//  Copyright (c) 2013 CapTech Consulting. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CTCArticlesModel.h"

@interface CTCViewController : UITableViewController

- (void)updateArticlesWithCompletionHandler:(RefreshCompletionHandler)completionHandler;

@end
