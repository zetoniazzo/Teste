//
//  MasterViewController.h
//  Teste
//
//  Created by Jose Toniazzo on 21/09/12.
//  Copyright (c) 2012 Jose Toniazzo. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
