/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKEventEditItemViewControllerDelegate>;

@interface EKEventEditItemViewController : UIViewController {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    <EKEventEditItemViewControllerDelegate> *_editDelegate;
    } _initialFrame;
    BOOL _modal;
    NSInteger _subitem;
}

@property <EKEventEditItemViewControllerDelegate> *editDelegate;
@property BOOL modal;
@property NSInteger subitem;

- (void)_saveAndDismissWithForce:(BOOL)arg1;
- (void)cancel;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopoverView;
- (void)didReceiveMemoryWarning;
- (id)editDelegate;
- (BOOL)fitsPopoverWhenKeyboardActive;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)modal;
- (void)saveAndDismiss;
- (void)saveAndDismissWithExtremePrejudice;
- (void)setEditDelegate:(id)arg1;
- (void)setModal:(BOOL)arg1;
- (void)setSubitem:(NSInteger)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (NSInteger)subitem;
- (BOOL)validateAllowingAlert:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end