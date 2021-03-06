/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCCGridViewController : HUControllableItemCollectionViewController <HUPrototypeLayoutOptionsEditorViewControllerDelegate> {
    <HUCCGridViewControllerDelegate> * _delegate;
    unsigned int  _itemType;
    int  _layoutStyle;
    BOOL  _needsLayoutOptionsUpdate;
    NSMapTable * _overrideCellLayoutOptionsByItem;
    BOOL  _viewVisible;
}

@property (nonatomic, readonly) HUGridFlowLayout *collectionViewLayout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUCCGridViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) HUCCGridItemManager *itemManager;
@property (nonatomic, readonly) unsigned int itemType;
@property (nonatomic, readonly) HUGridLayoutOptions *layoutOptions;
@property (nonatomic) int layoutStyle;
@property (nonatomic) BOOL needsLayoutOptionsUpdate;
@property (nonatomic, retain) NSMapTable *overrideCellLayoutOptionsByItem;
@property (readonly) Class superclass;
@property (getter=isViewVisible, nonatomic) BOOL viewVisible;

+ (id)_createLayoutOptionsForViewSize:(struct CGSize { float x1; float x2; })arg1 layoutStyle:(int)arg2 itemType:(unsigned int)arg3;
+ (struct { unsigned int x1; unsigned int x2; })_gridLayoutForItemType:(unsigned int)arg1 sizeSubclass:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)_cellLayoutOptionsForItem:(id)arg1;
- (void)_enqueueLayoutOptionsUpdate;
- (BOOL)_requiresUnlockToPerformActionForItem:(id)arg1;
- (void)_updateLayoutOptions;
- (void)_updateMaximumNumberOfItems;
- (id)allCellClasses;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)delegate;
- (BOOL)dismissQuickControlAnimated:(BOOL)arg1;
- (id)initWithItemType:(unsigned int)arg1 delegate:(id)arg2;
- (BOOL)isViewVisible;
- (BOOL)itemManager:(id)arg1 performBatchUpdateBlock:(id /* block */)arg2;
- (unsigned int)itemType;
- (id)layoutOptions;
- (void)layoutOptionsEditor:(id)arg1 didUpdateLayoutOptions:(id)arg2;
- (void)layoutOptionsEditorDidFinish:(id)arg1;
- (int)layoutStyle;
- (BOOL)needsLayoutOptionsUpdate;
- (id)overrideCellLayoutOptionsByItem;
- (id)prepareToPerformToggleActionForItem:(id)arg1 sourceItem:(id)arg2;
- (void)presentationCoordinator:(id)arg1 pressedStateDidChange:(BOOL)arg2 forItem:(id)arg3;
- (BOOL)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setLayoutStyle:(int)arg1;
- (void)setNeedsLayoutOptionsUpdate:(BOOL)arg1;
- (void)setOverrideCellLayoutOptionsByItem:(id)arg1;
- (void)setViewVisible:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end
