//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <AppKit/NSButton.h>

@class NSImage;

@interface _BorderlessButton : NSButton
{
    NSImage *_activeImage;
    NSImage *_inactiveImage;
}

@property(retain, nonatomic) NSImage *inactiveImage; // @synthesize inactiveImage=_inactiveImage;
@property(retain, nonatomic) NSImage *activeImage; // @synthesize activeImage=_activeImage;
//- (void).cxx_destruct;
- (void)setEnabled:(BOOL)arg1;
- (void)dealloc;
- (BOOL)isOpaque;

@end

