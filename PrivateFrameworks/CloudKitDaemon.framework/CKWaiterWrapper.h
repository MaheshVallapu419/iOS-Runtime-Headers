/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray;

@interface CKWaiterWrapper : NSObject {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    id _waiter;
    NSArray *_zoneIDs;
}

@property(copy) id completionHandler;
@property(retain) id waiter;
@property(retain) NSArray * zoneIDs;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)completionHandler;
- (id)description;
- (void)setCompletionHandler:(id)arg1;
- (void)setWaiter:(id)arg1;
- (void)setZoneIDs:(id)arg1;
- (id)waiter;
- (id)zoneIDs;

@end
