/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MapKit/MKMultiPoint.h>

#import "MKOverlay-Protocol.h"

@class NSArray, NSString;

@interface MKPolygon : MKMultiPoint <MKOverlay>
{
    CDStruct_2c43369c _centroid;
    NSArray *_interiorPolygons;
    BOOL _isDefinitelyConvex;
}

+ (id)polygonEnclosingMapPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned int)arg2;
+ (id)polygonWithCoordinates:(CDStruct_c3b9c2ee *)arg1 count:(unsigned int)arg2 interiorPolygons:(id)arg3;
+ (id)polygonWithCoordinates:(CDStruct_c3b9c2ee *)arg1 count:(unsigned int)arg2;
+ (id)polygonWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned int)arg2 interiorPolygons:(id)arg3;
+ (id)polygonWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned int)arg2;
@property(nonatomic) BOOL _isDefinitelyConvex; // @synthesize _isDefinitelyConvex;
@property(readonly) NSArray *interiorPolygons; // @synthesize interiorPolygons=_interiorPolygons;
@property(readonly, nonatomic) CDStruct_90e2a262 boundingMapRect;
- (BOOL)intersectsMapRect:(CDStruct_90e2a262)arg1;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;

@end

