//
//  DetailViewController.h
//  CoreDataTest
//
//  Created by Alexis Manganiello on 27/07/2014.
//  Copyright (c) 2014 Alexis Manganiello. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
