//
//  DetailViewController.h
//  Teste
//
//  Created by Jose Toniazzo on 21/09/12.
//  Copyright (c) 2012 Jose Toniazzo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
