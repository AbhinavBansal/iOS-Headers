/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "MCProfileConnectionObserver-Protocol.h"
#import "MPStoreDownloadManagerObserver-Protocol.h"
#import "SKStoreProductViewControllerDelegate-Protocol.h"
#import "SKUIItemOfferButtonDelegate-Protocol.h"

@class MPMediaDownloadObserver, MPMediaItem, NSString, RadioTrack, SKUIItemOfferButton, UIViewController;

@interface RUTrackDownloadView : UIView <MCProfileConnectionObserver, MPStoreDownloadManagerObserver, SKStoreProductViewControllerDelegate, SKUIItemOfferButtonDelegate>
{
    MPMediaDownloadObserver *_downloadObserver;
    _Bool _isInAppPurchaseAllowed;
    _Bool _isProfileInAppPurchaseAllowed;
    _Bool _isProfileiTunesAllowed;
    SKUIItemOfferButton *_itemOfferButton;
    MPMediaItem *_mediaItem;
    _Bool _showingConfirmation;
    long long _buyButtonTitleStyle;
    id <RUTrackDownloadViewDelegate> _delegate;
    NSString *_baseOriginator;
    long long _overrideState;
    NSString *_overrideTitleText;
    RadioTrack *_radioTrack;
    long long _state;
    NSString *_stationHash;
    long long _stationID;
    UIViewController *_viewControllerForPresenting;
    struct CGSize _overrideSize;
}

@property(nonatomic) __weak UIViewController *viewControllerForPresenting; // @synthesize viewControllerForPresenting=_viewControllerForPresenting;
@property(nonatomic) long long stationID; // @synthesize stationID=_stationID;
@property(copy, nonatomic) NSString *stationHash; // @synthesize stationHash=_stationHash;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) RadioTrack *radioTrack; // @synthesize radioTrack=_radioTrack;
@property(copy, nonatomic) NSString *overrideTitleText; // @synthesize overrideTitleText=_overrideTitleText;
@property(nonatomic) long long overrideState; // @synthesize overrideState=_overrideState;
@property(nonatomic) struct CGSize overrideSize; // @synthesize overrideSize=_overrideSize;
@property(copy, nonatomic) NSString *baseOriginator; // @synthesize baseOriginator=_baseOriginator;
@property(nonatomic) id <RUTrackDownloadViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long buyButtonTitleStyle; // @synthesize buyButtonTitleStyle=_buyButtonTitleStyle;
- (void).cxx_destruct;
- (void)_updateStateAndInternalViewsIfNeededForDownloads:(id)arg1;
- (void)_updateStateAndInternalViewsAnimated:(_Bool)arg1;
- (void)_updateIsInAppPurchaseAllowedForProfileConnection:(id)arg1 updateState:(_Bool)arg2;
- (void)_sizeToFitAndNotifyDelegate;
- (_Bool)_isAlbumOnlyRadioTrack:(id)arg1;
- (long long)_downloadStoreID;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_isExplicitTracksEnabledDidChangeNotification:(id)arg1;
- (void)_itemOfferShowConfirmationAction:(id)arg1;
- (void)_itemOfferCancelConfirmationAction:(id)arg1;
- (void)_itemOfferButtonAction:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

