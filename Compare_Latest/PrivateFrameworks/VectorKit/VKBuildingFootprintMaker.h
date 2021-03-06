/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "VKTileHeightInformation-Protocol.h"

@class GEOVectorTile, VGLMeshVendor, VGLTexture, VKAnimation, VKHeightfield, VKStylesheet;

// Not exported
@interface VKBuildingFootprintMaker : NSObject <VKTileHeightInformation>
{
    float _maxHeight;
    VKHeightfield *_heightfield;
    VKAnimation *_animateOut;
    VKAnimation *_animateIn;
    float _alpha;
    float _scale;
    double _contentScale;
    GEOVectorTile *_geotile;
    VKStylesheet *_stylesheet;
    VKAnimation *_animateBuildingMode;
    vector_f457f7ad _regularFacadeCollections;
    vector_f457f7ad _realisticFacadeCollections;
    VGLMeshVendor *_pointyBuildingsMeshVendor;
    VGLMeshVendor *_footprintsMeshVendor;
    struct vector<VGLMeshVendor *, vk_allocator<VGLMeshVendor *>> _sharedFacadeCollection;
    struct vector<VGLMeshVendor *, vk_allocator<VGLMeshVendor *>> _regularFacadeCollection;
    VGLTexture *_shadowTexture;
    CDStruct_aa5aacbc _shadowTextureMatrix;
    struct vector<VKBuildingHeightMap, vk_allocator<VKBuildingHeightMap>> _landmarkHeights;
    VGLMeshVendor *_landmarksMeshVendor;
    struct DiscontinuityEdgeInfo *_sharedDiscontinuityEdgeInfo;
    struct DiscontinuityEdgeInfo *_regularDiscontinuityEdgeInfo;
    struct DiscontinuityEdgeInfo *_realisticDiscontinuityEdgeInfo;
    struct unordered_map<long, std::__1::vector<const vk::DiscontinuityEdgeInfo *, vk_allocator<const vk::DiscontinuityEdgeInfo *>>, std::__1::hash<long>, std::__1::equal_to<long>, vk_allocator<std::__1::pair<const long, std::__1::vector<const vk::DiscontinuityEdgeInfo *, vk_allocator<const vk::DiscontinuityEdgeInfo *>>>>> _discontinuityEdgeInfoMap;
    struct BuildingTopMeshFactory *_topMeshFactory;
    VGLMeshVendor *_footprintStrokeMeshVendor;
    float _minLayeringHeight;
    float _maxLayeringHeight;
}

@property(retain, nonatomic) VKAnimation *animateBuildingMode; // @synthesize animateBuildingMode=_animateBuildingMode;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) float alpha; // @synthesize alpha=_alpha;
@property(retain, nonatomic) VKAnimation *animateIn; // @synthesize animateIn=_animateIn;
@property(retain, nonatomic) VKAnimation *animateOut; // @synthesize animateOut=_animateOut;
@property(readonly, nonatomic) float maxHeight; // @synthesize maxHeight=_maxHeight;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)heightAtX:(float)arg1 Y:(float)arg2 outZ:(float *)arg3;
- (void)_makeShadowTextureWithVectorTile:(id)arg1 skipLandmarks:(_Bool)arg2 pointyFootprints:(const unordered_map_93d329bc *)arg3 useHiResFootprints:(_Bool)arg4 landmarks:(const CDStruct_9c9be310 *)arg5 landmarkCount:(unsigned long long)arg6;
- (_Bool)_makeThreeDBuildingsMesh:(const CDStruct_9c9be310 *)arg1 buildingCount:(unsigned long long)arg2;
- (void)_makeMeshesWithLandmarksPresent:(_Bool)arg1 makeFacades:(_Bool)arg2 pointyFootprints:(unordered_map_93d329bc *)arg3 useHiResFootprints:(_Bool)arg4;
- (void)_makeFootprintsMesh;
- (void)dealloc;
- (id)initWithVectorTile:(id)arg1 stylesheet:(id)arg2 makeFacades:(_Bool)arg3;

@end

