/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface RUTrackHistorySession : NSObject <NSCopying>
{
    NSString *_stationName;
    NSArray *_trackHistories;
}

@property(copy, nonatomic) NSArray *trackHistories; // @synthesize trackHistories=_trackHistories;
@property(copy, nonatomic) NSString *stationName; // @synthesize stationName=_stationName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end

