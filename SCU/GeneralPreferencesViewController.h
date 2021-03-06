//
//  GeneralPreferencesViewController.h
//  SCU
//
//  Created by Neo on 12/27/12.
//  Copyright (c) 2012 Neo. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "MASPreferencesViewController.h"
#import "AppDelegate.h"

@interface GeneralPreferencesViewController : NSViewController<MASPreferencesViewController> {
    AppDelegate *_delegate;
}

@property BOOL useUSKeyboardLayout;
@property NSUInteger flagShowNotification;

- (void)reload;
@end
