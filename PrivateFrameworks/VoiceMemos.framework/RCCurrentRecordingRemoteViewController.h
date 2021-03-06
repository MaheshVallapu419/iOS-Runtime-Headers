/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class <RCCurrentRecordingViewControllerDelegate>, NSString;

@interface RCCurrentRecordingRemoteViewController : _UIRemoteViewController <RCUIClientCurrentRecordingViewController> {
    <RCCurrentRecordingViewControllerDelegate> *_delegate;
}

@property(copy,readonly) NSString * debugDescription;
@property <RCCurrentRecordingViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;

- (void).cxx_destruct;
- (void)currentRecordingAVStateDidChange:(id)arg1;
- (void)currentRecordingDidEnd;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
