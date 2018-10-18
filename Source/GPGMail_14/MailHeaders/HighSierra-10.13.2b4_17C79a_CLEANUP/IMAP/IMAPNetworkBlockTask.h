//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAPTask.h>

@class IMAPNetworkBlockOperation, IMAPTaskManager, NSString;

@interface IMAPNetworkBlockTask : IMAPTask
{
    IMAPNetworkBlockOperation *_operation;
//    CDUnknownBlockType _block;
    IMAPTaskManager *_taskManager;
    long long _taskPriority;
    NSString *_blockDescription;
}

@property(readonly, copy, nonatomic) NSString *blockDescription; // @synthesize blockDescription=_blockDescription;
@property(readonly, nonatomic) long long taskPriority; // @synthesize taskPriority=_taskPriority;
@property(readonly, nonatomic) IMAPTaskManager *taskManager; // @synthesize taskManager=_taskManager;
//@property(readonly, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) IMAPNetworkBlockOperation *operation; // @synthesize operation=_operation;
//- (void).cxx_destruct;
- (void)operationFinished:(id)arg1;
- (void)cancel;
- (void)recalculatePriorities;
- (id)nextPersistenceOperation;
- (id)nextNetworkOperation;
- (id)initWithMailboxName:(id)arg1;
//- (id)initWithMailboxName:(id)arg1 priority:(long long)arg2 taskManager:(id)arg3 description:(id)arg4 block:(CDUnknownBlockType)arg5;

@end

