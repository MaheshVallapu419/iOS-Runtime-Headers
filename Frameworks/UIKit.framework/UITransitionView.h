/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, UIResponder, UIView, UIWindow;

@interface UITransitionView : UIView <NSCoding> {
    int _animationTimingCurve;
    float _curlUpRevealedHeight;
    id _delegate;
    UIResponder *_firstResponderToRemember;
    UIView *_fromView;
    NSMutableArray *_frozenSubviews;
    BOOL _ignoreDirectTouchEvents;
    UIWindow *_originalWindow;
    UIView *_toView;
    struct { 
        unsigned int animationInProgress : 1; 
        unsigned int ignoresInteractionEvents : 1; 
        unsigned int shouldNotifyDidCompleteImmediately : 1; 
        unsigned int useViewControllerAppearanceCallbacks : 1; 
        unsigned int shouldRestoreFromViewAlpha : 1; 
        unsigned int shouldRasterize : 1; 
        unsigned int enableRotationAfterTransition : 1; 
        unsigned int removeFromView : 1; 
    } _transitionViewFlags;
}

@property int animationTimingCurve;
@property BOOL ignoreDirectTouchEvents;
@property BOOL shouldNotifyDidCompleteImmediately;

+ (double)defaultDurationForTransition:(int)arg1;

- (float)_curlUpRevealedHeight;
- (void)_didCompleteTransition:(BOOL)arg1;
- (void)_didStartTransition;
- (BOOL)_isTransitioningFromFromView:(id)arg1;
- (void)_startTransition:(int)arg1 withDuration:(double)arg2;
- (void)_transitionDidStop:(id)arg1 finished:(id)arg2;
- (int)animationTimingCurve;
- (void)dealloc;
- (id)delegate;
- (double)durationForTransition:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fromView;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)ignoreDirectTouchEvents;
- (BOOL)ignoresInteractionEvents;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isTransitioning;
- (void)notifyDidCompleteTransition:(id)arg1;
- (BOOL)rasterizesOnTransition;
- (void)setAnimationTimingCurve:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIgnoreDirectTouchEvents:(BOOL)arg1;
- (void)setIgnoresInteractionEvents:(BOOL)arg1;
- (void)setRasterizesOnTransition:(BOOL)arg1;
- (void)setShouldNotifyDidCompleteImmediately:(BOOL)arg1;
- (BOOL)shouldNotifyDidCompleteImmediately;
- (id)toView;
- (BOOL)transition:(int)arg1 fromView:(id)arg2 toView:(id)arg3;
- (BOOL)transition:(int)arg1 fromView:(id)arg2 toView:(id)arg3 removeFromView:(BOOL)arg4;
- (BOOL)transition:(int)arg1 toView:(id)arg2;

@end
