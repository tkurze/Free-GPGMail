//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PrintingManager.h"

@class NSMutableArray, NSPDFInfo;

@interface PrintingManagerForExportAsPDF : PrintingManager
{
    NSMutableArray *_exportJobs;
    NSPDFInfo *_pdfInfo;
}

@property(retain, nonatomic) NSPDFInfo *pdfInfo; // @synthesize pdfInfo=_pdfInfo;
@property(retain, nonatomic) NSMutableArray *exportJobs; // @synthesize exportJobs=_exportJobs;
//- (void).cxx_destruct;
- (void)_generateJobTitleAndPrintInfoForExportJob:(id)arg1;
//- (void)_getSaveURLFromUser:(CDUnknownBlockType)arg1;
- (void)_runEnumeratedExportJobs:(id)arg1;
- (void)_generatePrintingHTMLForEnumeratedExportJobs:(id)arg1;
- (void)dispatch;
- (id)progressMessage;
- (void)dealloc;

@end

