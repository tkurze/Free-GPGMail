//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@interface MailWindowShadowLayer : CALayer
{
    CALayer *_topShadow;	// 24 = 0x18
    CALayer *_bottomShadow;	// 32 = 0x20
    CALayer *_leftShadow;	// 40 = 0x28
    CALayer *_rightShadow;	// 48 = 0x30
    CALayer *_topRightShadow;	// 56 = 0x38
    CALayer *_topLeftShadow;	// 64 = 0x40
    CALayer *_bottomRightShadow;	// 72 = 0x48
    CALayer *_bottomLeftShadow;	// 80 = 0x50
    long long _shadowType;	// 88 = 0x58
    struct CGSize _animationStartSize;	// 96 = 0x60
    struct CGSize _animationEndSize;	// 112 = 0x70
}

@property(readonly, nonatomic) struct CGSize animationEndSize; // @synthesize animationEndSize=_animationEndSize;
@property(readonly, nonatomic) struct CGSize animationStartSize; // @synthesize animationStartSize=_animationStartSize;
@property(readonly, nonatomic) long long shadowType; // @synthesize shadowType=_shadowType;
@property(readonly, nonatomic) CALayer *bottomLeftShadow; // @synthesize bottomLeftShadow=_bottomLeftShadow;
@property(readonly, nonatomic) CALayer *bottomRightShadow; // @synthesize bottomRightShadow=_bottomRightShadow;
@property(readonly, nonatomic) CALayer *topLeftShadow; // @synthesize topLeftShadow=_topLeftShadow;
@property(readonly, nonatomic) CALayer *topRightShadow; // @synthesize topRightShadow=_topRightShadow;
@property(readonly, nonatomic) CALayer *rightShadow; // @synthesize rightShadow=_rightShadow;
@property(readonly, nonatomic) CALayer *leftShadow; // @synthesize leftShadow=_leftShadow;
@property(readonly, nonatomic) CALayer *bottomShadow; // @synthesize bottomShadow=_bottomShadow;
@property(readonly, nonatomic) CALayer *topShadow; // @synthesize topShadow=_topShadow;
- (void).cxx_destruct;	// IMP=0x00000001001f4e01
- (id)_shadowImageForShadowPart:(long long)arg1;	// IMP=0x0000000100071593
- (double)_rightMargin;	// IMP=0x000000010007152b
- (double)_leftMargin;	// IMP=0x000000010007155f
- (double)_bottomMargin;	// IMP=0x00000001000714f7
- (double)_topMargin;	// IMP=0x00000001000714c3
- (void)animateShadowByGrowing:(BOOL)arg1;	// IMP=0x0000000100071707
- (id)initWithStartSize:(struct CGSize)arg1 endSize:(struct CGSize)arg2 shadowType:(long long)arg3;	// IMP=0x0000000100070a2f
- (id)init;	// IMP=0x00000001001f4c68

@end

