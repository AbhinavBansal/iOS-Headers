/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

// Not exported
@interface TSPDocumentResourceDownloadObserverManager : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_downloadObserversMap;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)postNotification:(long long)arg1 forDigestString:(id)arg2 wait:(_Bool)arg3;
- (void)addDownloadObserver:(id)arg1 forData:(id)arg2 digestString:(id)arg3 isInternalObserver:(_Bool)arg4 completionHandler:(id)arg5;
- (id)init;

@end

