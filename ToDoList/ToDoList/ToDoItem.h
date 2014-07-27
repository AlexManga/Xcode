//
//  ToDoItem.h
//  ToDoList
//
//  Created by Alexis Manganiello on 27/07/2014.
//  Copyright (c) 2014 Alexis Manganiello. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject


@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
