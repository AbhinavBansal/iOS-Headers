/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVPlayer, AVWeakReference, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface AVPlayerTimelyCaller : NSObject
{
    NSObject<OS_dispatch_queue> *_timerQueue;
    AVWeakReference *_weakReference;
    AVPlayer *_player;
    NSObject<OS_dispatch_source> *_timerSource;
    BOOL _isInvalidated;
    BOOL _timerQueueIsPlayerStateDispatchQueue;
    struct OpaqueCMTimebase *_timebase;
    double _lastRate;
    double _currentRate;
}

@property(readonly, nonatomic, getter=_weakReference) AVWeakReference *weakReference; // @synthesize weakReference=_weakReference;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_timebaseDidChange:(id)arg1;
- (id)player;
- (void)_effectiveRateChanged;
- (void)_handleTimeDiscontinuity;
- (void)_resetNextFireTime;
- (void)invalidate;
- (void)_startObservingTimebaseNotificationsForCurrentItem;
- (void)_stopRespondingToPlayerStateChanges;
- (void)_stopObservingTimebaseNotifications;
- (long)_removeCurrentTimebaseFromTimerSource;
- (void)finalize;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 queue:(id)arg2;

@end

