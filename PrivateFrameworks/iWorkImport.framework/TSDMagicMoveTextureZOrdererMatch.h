/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDMagicMoveAnimationMatch, TSDTextureSet;

@interface TSDMagicMoveTextureZOrdererMatch : NSObject {
    TSDMagicMoveAnimationMatch *_animationMatch;
    TSDTextureSet *_incomingTexture;
    int _incomingZIndex;
    BOOL _isIncomingZIndexUnmatched;
    BOOL _isOutgoingZIndexUnmatched;
    TSDTextureSet *_outgoingTexture;
    int _outgoingZIndex;
}

@property(readonly) TSDMagicMoveAnimationMatch * animationMatch;
@property(readonly) TSDTextureSet * incomingTexture;
@property int incomingZIndex;
@property(readonly) BOOL isIncomingZIndexUnmatched;
@property(readonly) BOOL isOutgoingZIndexUnmatched;
@property(readonly) TSDTextureSet * outgoingTexture;
@property int outgoingZIndex;

- (id)animationMatch;
- (void)dealloc;
- (id)description;
- (id)incomingTexture;
- (int)incomingZIndex;
- (id)initWithAnimationMatch:(id)arg1;
- (float)interpolatedZIndexAtPercent:(float)arg1;
- (float)intersectionPercentWithZOrdererMatch:(id)arg1;
- (BOOL)intersectsZOrdererMatch:(id)arg1;
- (BOOL)intersectsZOrdererMatch:(id)arg1 withAttemptedZIndex:(int)arg2;
- (BOOL)isIncomingZIndexUnmatched;
- (BOOL)isOutgoingZIndexUnmatched;
- (id)outgoingTexture;
- (int)outgoingZIndex;
- (void)setIncomingZIndex:(int)arg1;
- (void)setOutgoingZIndex:(int)arg1;

@end
