/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PLIndexMapperDataSource-Protocol.h"
#import "PLIndexMappingCache-Protocol.h"
#import "PLUserEditableAssetContainer-Protocol.h"

@class NSDictionary, NSIndexSet, NSMutableIndexSet, NSMutableOrderedSet, NSNumber, NSObject<PLAssetContainer>, NSOrderedSet, NSPredicate, NSString, NSURL, PLIndexMapper, PLManagedAsset, UIImage;

@interface PLFilteredAlbum : NSObject <PLUserEditableAssetContainer, PLIndexMapperDataSource, PLIndexMappingCache>
{
    PLIndexMapper *_indexMapper;
    NSMutableIndexSet *_filteredIndexes;
    BOOL _backingAlbumSupportsEdits;
    NSMutableOrderedSet *_weak_assets;
    NSObject<PLAssetContainer> *_backingAlbum;
    int filter;
    NSPredicate *predicate;
    BOOL isObservingContextChanges;
}

+ (id)_filteredIndexesInManagedAlbum:(id)arg1 predicate:(id)arg2;
+ (id)filteredIndexesInAlbum:(struct NSObject *)arg1 predicate:(id)arg2;
+ (id)predicateForAlbumFilter:(int)arg1;
+ (struct NSObject *)unfilteredAlbum:(struct NSObject *)arg1;
+ (struct NSObject *)filteredAlbum:(struct NSObject *)arg1 intersectFilter:(int)arg2;
+ (struct NSObject *)filteredAlbum:(struct NSObject *)arg1 filter:(int)arg2;
@property(nonatomic) BOOL isObservingContextChanges; // @synthesize isObservingContextChanges;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate;
@property(nonatomic) int filter; // @synthesize filter;
@property(retain, nonatomic) NSObject<PLAssetContainer> *backingAlbum; // @synthesize backingAlbum=_backingAlbum;
- (void)replaceFilteredAssetsAtIndexes:(id)arg1 withFilteredValues:(id)arg2;
- (void)replaceObjectInFilteredAssetsAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeFilteredAssetsAtIndexes:(id)arg1;
- (void)insertFilteredAssets:(id)arg1 atIndexes:(id)arg2;
- (void)removeObjectFromFilteredAssetsAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 inFilteredAssetsAtIndex:(unsigned int)arg2;
- (id)_editableBackingAlbum;
- (void)getFilteredAssets:(id *)arg1 range:(struct _NSRange)arg2;
- (id)filteredAssetsAtIndexes:(id)arg1;
- (id)objectInFilteredAssetsAtIndex:(unsigned int)arg1;
- (unsigned int)indexInFilteredAssetsOfObject:(id)arg1;
- (unsigned int)countOfFilteredAssets;
- (void)mappedDataSourceChanged:(id)arg1;
- (BOOL)shouldIncludeObjectAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) id <NSObject><NSCopying> cachedIndexMapState;
@property(readonly, nonatomic) NSIndexSet *filteredIndexes;
@property(readonly, nonatomic) PLIndexMapper *indexMapper;
- (id)initWithBackingAlbum:(struct NSObject *)arg1 filter:(int)arg2;
- (void)updateStackedImage;
- (void)reducePendingItemsCountBy:(unsigned int)arg1;
@property(nonatomic) unsigned int pendingItemsType;
@property(nonatomic) unsigned int pendingItemsCount;
- (void)backingContextDidChange:(id)arg1;
- (void)batchFetchAssets:(id)arg1;
- (id)displayableIndexesForCount:(unsigned int)arg1;
@property(readonly, nonatomic) NSURL *groupURL;
@property(retain, nonatomic) NSString *importSessionID;
@property(retain, nonatomic) NSDictionary *slideshowSettings;
@property(readonly, nonatomic) BOOL shouldDeleteWhenEmpty;
- (BOOL)canPerformEditOperation:(int)arg1;
@property(readonly, nonatomic) BOOL isPhotoStreamAlbum;
@property(readonly, nonatomic) BOOL isCameraAlbum;
@property(readonly, nonatomic) BOOL isLibrary;
@property(readonly, nonatomic) UIImage *posterImage;
@property(retain, nonatomic) PLManagedAsset *keyAsset;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) unsigned int videosCount;
@property(readonly, nonatomic) unsigned int photosCount;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) unsigned int count;
@property(readonly, nonatomic) NSMutableOrderedSet *userEditableAssets;
@property(readonly, nonatomic) NSMutableOrderedSet *mutableAssets;
@property(readonly, nonatomic) NSOrderedSet *assets;
@property(readonly, nonatomic) int kindValue;
@property(readonly, nonatomic) NSNumber *kind;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *uuid;
@property(nonatomic) NSMutableOrderedSet *_assets;
- (void)dealloc;

@end
