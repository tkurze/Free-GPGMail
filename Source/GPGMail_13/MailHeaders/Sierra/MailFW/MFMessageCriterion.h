//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFCriterion.h"

@class NSArray, NSString;

@interface MFMessageCriterion : MFCriterion
{
    NSString *_originalGroupUniqueID;	// 8 = 0x8
    long long _specialMailboxTypeCode;	// 16 = 0x10
    NSString *_groupUniqueID;	// 24 = 0x18
}

+ (id)stringForCriterionType:(long long)arg1;	// IMP=0x00000000001c369a
+ (long long)criterionTypeForString:(id)arg1;	// IMP=0x00000000001c316a
+ (void)_updateAddressDisplayNames:(id)arg1;	// IMP=0x00000000001bf3e6
+ (id)messagesInConversationCriterionWithConversationIDs:(id)arg1;	// IMP=0x00000000001bbdd4
+ (void)initialize;	// IMP=0x00000000001bbd24
@property(copy) NSString *groupUniqueID; // @synthesize groupUniqueID=_groupUniqueID;
@property long long specialMailboxTypeCode; // @synthesize specialMailboxTypeCode=_specialMailboxTypeCode;
//- (void).cxx_destruct;	// IMP=0x00000000001c51ff
@property(readonly, nonatomic) BOOL containsAddressBookCriteria;
@property(readonly, nonatomic) BOOL containsRelativeDateCriteria;
@property(readonly, nonatomic) BOOL containsMessageIsNotInATrashMailboxCriterion;
@property(readonly, nonatomic) BOOL containsIncludeConversationsCriterion;
@property(readonly, nonatomic) BOOL containsLastViewedDateCriterion;
- (BOOL)_containsCriterion:(long long)arg1;	// IMP=0x00000000001c4cb0
@property(readonly, nonatomic) MFMessageCriterion *criterionByExpandingSpecialMailboxCriterion;
- (id)criterionByExpandingGroup;	// IMP=0x00000000001c4318
@property(readonly, copy, nonatomic) NSArray *emailAddressesForGroupCriterion;
@property(readonly, copy, nonatomic) NSArray *emailAddressesForVIPCriterion;
- (BOOL)containsSpotlightCriterion;	// IMP=0x00000000001c3d53
- (BOOL)isValid:(id *)arg1 options:(unsigned int)arg2;	// IMP=0x00000000001c3adf
@property(readonly, nonatomic) BOOL hasQualifier;
- (BOOL)allowsEmptyExpression;	// IMP=0x00000000001c3a12
- (BOOL)hasExpression;	// IMP=0x00000000001c39bc
- (BOOL)isSatisfiedByMailboxURL:(id)arg1;	// IMP=0x00000000001c2d96
- (BOOL)evaluateMessage:(id)arg1;	// IMP=0x00000000001c2d1c
- (BOOL)_evaluateMessage:(id)arg1 fetchBody:(BOOL)arg2 needsBody:(char *)arg3 successfullyEvaluated:(char *)arg4;	// IMP=0x00000000001c28a7
- (BOOL)doesMessageSatisfyRuleEvaluationCriterion:(id)arg1 fetchBody:(BOOL)arg2 needsBody:(char *)arg3 successfullyEvaluated:(char *)arg4;	// IMP=0x00000000001c281a
- (BOOL)_evaluateFlaggedStatusCriterion:(id)arg1;	// IMP=0x00000000001c261a
- (BOOL)_evaluateSpecialMailboxCriterion:(id)arg1;	// IMP=0x00000000001c24c8
- (BOOL)_mailboxURLString:(id)arg1 satisfiesQualifier:(long long)arg2 forExpression:(id)arg3;	// IMP=0x00000000001c234c
- (BOOL)_evaluateSizeCriterion:(id)arg1;	// IMP=0x00000000001c2250
- (BOOL)_evaluateGmailLabelCriterion:(id)arg1;	// IMP=0x00000000001c2011
- (BOOL)_evaluateMailboxCriterion:(id)arg1;	// IMP=0x00000000001c1f5a
- (BOOL)_evaluateFlagCriterion:(id)arg1;	// IMP=0x00000000001c1daf
- (BOOL)_evaluateCompoundCriterion:(id)arg1;	// IMP=0x00000000001c1af4
- (BOOL)_evaluateAttachmentTypeCriterion:(id)arg1 fetchBody:(BOOL)arg2 needsBody:(char *)arg3;	// IMP=0x00000000001c143a
- (BOOL)_evaluateAttachmentCriterion:(id)arg1 fetchBody:(BOOL)arg2 needsBody:(char *)arg3;	// IMP=0x00000000001c0fff
- (BOOL)_messageIsSignedByMe:(id)arg1;	// IMP=0x00000000001c0c18
- (BOOL)_messageHasPassBookAttachment:(id)arg1;	// IMP=0x00000000001c090e
- (BOOL)_evaluateJunkMailCriterion:(id)arg1 fetchBody:(BOOL)arg2 needsBody:(char *)arg3;	// IMP=0x00000000001c01bc
- (BOOL)_evaluateJunkMailHeaders:(id)arg1;	// IMP=0x00000000001bfe2e
- (BOOL)_evaluatePriorityIsLowCriterion:(id)arg1;	// IMP=0x00000000001bfe0e
- (BOOL)_evaluatePriorityIsHighCriterion:(id)arg1;	// IMP=0x00000000001bfdee
- (BOOL)_evaluatePriorityIsNormalCriterion:(id)arg1;	// IMP=0x00000000001bfdce
- (BOOL)_evaluateMessageTypeCriterion:(id)arg1;	// IMP=0x00000000001bfd39
- (BOOL)_evaluateIsEncryptedCriterion:(id)arg1;	// IMP=0x00000000001bfd1d
- (BOOL)_evaluateIsDigitallySignedCriterion:(id)arg1;	// IMP=0x00000000001bfd01
- (BOOL)_evaluateFullNameCriterion:(id)arg1;	// IMP=0x00000000001bf6dc
- (BOOL)_evaluateAddressHistoryCriterion:(id)arg1 successfullyEvaluated:(char *)arg2;	// IMP=0x00000000001beeae
- (BOOL)_evaluateAccountCriterion:(id)arg1;	// IMP=0x00000000001bed0c
- (BOOL)_evaluateMemberOfVIPSendersCriterion:(id)arg1;	// IMP=0x00000000001bec53
- (BOOL)_evaluateMemberOfGroupCriterion:(id)arg1;	// IMP=0x00000000001be911
- (BOOL)_doesGroup:(id)arg1 containSender:(id)arg2;	// IMP=0x00000000001be47e
- (BOOL)_evaluateAddressBookCriterion:(id)arg1;	// IMP=0x00000000001be318
- (BOOL)_evaluateBodyCriterion:(id)arg1 fetchBody:(BOOL)arg2 needsBody:(char *)arg3;	// IMP=0x00000000001bdff6
- (BOOL)_evaluateHeaderCriterion:(id)arg1;	// IMP=0x00000000001bd4c8
- (BOOL)_evaluateDateCriterion:(id)arg1;	// IMP=0x00000000001bd25f
- (void)addHeadersRequiredForRoutingToArray:(id)arg1;	// IMP=0x00000000001bd012
- (id)_headersRequiredForEvaluation;	// IMP=0x00000000001bceba
@property(readonly, copy, nonatomic) NSArray *recursiveGroupUniqueIDs;
- (void)setCriterionIdentifier:(id)arg1;	// IMP=0x00000000001bcadd
- (id)dictionaryRepresentationIncludePII:(BOOL)arg1;	// IMP=0x00000000001bc847
- (BOOL)isEquivalent:(id)arg1;	// IMP=0x00000000001bc4ba
- (unsigned long long)hash;	// IMP=0x00000000001bc3e8
- (BOOL)isEqual:(id)arg1;	// IMP=0x00000000001bc1ea
@property(readonly, copy) NSString *originalGroupUniqueID;
- (id)initWithDictionary:(id)arg1 andRemoveRecognizedKeysIfMutable:(BOOL)arg2;	// IMP=0x00000000001bbe4c
- (id)SQLExpressionWithContext:(CDStruct_c53ccb4e *)arg1 depth:(unsigned long long)arg2 enclosingSmartMailboxes:(id)arg3;	// IMP=0x00000000000572c0
- (BOOL)isExpressibleInTigerSchema;	// IMP=0x0000000000056ffc
- (BOOL)hasNumberCriterion;	// IMP=0x0000000000056faf
- (id)criterionByMergingSpotlightCriteria;	// IMP=0x0000000000056878
- (id)fixOnceWithExpandedSmartMailboxes:(id)arg1 forSpotlight:(BOOL)arg2;	// IMP=0x0000000000056486
- (void)setRuleExpression:(id)arg1;	// IMP=0x00000000001bbc5e
- (id)ruleExpression;	// IMP=0x00000000001bbc12
- (void)setRuleQualifier:(unsigned int)arg1;	// IMP=0x00000000001bbac0
- (unsigned int)ruleQualifier;	// IMP=0x00000000001bb92e
- (void)setRuleHeader:(id)arg1;	// IMP=0x00000000001bb8c4
- (id)ruleHeader;	// IMP=0x00000000001bb86c
@property(nonatomic) unsigned int ruleType;

@end

