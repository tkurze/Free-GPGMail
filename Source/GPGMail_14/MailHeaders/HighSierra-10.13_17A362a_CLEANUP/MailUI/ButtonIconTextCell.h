//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSButtonCell.h"

@class NSImage;

@interface ButtonIconTextCell : NSButtonCell
{
    BOOL _cellEnabled;
    NSImage *_icon;
}

@property(nonatomic) BOOL cellEnabled; // @synthesize cellEnabled=_cellEnabled;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
//- (void).cxx_destruct;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)drawTitle:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (struct CGSize)iconSizeForFrame:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

