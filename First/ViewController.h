//
//  ViewController.h
//  First
//
//  Created by Arun Kumar on 14/07/15.
//  Copyright © 2015 Arun Kumar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    IBOutlet UILabel *mytext;
    NSMutableArray *tableData;
    NSMutableArray *tme;
    NSMutableArray *dat;
    NSMutableArray *ven;
NSMutableArray *rat;
NSMutableArray *description;
    NSMutableArray *EventId;
    NSMutableArray *Address;
     NSArray *thumbnails;
    NSArray *prepTime;

}
    -(IBAction)showMessage;

@property (nonatomic, strong) IBOutlet UITableView *tableView;


@end

