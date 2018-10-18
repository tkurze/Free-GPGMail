//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSData, NSImage;

@interface MCStationeryCompositeImageMask : NSObject
{
    NSData *_maskImageData;	// 8 = 0x8
    NSImage *_maskImage;	// 16 = 0x10
    NSData *_placeholderImageData;	// 24 = 0x18
    NSImage *_placeholderImage;	// 32 = 0x20
    double _dropZoneAngle;	// 40 = 0x28
    struct CGSize _dropZoneOffset;	// 48 = 0x30
    struct CGSize _dropZoneSize;	// 64 = 0x40
}

@property(nonatomic) struct CGSize dropZoneSize; // @synthesize dropZoneSize=_dropZoneSize;
@property(nonatomic) double dropZoneAngle; // @synthesize dropZoneAngle=_dropZoneAngle;
@property(nonatomic) struct CGSize dropZoneOffset; // @synthesize dropZoneOffset=_dropZoneOffset;
- (void).cxx_destruct;	// IMP=0x00000000000a48bf
@property(readonly, nonatomic) struct CGSize actualMaskSize;
@property(readonly, nonatomic) struct CGRect dropZoneRect;
@property(readonly, nonatomic) struct CGRect dropZoneBoundingBox;
- (void)discardPlaceholderImage;	// IMP=0x00000000000a46b3
@property(readonly, copy, nonatomic) NSImage *placeholderImage;
- (void)setPlaceholderImageData:(id)arg1;	// IMP=0x00000000000a45d4
@property(readonly, copy, nonatomic) NSImage *maskImage;
- (void)setMaskImageData:(id)arg1;	// IMP=0x00000000000a44f5
@property(readonly, nonatomic) BOOL isValid;
- (id)dictionary;	// IMP=0x00000000000a41cd
- (id)init;	// IMP=0x00000000000a41b9
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000a3e75

@end

