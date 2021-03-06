/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCalendar, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, PLFetchingAlbum, PLGenericAlbum, PLManagedAlbum, PLManagedObjectContext, PLThumbnailManager, PLWStackedImageCache;

@interface PLPhotoLibrary : NSObject
{
    BOOL _listeningForITunesSyncing;
    BOOL _canTriggerDatabaseUpdate;
    struct __CFDictionary *_allPhotos;
    double _lastRemoteDataModification;
    int _databaseMigrationKind;
    PLThumbnailManager *_thumbnailManager;
    NSDictionary *_existingThumbnailEntries;
    PLGenericAlbum *_allImportedPhotosAlbum;
    PLGenericAlbum *_lastImportedPhotosAlbum;
    NSCalendar *_exifConversionCalendar;
    NSMutableDictionary *_photoStreamAlbumsByStreamID;
    NSMutableArray *_photoStreamAlbums;
    struct NSObject *_allPhotoStreamPhotosAlbum;
    id _ptpDelegate;
    PLWStackedImageCache *_stackedImageCache;
    NSSet *_imageFileExtensions;
    NSSet *_rawImageFileExtensions;
    NSSet *_audioFileExtensions;
    NSSet *_extraVideoExtensions;
    unsigned int _lastFetchedGPSCount;
    unsigned int _insertedCountSinceLastFetchedGPSCount;
    unsigned int _deletedCountSinceLastFetchedGPSCount;
    unsigned int _newlyCompleteWithGPS;
    PLManagedAlbum *_cameraRollAlbum;
    PLFetchingAlbum *_cameraSessionAlbum;
    PLManagedAlbum *_savedAndInFlightAlbum;
    PLManagedObjectContext *managedObjectContext;
}

+ (void)_doFilesystemImportIfNeeded;
+ (BOOL)isApplicationWildcat;
+ (void)setApplicationIsWildcat:(BOOL)arg1;
+ (id)sharedPhotoLibrary;
@property(retain, nonatomic) PLManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext;
- (void)updateThumbnailsForPhoto:(id)arg1 previewImage:(id)arg2 thumbnailImage:(id)arg3;
- (void)deleteAllImages;
- (void)_compactThumbnailTablesIfNecessary;
- (void)_deleteFilesAndEmptyDirectoriesAtPaths:(id)arg1;
- (BOOL)rotateCameraPhoto:(id)arg1 byDegrees:(int)arg2;
- (void)deleteImages:(id)arg1;
- (BOOL)hasAtLeastOnePhoto;
- (BOOL)hasAtLeastOneItem;
- (id)iTunesFaceImageForRecordID:(int)arg1 faceIndex:(int)arg2 size:(struct CGSize)arg3 returnLocationInImage:(struct CGRect *)arg4;
- (void)pictureWasChanged;
- (void)pictureWasDeletedNotification;
- (void)photoLibraryAvailableNotification;
- (void)photoLibraryRebuildingNotification;
- (void)photoLibraryCorruptNotification;
- (void)_notifyPhotoLibraryIsNoLongerAvailableOnMainThread;
- (void)_loadPhotoLibraryAfterMigration;
- (id)_iTunesPhotos;
- (void)addPhotoToCameraRoll:(id)arg1 completionBlock:(id)arg2;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)countOfAllPhotosAndVideos;
- (void)flushAlbums;
- (void)flushPhotoStreamAlbums;
- (void)flushDCIMAlbums;
- (BOOL)libraryIsAvailable;
- (void)_releaseThumbnailManager;
@property(readonly, nonatomic) PLThumbnailManager *thumbnailManager;
- (void)dealloc;
- (id)initWithPath:(id)arg1 canTriggerDatabaseUpdate:(BOOL)arg2;
- (id)init;

@end

