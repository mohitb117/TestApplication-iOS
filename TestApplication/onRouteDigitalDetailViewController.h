//
//  onRouteDigitalDetailViewController.h
//  TestApplication
//
//  Created by OnRouteDevTeam on 5/16/13.
//  Copyright (c) 2013 OnRouteDevTeam. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface onRouteDigitalDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
