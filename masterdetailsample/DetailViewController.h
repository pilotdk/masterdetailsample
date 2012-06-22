//
//  DetailViewController.h
//  masterdetailsample
//
//  Created by Peter Johan Bruun on 22/06/12.
//  Copyright (c) 2012 CPI Hyllested. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
