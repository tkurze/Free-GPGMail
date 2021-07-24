//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <objc/NSObject.h>

@class MarkupViewController, NSButton, NSWindow;
@protocol MarkupDrawingControllerDelegate;

@interface MarkupDrawingController : NSObject
{
    MarkupViewController *_markupViewController;
    NSWindow *_markupWindow;
    NSButton *_cancelButton;
    NSButton *_doneButton;
    id /*<MarkupDrawingControllerDelegate>*/ _delegate;
}

+ (id)log;
@property(nonatomic) __weak id /*<MarkupDrawingControllerDelegate>*/ delegate; // @synthesize delegate=_delegate;
//- (void).cxx_destruct;
- (void)saveDrawing:(id)arg1;
- (void)cancelDrawing:(id)arg1;
- (BOOL)isDrawing;
- (void)display;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
