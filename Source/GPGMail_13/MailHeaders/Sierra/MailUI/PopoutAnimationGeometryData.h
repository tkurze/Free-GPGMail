//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@interface PopoutAnimationGeometryData : NSObject
{
    struct CGRect _contentRect;	// 8 = 0x8
    struct CGRect _centerRect;	// 40 = 0x28
}

@property(readonly, nonatomic) struct CGRect centerRect; // @synthesize centerRect=_centerRect;
@property(readonly, nonatomic) struct CGRect contentRect; // @synthesize contentRect=_contentRect;
- (id)description;	// IMP=0x000000010026c823
- (id)init;	// IMP=0x000000010026c754
- (id)initWithContentRect:(struct CGRect)arg1;	// IMP=0x000000010026c6e0
- (id)initWithContentRect:(struct CGRect)arg1 centerRect:(struct CGRect)arg2;	// IMP=0x000000010026c654

@end

