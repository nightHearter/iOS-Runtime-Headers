/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, _UITableCellTransientData;



@interface UITableCell : UIView 
{
    _UITableCellTransientData *_transientData;
    float _rightMargin;
    struct { 
        unsigned int dontShowSelection : 1; 
        unsigned int showDisclosure : 1; 
        unsigned int showTopSeparator : 1; 
        unsigned int separatorStyle : 3; 
        unsigned int selectionStyle : 3; 
        unsigned int hideDisclosure : 1; 
        unsigned int isBeingDeleted : 1; 
        unsigned int disclosureClickable : 1; 
        unsigned int selectionFadeFraction : 11; 
        unsigned int disclosureStyle : 1; 
        unsigned int showingRemoveControl : 1; 
        unsigned int alignment : 3; 
        unsigned int showDisclosureWhenReordering : 1; 
        unsigned int fadeDisclosure : 1; 
        unsigned int reserved : 2; 
    } _tableCellFlags;
    UIView *_disclosureView;
}


- (id)disclosureImage;
- (id)disclosurePressedImage;
- (void)dealloc;
- (id)removeControl;
- (void)setSelected:(BOOL)arg1 withFade:(BOOL)arg2;
- (void)updateHighlightColors;
- (BOOL)isAtLeastHalfSelected;
- (float)selectionPercent;
- (void)_deselectWithFlashCount:(NSInteger)arg1 duration:(double)arg2;
- (void)setSelected:(BOOL)arg1;
- (BOOL)isSelected;
- (void)setShowSelection:(BOOL)arg1;
- (void)setShowSelectionNoRedisplay:(BOOL)arg1;
- (void)setSeparatorStyle:(NSInteger)arg1;
- (void)setShowDisclosure:(BOOL)arg1;
- (void)setSelectionStyle:(NSInteger)arg1;
- (void)setDisclosureStyle:(NSInteger)arg1;
- (void)setDisclosureStyleNoUpdate:(NSInteger)arg1;
- (NSInteger)disclosureStyle;
- (NSInteger)separatorStyle;
- (void)setSeparatorStyleOnly:(NSInteger)arg1;
- (BOOL)showSelection;
- (BOOL)showDisclosure;
- (void)setAlpha:(float)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)cancelMouseTracking;
- (BOOL)cancelTouchTracking;
- (BOOL)_isReordering;
- (id)_grabberView;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_releaseGrabber;
- (void)_finishedFadingGrabber:(id)arg1 finished:(BOOL)arg2;
- (float)disclosureRightMargin;
- (BOOL)isReorderingEnabled;
- (void)setShowDisclosureWhenReordering:(BOOL)arg1;
- (BOOL)showDisclosureWhenReordering;
- (void)setEnableReordering:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_grabberBeganReorder:(id)arg1;
- (void)_grabberDragged:(id)arg1 yDelta:(float)arg2;
- (void)_grabberReleased:(id)arg1;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withFade:(float)arg2;
- (void)drawSeparatorInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawContentInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 selected:(BOOL)arg2;
- (void)_releaseRemoveControl;
- (void)removeFromSuperview;
- (void)setDisclosureClickable:(BOOL)arg1;
- (id)createRemoveControl;
- (id)createInsertControl;
- (void)_setDisclosureHidden:(BOOL)arg1;
- (void)_setGrabberHidden:(BOOL)arg1;
- (void)removeControlWillShowRemoveConfirmation:(id)arg1;
- (void)removeControlWillHideRemoveConfirmation:(id)arg1;
- (void)_setRightMargin:(float)arg1;
- (id)disclosureView;
- (void)setDisclosureView:(id)arg1;
- (id)_disclosureView;
- (float)removeButtonAnimationDuration;
- (void)_layoutSubviewsAnimated:(BOOL)arg1;
- (void)_setShowIndentSpacer:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isRemoveControlVisible;
- (void)_showDeleteOrInsertion:(BOOL)arg1 withDisclosure:(BOOL)arg2 animated:(BOOL)arg3 isDelete:(BOOL)arg4 andRemoveConfirmation:(BOOL)arg5;
- (void)_uiRemoveControlMinusButtonHideAnimationDone:(id)arg1;
- (void)_willBeDeleted;
- (BOOL)removeControl:(id)arg1 shouldRemoveTarget:(id)arg2;
- (void)removeControl:(id)arg1 willRemoveTarget:(id)arg2;
- (void)removeControl:(id)arg1 didRemoveTarget:(id)arg2;
- (void)insertControl:(id)arg1 shouldInsertWithTarget:(id)arg2;
- (id)_createDisclosureView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentBounds;
- (void)setShowDisclosure:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setRemoveCharge:(float)arg1;
- (void)_setDrawsTopSeparator:(BOOL)arg1;
- (void)layoutSubviews;
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;
- (void)_setSelectionFadeFraction:(float)arg1;

@end