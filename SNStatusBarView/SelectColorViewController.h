//
//  SelectViewController.h
//  SNStatusBarView
//
//  Created by sonson on 2012/08/24.
//  Copyright (c) 2012年 sonson. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SelectColorViewController : UITableViewController

@property (nonatomic, strong) NSMutableArray *colors;
@property (nonatomic, strong) NSMutableArray *colorTitles;

- (IBAction)clear:(id)sender;

@end
