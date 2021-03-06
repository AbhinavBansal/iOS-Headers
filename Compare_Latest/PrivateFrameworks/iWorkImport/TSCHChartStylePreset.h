/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSPObject.h>

#import "TSCHStyleSwapSupporting-Protocol.h"
#import "TSPCopying-Protocol.h"
#import "TSSPreset-Protocol.h"

@class NSArray, NSString;

// Not exported
@interface TSCHChartStylePreset : TSPObject <TSPCopying, TSSPreset, TSCHStyleSwapSupporting>
{
    id <TSCHStyleActAlike> mChartStyle;
    id <TSCHStyleActAlike> mLegendStyle;
    NSArray *mValueAxisStyles;
    NSArray *mCategoryAxisStyles;
    NSArray *mSeriesStyles;
    NSArray *mParagraphStyles;
    struct __CFUUID *mUUID;
}

+ (void)upgradeForTrendLineEquationAndR2LabelsPropertyMigrationFromChartStyle:(id)arg1 seriesStyles:(id)arg2;
+ (void)upgradeFor3DShadowPropertyMigrationFromChartStyle:(id)arg1 seriesStyles:(id)arg2;
+ (void)upgradeShadowPropertyForParagraphStyles:(id)arg1;
+ (void)upgradeTrendLinesAndErrorBarsForSeriesPresets:(id)arg1 valueAxisPresets:(id)arg2 paragraphPresets:(id)arg3;
+ (id)p_getDefaultTrendLineStrokeColor:(id)arg1;
+ (id)p_getDefaultTrendLineShadowColor:(id)arg1;
+ (id)p_getDefaultErrorBarColor:(id)arg1 valueAxisStyles:(id)arg2;
+ (void)p_replaceProperty:(int)arg1 inStyle:(id)arg2 withObject:(id)arg3;
@property(readonly, nonatomic) struct __CFUUID *uuid; // @synthesize uuid=mUUID;
@property(readonly, nonatomic) NSArray *paragraphStyles; // @synthesize paragraphStyles=mParagraphStyles;
@property(readonly, nonatomic) NSArray *seriesStyles; // @synthesize seriesStyles=mSeriesStyles;
@property(readonly, nonatomic) NSArray *categoryAxisStyles; // @synthesize categoryAxisStyles=mCategoryAxisStyles;
@property(readonly, nonatomic) NSArray *valueAxisStyles; // @synthesize valueAxisStyles=mValueAxisStyles;
@property(readonly, nonatomic) id <TSCHStyleActAlike> legendStyle; // @synthesize legendStyle=mLegendStyle;
@property(readonly, nonatomic) id <TSCHStyleActAlike> chartStyle; // @synthesize chartStyle=mChartStyle;
- (id)styleOwnerFromSwapType:(int)arg1 andIndex:(unsigned long long)arg2;
- (id)applyStyleSwapTuple:(id)arg1;
- (id)buildSeriesNonStyle;
- (id)buildAxisNonStyle;
- (id)buildLegendNonStyle;
- (id)buildChartNonStyle;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)swatchImage;
@property(readonly, nonatomic) NSString *presetKind;
- (_Bool)isThemeEquivalent:(id)arg1;
- (id)description;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (_Bool)isEquivalentToPreset:(id)arg1;
- (_Bool)isEquivalentToPreset:(id)arg1 outReasons:(id *)arg2;
- (id)allStyles;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 chartStyle:(id)arg2 legendStyle:(id)arg3 valueAxisStyles:(id)arg4 categoryAxisStyles:(id)arg5 seriesStyles:(id)arg6;
- (id)initWithContext:(id)arg1 chartStyle:(id)arg2 legendStyle:(id)arg3 valueAxisStyles:(id)arg4 categoryAxisStyles:(id)arg5 seriesStyles:(id)arg6 paragraphStyles:(id)arg7;
- (id)initWithContext:(id)arg1 chartStyle:(id)arg2 legendStyle:(id)arg3 valueAxisStyles:(id)arg4 categoryAxisStyles:(id)arg5 seriesStyles:(id)arg6 paragraphStyles:(id)arg7 uuid:(struct __CFUUID *)arg8;
- (id)p_initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

