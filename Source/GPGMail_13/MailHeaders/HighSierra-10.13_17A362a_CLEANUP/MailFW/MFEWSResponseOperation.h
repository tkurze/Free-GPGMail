//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCMonitoredOperation.h"

@class MFEWSGateway, NSError;

@interface MFEWSResponseOperation : MCMonitoredOperation
{
    BOOL _isOffline;
    id _response;
    MFEWSGateway *_gateway;
    id /*<MFEWSErrorHandler>*/ _errorHandler;
    NSError *_lastError;
}

@property BOOL isOffline; // @synthesize isOffline=_isOffline;
@property(retain) NSError *lastError; // @synthesize lastError=_lastError;
@property(retain, nonatomic) id /*<MFEWSErrorHandler>*/ errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) MFEWSGateway *gateway; // @synthesize gateway=_gateway;
@property(retain) id response; // @synthesize response=_response;
//- (void).cxx_destruct;
- (id)description;
- (BOOL)handleResponseMessage:(id)arg1 withObject:(id)arg2;
- (BOOL)handleResponseMessage:(id)arg1;
- (void)handleResponseMessages;
- (void)failWithError:(id)arg1;
- (void)executeOperation;
- (void)prepareToExecuteWithResponse:(id)arg1 forRequestOperation:(id)arg2;
- (void)main;
- (id)init;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;

@end

