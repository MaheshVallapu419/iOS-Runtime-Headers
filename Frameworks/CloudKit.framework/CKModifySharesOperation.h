/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKModifySharesOperation : CKDatabaseOperation {
    NSMutableArray *_deletedShareIDs;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _modifySharesCompletionBlock;

    NSMutableDictionary *_savedSharesByShareID;
    NSMutableDictionary *_shareErrorsByShareID;
    NSArray *_shareIDsToDelete;
    NSMutableDictionary *_sharesByShareID;
    NSArray *_sharesToSave;
}

@property(retain) NSMutableArray * deletedShareIDs;
@property(copy) id modifySharesCompletionBlock;
@property(retain) NSMutableDictionary * savedSharesByShareID;
@property(retain) NSMutableDictionary * shareErrorsByShareID;
@property(readonly) NSArray * shareIDsToDelete;
@property(retain) NSMutableDictionary * sharesByShareID;
@property(readonly) NSArray * sharesToSave;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)deletedShareIDs;
- (void)fillOutOperationInfo:(id)arg1;
- (id)init;
- (id)initWithSharesToSave:(id)arg1 shareIDsToDelete:(id)arg2;
- (id)modifySharesCompletionBlock;
- (void)performCKOperation;
- (id)savedSharesByShareID;
- (void)setDeletedShareIDs:(id)arg1;
- (void)setModifySharesCompletionBlock:(id)arg1;
- (void)setSavedSharesByShareID:(id)arg1;
- (void)setShareErrorsByShareID:(id)arg1;
- (void)setSharesByShareID:(id)arg1;
- (id)shareErrorsByShareID;
- (id)shareIDsToDelete;
- (id)sharesByShareID;
- (id)sharesToSave;

@end
