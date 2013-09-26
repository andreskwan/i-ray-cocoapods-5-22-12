//
//  KwaN_ViewController.h
//  CocoaPodsExample-5-22-12
//
//  Created by Andres Kwan on 9/25/13.
//  Copyright (c) 2013 Kwan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KwaN_ViewController : UIViewController <UIScrollViewDelegate>


@property (weak, nonatomic) IBOutlet UIScrollView *showScrollView;
@property (weak, nonatomic) IBOutlet UIPageControl *showPageControl;


- (IBAction)pageChanged;

@end
