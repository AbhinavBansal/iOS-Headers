/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKViewController.h>

@class UIViewController;

@interface GKModalRootViewController : GKViewController
{
    UIViewController *oldRootViewController;
    id oldDelegate;
    int statusBarOrientation;
}

@property(nonatomic) int statusBarOrientation; // @synthesize statusBarOrientation;
@property(retain, nonatomic) id oldDelegate; // @synthesize oldDelegate;
@property(retain, nonatomic) UIViewController *oldRootViewController; // @synthesize oldRootViewController;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

