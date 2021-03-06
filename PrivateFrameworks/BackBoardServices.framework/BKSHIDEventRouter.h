/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class NSSet;

@interface BKSHIDEventRouter : NSObject <NSSecureCoding> {
    int _destination;
    NSSet *_hidEventDescriptors;
}

@property(readonly) int destination;
@property(readonly) NSSet * hidEventDescriptors;

+ (id)defaultEventRouters;
+ (id)defaultFocusedAppEventRouter;
+ (id)defaultSystemAppEventRouter;
+ (id)routerWithDestination:(int)arg1;
+ (BOOL)supportsSecureCoding;

- (void)addHIDEventDescriptors:(id)arg1;
- (BOOL)containsDescriptor:(id)arg1;
- (void)dealloc;
- (id)description;
- (int)destination;
- (id)dumpContents;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)hidEventDescriptors;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestination:(int)arg1;
- (id)initWithDestination:(int)arg1 hidEventDescriptors:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)removeHIDEventDescriptors:(id)arg1;
- (BOOL)specifiesDescriptor:(id)arg1;
- (id)stringForDestination:(int)arg1;

@end
