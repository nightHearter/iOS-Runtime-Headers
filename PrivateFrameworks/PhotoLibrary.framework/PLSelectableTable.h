/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UITableCell;



@interface PLSelectableTable : UITable 
{
    BOOL _allowsCellSelection;
    UITableCell *_selectedCell;
    float _topPadding;
}


- (BOOL)_canDrawContent;
- (void)dealloc;
- (void)setAllowsCellSelection:(BOOL)arg1;
- (void)selectRow:(NSInteger)arg1 byExtendingSelection:(BOOL)arg2;
- (void)highlightView:(id)arg1 state:(BOOL)arg2;
- (void)setTopPadding:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectOfRow:(NSInteger)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rowsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end