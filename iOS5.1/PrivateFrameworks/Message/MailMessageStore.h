/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MessageStore.h"

@class ActivityMonitor, MailAccount, MailboxUid, NSMutableArray, NSTimer;

@interface MailMessageStore : MessageStore
{
    struct {
        unsigned int isReadOnly:1;
        unsigned int hasUnsavedChangesToMessageData:1;
        unsigned int haveOpenLockFile:1;
        unsigned int compacting:1;
        unsigned int cancelInvalidation:1;
        unsigned int forceInvalidation:1;
        unsigned int isWritingChangesToDisk:1;
        unsigned int isTryingToClose:1;
        unsigned int compactOnClose:1;
        unsigned int reserved:22;
    } _flags;
    MailboxUid *_mailboxUid;
    MailAccount *_account;
    NSMutableArray *_allMessages;
    unsigned int _deletedMessagesSize;
    unsigned int _deletedMessageCount;
    unsigned int _unreadMessageCount;
    unsigned int _lastFetchCount;
    unsigned int _generationNumber;
    int _state;
    NSTimer *_timer;
    double timeOfLastAutosaveOperation;
    ActivityMonitor *_openMonitor;
}

+ (BOOL)createEmptyStoreIfNeededForPath:(id)arg1;
+ (BOOL)createEmptyStoreForPath:(id)arg1;
+ (BOOL)storeAtPathIsWritable:(id)arg1;
+ (Class)classForMimePart;
+ (int)copyMessages:(id)arg1 toMailbox:(id)arg2 markAsRead:(BOOL)arg3 deleteOriginals:(BOOL)arg4 isDeletion:(BOOL)arg5 unsuccessfulOnes:(id)arg6;
+ (void)_autosaveMessageStore:(void *)arg1;
+ (Class)headersClass;
- (id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2;
- (void)dealloc;
- (void)openAsynchronously;
- (void)openSynchronously;
- (void)didOpen;
- (void)cancelOpen;
- (void)writeUpdatedMessageDataToDisk;
- (id)account;
- (id)mailboxUid;
- (BOOL)isOpened;
- (id)storePathRelativeToAccount;
- (id)displayName;
- (BOOL)isReadOnly;
- (id)description;
- (BOOL)isDrafts;
- (void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;
- (void)structureDidChange;
- (void)messagesWereAdded:(id)arg1;
- (void)messagesWereCompacted:(id)arg1;
- (void)updateUserInfoToLatestValues;
- (void)deletedCount:(unsigned int *)arg1 andSize:(unsigned int *)arg2;
- (unsigned int)totalCount;
- (unsigned int)nonDeletedCountIncludingServerSearch:(BOOL)arg1 andThreadSearch:(BOOL)arg2;
- (unsigned int)serverMessageCount;
- (unsigned int)serverUnreadOnlyOnServerCount;
- (unsigned int)serverUnreadCount;
- (BOOL)hasMoreMessages:(unsigned int)arg1;
- (void)purgeMessagesBeyondLimit:(unsigned int)arg1 keepingMessage:(id)arg2;
- (unsigned int)unreadCount;
- (BOOL)hasMessageForAccount:(id)arg1;
- (unsigned int)indexOfMessage:(id)arg1;
- (id)copyOfAllMessages;
- (id)copyOfMessagesInRange:(struct _NSRange)arg1;
- (id)mutableCopyOfAllMessages;
- (id)copyOfAllMessagesWithOptions:(unsigned int)arg1;
- (id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned int)arg1 limit:(unsigned int)arg2;
- (id)copyMessagesMatchingText:(id)arg1;
- (id)copyMessagesMatchingText:(id)arg1 options:(unsigned int)arg2;
- (id)copyMessagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2;
- (BOOL)canFetchSearchResults;
- (int)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned int)arg2;
- (id)remoteIDsMatchingCriterion:(id)arg1 limit:(unsigned int)arg2;
- (BOOL)canFetchMessageIDs;
- (int)fetchMessagesWithMessageIDs:(id)arg1 andSetFlags:(unsigned long long)arg2;
- (id)_defaultRouterDestination;
- (id)finishRoutingMessages:(id)arg1 routed:(id)arg2;
- (BOOL)canRebuild;
- (void)rebuildTableOfContentsAsynchronously;
- (BOOL)canCompact;
- (void)doCompact;
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(BOOL)arg2;
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;
- (void)undeleteMessages:(id)arg1;
- (void)messagesWereDeleted:(id)arg1;
- (BOOL)allowsAppend;
- (int)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5;
- (int)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4;
- (int)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3;
- (int)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2;
- (id)messageWithValue:(id)arg1 forHeader:(id)arg2 options:(unsigned int)arg3;
- (id)messageForMessageID:(id)arg1 options:(unsigned int)arg2;
- (id)messageForRemoteID:(id)arg1;
- (id)lastViewedMessageWithOptions:(unsigned int)arg1;
- (id)lastViewedMessageDate;
- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (BOOL)hasCachedDataForMimePart:(id)arg1;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)setFlagsLocallyFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)setFlag:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;
- (id)willSetFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)setFlagsCancelled:(id)arg1 forMessages:(id)arg2;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;
- (id)status;
- (int)fetchNumMessages:(unsigned int)arg1 preservingUID:(id)arg2 fetchType:(int)arg3 synchronize:(BOOL)arg4 compact:(BOOL)arg5;
- (int)fetchMobileSynchronously:(unsigned int)arg1 preservingUID:(id)arg2 compact:(BOOL)arg3;
- (int)fetchMobileSynchronously:(unsigned int)arg1;
- (BOOL)setPreferredEncoding:(unsigned long)arg1 forMessage:(id)arg2;
- (void)setData:(id)arg1 forMimePart:(id)arg2 isComplete:(BOOL)arg3;
- (void)close;
- (void)_flushAllMessageData;
- (void)setLibrary:(id)arg1;
- (BOOL)shouldDownloadBodyDataForMessage:(id)arg1;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (id)loadMeetingDataForMessage:(id)arg1;
- (BOOL)shouldSetSummaryForMessage:(id)arg1;
- (BOOL)canDeleteMessage:(id)arg1;
- (BOOL)shouldDeleteInPlace;
- (BOOL)shouldArchive;
- (int)archiveDestination;
- (void)_cancelAutosave;
- (void)_setNeedsAutosave;
- (id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (void)_rebuildTableOfContentsSynchronously;
- (void)updateBodyFlagsForMessage:(id)arg1 body:(id)arg2;
- (id)_setOrGetBody:(id)arg1 forMessage:(id)arg2 updateFlags:(BOOL)arg3;
- (void)_setFlagsForMessages:(id)arg1 mask:(unsigned long long)arg2;
- (void)_setFlagsForMessages:(id)arg1;
- (void)updateMessages:(id)arg1 updateNumberOfAttachments:(BOOL)arg2;
- (void)messagesWereAdded:(id)arg1 forIncrementalLoading:(BOOL)arg2 earliestReceivedDate:(id)arg3;
- (BOOL)_updateFlagForMessage:(id)arg1 key:(id)arg2 value:(BOOL)arg3;
- (BOOL)_shouldChangeComponentMessageFlags;
- (BOOL)_shouldChangeComponentMessageFlagsForMessage:(id)arg1;

@end

