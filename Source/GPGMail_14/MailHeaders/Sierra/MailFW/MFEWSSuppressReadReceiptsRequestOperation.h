//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFEWSRequestOperation.h>

@class MFEWSGetItemsResponseOperation;

@interface MFEWSSuppressReadReceiptsRequestOperation : MFEWSRequestOperation
{
    MFEWSGetItemsResponseOperation *_getItemsResponse;	// 24 = 0x18
}

@property(readonly, nonatomic) MFEWSGetItemsResponseOperation *getItemsResponse; // @synthesize getItemsResponse=_getItemsResponse;
- (void).cxx_destruct;	// IMP=0x00000000000bdbf0
- (id)prepareRequest;	// IMP=0x00000000000bd854
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;	// IMP=0x00000000000bd785
- (id)initWithGetItemsResponse:(id)arg1 gateway:(id)arg2;	// IMP=0x00000000000bd618

@end

