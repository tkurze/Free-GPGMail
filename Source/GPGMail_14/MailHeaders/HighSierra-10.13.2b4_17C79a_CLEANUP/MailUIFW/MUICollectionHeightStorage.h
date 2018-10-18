//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSMutableArray;

@interface MUICollectionHeightStorage : NSObject
{
    NSMutableArray *_heights;
    NSMutableArray *_yCache;
    double _height;
    double _spacing;
    struct NSEdgeInsets _margins;
}

+ (id)keyPathsForValuesAffectingCount;
@property(nonatomic) struct NSEdgeInsets margins; // @synthesize margins=_margins;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) double height; // @synthesize height=_height;
//- (void).cxx_destruct;
- (unsigned long long)indexAtY:(double)arg1;
- (double)maxYOfIndex:(unsigned long long)arg1;
- (double)minYOfIndex:(unsigned long long)arg1;
- (double)heightOfIndex:(unsigned long long)arg1;
- (void)setHeight:(double)arg1 ofIndex:(unsigned long long)arg2;
- (void)_invalidateCacheForIndex:(unsigned long long)arg1;
- (void)removeAllHeights;
- (void)removeHeightAtIndex:(unsigned long long)arg1;
- (void)moveHeightAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)addHeight:(double)arg1;
- (void)insertHeight:(double)arg1 atIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long count;
- (id)init;

@end

