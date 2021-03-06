/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, PKImageSetCache;

@interface PKPassLibrary : NSObject
{
    id _passLibraryProxy;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_xpc_object> *_connection;
    PKImageSetCache *_imageSetCache;
}

+ (BOOL)isPassLibraryAvailable;
- (void)_wireupCards:(id)arg1;
- (void)cardRemovedWithInfo:(id)arg1;
- (void)cardRemovedWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (void)cardAddedWithUniqueID:(id)arg1;
- (void)cardChangedWithUniqueID:(id)arg1;
- (id)diffForBulletinRecordID:(id)arg1;
- (id)bulletinSectionInfoForRecordID:(id)arg1;
- (id)bulletinDictWithRecordID:(id)arg1;
- (void)clearBulletinRecordsForPassTypeID:(id)arg1 beforeDate:(id)arg2;
- (id)bulletinDictsForPassTypeID:(id)arg1 count:(unsigned int)arg2 sinceDate:(id)arg3;
- (void)setAllowRelevantPasses:(BOOL)arg1;
- (void)noteAccountChangedWithCompletion:(id)arg1;
- (void)removePassWithUniqueID:(id)arg1;
- (void)introduceDatabaseIntegrityProblem;
- (void)addFakeBulletin;
- (void)nukeDatabaseAndExit;
- (void)flushReferencedUniqueID:(id)arg1 forCachedImageSet:(int)arg2 withDisplayProfile:(id)arg3;
- (void)fetchImageSet:(int)arg1 forUniqueID:(id)arg2 displayProfile:(id)arg3 withCompletion:(id)arg4;
- (void)fetchContentForUniqueID:(id)arg1 withCompletion:(id)arg2;
- (void)updatePassWithUniqueID:(id)arg1 handler:(id)arg2;
- (void)updateSettings:(int)arg1 forPassWithUniqueID:(id)arg2 completionHandler:(id)arg3;
- (void)ingestPassData:(id)arg1 settings:(int)arg2 completionHandler:(id)arg3;
- (id)passWithUniqueID:(id)arg1;
- (void)passesWithHandler:(id)arg1;
- (id)passes;
- (void)establishPassLibraryConnection;
- (void)tearDownPassLibraryConnection;
- (BOOL)replacePassWithPass:(id)arg1;
- (void)getContainmentStatusAndSettingsForPass:(id)arg1 withHandler:(id)arg2;
- (BOOL)containsPass:(id)arg1;
- (void)removePass:(id)arg1;
- (id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (void)dealloc;
- (id)init;

@end

