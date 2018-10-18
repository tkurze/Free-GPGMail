//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class IMAPMailboxes, MFMailbox, NSArray, NSString;

@interface _IMAPMailboxEntry : NSObject
{
    NSArray *_filteredChildren;
    BOOL _subscribed;
    BOOL _isNoSelect;
    BOOL _hasEnabledDescendants;
    NSString *_name;
    NSString *_path;
    NSArray *_children;
    MFMailbox *_mailbox;
    _IMAPMailboxEntry *_parent;
    IMAPMailboxes *_controller;
}

@property(nonatomic) __weak IMAPMailboxes *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) _IMAPMailboxEntry *parent; // @synthesize parent=_parent;
@property(nonatomic) BOOL hasEnabledDescendants; // @synthesize hasEnabledDescendants=_hasEnabledDescendants;
@property(nonatomic) BOOL isNoSelect; // @synthesize isNoSelect=_isNoSelect;
@property(retain, nonatomic) MFMailbox *mailbox; // @synthesize mailbox=_mailbox;
@property(retain, nonatomic) NSArray *children; // @synthesize children=_children;
@property(nonatomic) BOOL subscribed; // @synthesize subscribed=_subscribed;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
//- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isValidForCurrentFilter;
@property(readonly, nonatomic) BOOL isPathValidForCurrentFilter;
@property(copy, nonatomic) NSArray *filteredChildren;
- (long long)compare:(id)arg1;

@end

