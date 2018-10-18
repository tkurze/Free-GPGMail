//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "DynamicErrorWindowDelegate-Protocol.h"

@class NSString;

@interface IOErrorWindowDelegate : NSObject <DynamicErrorWindowDelegate>
{
}

- (void)rightActionSelectedWithDiagnosis:(long long)arg1;
- (void)leftActionSelectedWithDiagnosis:(long long)arg1;
- (long long)helpTopicForDiagnosis:(long long)arg1;
- (id)rightButtonTextForErrorDiagnosis:(long long)arg1;
- (id)leftButtonTextForErrorDiagnosis:(long long)arg1;
- (id)errorDescriptionForErrorDiagnosis:(long long)arg1;
- (id)errorMessageForErrorDiagnosis:(long long)arg1;
@property(readonly, nonatomic) BOOL displayIndeterminateProgress;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

