//
//  ToDoListTableViewController.h
//  ToDoList
//
//  Created by Alexis Manganiello on 27/07/2014.
//  Copyright (c) 2014 Alexis Manganiello. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ToDoListTableViewController : UITableViewController

@property (nonatomic,strong) NSManagedObjectContext* managedObjectContext;

- (IBAction)unwindToList:(UIStoryboardSegue *)segue;

@end
