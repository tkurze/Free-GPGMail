//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RichMessageCellBase.h"

@class NSImageView;

@interface RichMessageChildCellView : RichMessageCellBase
{
    NSImageView *_unreadView;
}

+ (double)heightWithNumberOfSnippetLines:(unsigned long long)arg1;
@property(retain, nonatomic) NSImageView *unreadView; // @synthesize unreadView=_unreadView;
//- (void).cxx_destruct;
- (void)awakeFromNib;

@end

