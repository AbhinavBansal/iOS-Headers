/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCHChartInfo.h>

@interface TSCHChartInfo (PieAdditions)
- (_Bool)isSingleCircleSpecialCase;
- (_Bool)isSingleCircleSpecialCaseOutSeries:(id *)arg1;
- (float)maximumExplosionOfAllSeriesExcept:(id)arg1;
- (float)maximumExplosion;
- (float)radiusForFrame:(struct CGRect)arg1 withMaxExplosion:(float)arg2;
- (float)minFrameDimensionForRadius:(float)arg1 withMaxExplosion:(float)arg2;
@end

