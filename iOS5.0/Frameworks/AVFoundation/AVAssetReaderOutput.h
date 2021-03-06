/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAssetReaderOutputInternal, AVWeakReference, NSDictionary, NSString;

@interface AVAssetReaderOutput : NSObject
{
    AVAssetReaderOutputInternal *_internal;
}

+ (void)initialize;
- (id)init;
- (void)dealloc;
- (void)finalize;
@property(readonly, nonatomic) NSString *mediaType;
@property(nonatomic) BOOL alwaysCopiesSampleData;
- (id)_asset;
- (struct OpaqueFigAssetReader *)_figAssetReader;
- (void)_setFigAssetReader:(struct OpaqueFigAssetReader *)arg1;
@property(readonly, nonatomic, getter=_weakReferenceToAssetReader) AVWeakReference *weakReferenceToAssetReader;
- (void)_attachToWeakReferenceToAssetReader:(id)arg1;
@property(readonly, getter=_status) int status;
@property(nonatomic, getter=_extractionID, setter=_setExtractionID:) int extractionID;
@property(readonly, nonatomic, getter=_figAssetReaderExtractionOptions) NSDictionary *figAssetReaderExtractionOptions;
@property(readonly, nonatomic, getter=_trimsSampleDurations) BOOL trimsSampleDurations;
- (BOOL)_prepareForReadingReturningError:(id *)arg1;
- (BOOL)_enableTrackExtractionReturningError:(id *)arg1;
- (BOOL)_isFinished;
- (void)_markAsFinished;
- (void)_cancelReading;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (void)_figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:(int)arg1;
- (void)_figAssetReaderDecodeError;
- (void)_figAssetReaderFailed;

@end

