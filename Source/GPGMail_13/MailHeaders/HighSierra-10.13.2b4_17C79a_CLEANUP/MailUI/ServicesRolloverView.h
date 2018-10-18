//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSView.h"

@class NSTrackingArea;

@interface ServicesRolloverView : NSView
{
    id /*<ServicesRolloverViewDelegate>*/ _delegate;
    long long _style;
    NSTrackingArea *_rolloverTrackingArea;
}

@property(retain) NSTrackingArea *rolloverTrackingArea; // @synthesize rolloverTrackingArea=_rolloverTrackingArea;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak id /*<ServicesRolloverViewDelegate>*/ delegate; // @synthesize delegate=_delegate;
//- (void).cxx_destruct;
- (void)_scrollViewDidChangeBounds:(id)arg1;
- (void)_hideServicePickerWithoutAnimation;
- (void)_showServicePicker;
- (double)_showServicesPickerDelay;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (void)dealloc;
- (void)_servicesRolloverViewCommonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

