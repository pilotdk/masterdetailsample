//
//  MasterViewController.h
//  masterdetailsample
//
//  Created by Peter Johan Bruun on 22/06/12.
//  Copyright (c) 2012 CPI Hyllested. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
