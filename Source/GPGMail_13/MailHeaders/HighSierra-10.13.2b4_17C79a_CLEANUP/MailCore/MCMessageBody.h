//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

//#import "NSXMLParserDelegate-Protocol.h"
#import "WebResourceLoadDelegate-Protocol.h"

@class NSArray, NSAttributedString, NSDictionary, NSError, NSMutableDictionary, NSString, NSURL;

@interface MCMessageBody : NSObject <WebResourceLoadDelegate, NSXMLParserDelegate>
{
    NSMutableDictionary *_attachmentsByURL;
    BOOL _isPlainText;
    BOOL _isEncrypted;
    NSString *_html;
    unsigned long long _originalEncoding;
    NSString *_mimeType;
    NSURL *_baseURL;
    NSArray *_stationeryBackgroundImageURLs;
    NSArray *_signers;
    NSError *_smimeError;
}

+ (void)setRichTextWebPreferences:(id)arg1;
+ (void)setPlainTextWebPreferences:(id)arg1;
@property(retain, nonatomic) NSError *smimeError; // @synthesize smimeError=_smimeError;
@property(nonatomic) BOOL isEncrypted; // @synthesize isEncrypted=_isEncrypted;
@property(copy, nonatomic) NSArray *signers; // @synthesize signers=_signers;
@property(nonatomic) BOOL isPlainText; // @synthesize isPlainText=_isPlainText;
@property(copy, nonatomic) NSArray *stationeryBackgroundImageURLs; // @synthesize stationeryBackgroundImageURLs=_stationeryBackgroundImageURLs;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(nonatomic) unsigned long long originalEncoding; // @synthesize originalEncoding=_originalEncoding;
@property(copy, nonatomic) NSString *html; // @synthesize html=_html;
//- (void).cxx_destruct;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
@property(readonly, copy, nonatomic) NSArray *signerLabels;
- (void)setBaseURLFromHtml;
- (void)_addWebArchiveDataToArray:(id)arg1;
- (id)attributedStringBlockingRemoteContent:(BOOL)arg1 attachmentAccessLevel:(long long)arg2;
@property(readonly, copy, nonatomic) NSAttributedString *attributedString;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (void)addAttachment:(id)arg1 forURL:(id)arg2;
@property(copy) NSDictionary *attachmentsByURL;
- (void)_mcMessageBodyCommonInit;
- (id)init;
- (id)initWithWebArchive:(id)arg1 archiveIsMailInternal:(BOOL)arg2;
- (id)initWithWebArchive:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

