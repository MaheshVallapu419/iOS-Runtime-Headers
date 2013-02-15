/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SUScriptTextFieldDelegate;

@interface SUScriptTextFieldNativeObject : SUScriptNativeObject <SUScriptTextFieldDelegate> {
    SUScriptTextFieldDelegate *_textFieldDelegate;
}

@property int autocapitalizationType;
@property int autocorrectionType;
@property int keyboardType;
@property(copy) NSString * placeholder;
@property(copy) NSString * value;
@property float width;

- (id)_nativeObjectDelegate;
- (void)_sendScriptDidChange;
- (void)_setNativeObjectDelegate:(id)arg1;
- (void)_textDidChange:(id)arg1;
- (void)_textDidEndEditingOnExit:(id)arg1;
- (int)autocapitalizationType;
- (int)autocorrectionType;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)destroyNativeObject;
- (int)keyboardType;
- (id)placeholder;
- (BOOL)resignFirstResponder;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)setAutocapitalizationType:(int)arg1;
- (void)setAutocorrectionType:(int)arg1;
- (void)setKeyboardType:(int)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setWidth:(float)arg1;
- (void)setupNativeObject;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (id)value;
- (float)width;

@end