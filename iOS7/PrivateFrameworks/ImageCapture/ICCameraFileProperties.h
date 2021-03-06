/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface ICCameraFileProperties : NSObject
{
    long long _fileSize;
    _Bool _hasThumbnail;
    _Bool _hasMetadata;
    _Bool _raw;
    int _fetchingThumbnailLock;
    _Bool _fetchingThumbnail;
    int _fetchingMetadataLock;
    _Bool _fetchingMetadata;
    struct CGImage *_originalThumbnail;
    struct CGImage *_thumbnail;
    NSMutableDictionary *_metadata;
    NSMutableDictionary *_metadata_hidden;
    unsigned long long _orientation;
    _Bool _hasOverriddenOrientation;
}

@property _Bool hasOverriddenOrientation; // @synthesize hasOverriddenOrientation=_hasOverriddenOrientation;
@property unsigned long long orientation; // @synthesize orientation=_orientation;
@property(retain) NSMutableDictionary *metadata_hidden; // @synthesize metadata_hidden=_metadata_hidden;
@property(retain) NSMutableDictionary *metadata; // @synthesize metadata=_metadata;
@property(getter=isRaw) _Bool raw; // @synthesize raw=_raw;
@property _Bool hasMetadata; // @synthesize hasMetadata=_hasMetadata;
@property _Bool hasThumbnail; // @synthesize hasThumbnail=_hasThumbnail;
@property long long fileSize; // @synthesize fileSize=_fileSize;
@property _Bool fetchingMetadata;
@property _Bool fetchingThumbnail;
@property struct CGImage *originalThumbnail; // @dynamic originalThumbnail;
@property struct CGImage *thumbnail; // @dynamic thumbnail;
- (void)finalize;
- (void)dealloc;

@end

