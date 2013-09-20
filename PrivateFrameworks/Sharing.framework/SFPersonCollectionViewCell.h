/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class CALayer, NSArray, NSObject<SFPersonCollectionViewCellDelegate>, NSProgress, NSString, SFAirDropNode, SFCircleProgressView, UIColor, UILabel, _SFPersonImageView;

@interface SFPersonCollectionViewCell : UICollectionViewCell {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    int _cellState;
    SFCircleProgressView *_circleProgressView;
    UILabel *_declinedLabel;
    NSObject<SFPersonCollectionViewCellDelegate> *_delegate;
    UILabel *_failedLabel;
    UILabel *_nameLabel;
    CALayer *_nameLabelMaskLayer;
    } _nameLabelOneLineFrame;
    float _nameLabelOriginY;
    } _nameLabelTwoLinesFrame;
    SFAirDropNode *_person;
    _SFPersonImageView *_personImageView;
    } _personViewFrame;
    NSProgress *_progress;
    NSArray *_progressKeyPaths;
    id _progressToken;
    UILabel *_secondaryNameLabel;
    UILabel *_sendingLabel;
    UILabel *_sentLabel;
    NSString *_sessionID;
    BOOL _stateBeingRestored;
    UIColor *_textColor;
    UILabel *_waitingLabel;
}

@property int cellState;
@property NSObject<SFPersonCollectionViewCellDelegate> * delegate;
@property(retain) SFAirDropNode * person;
@property(retain) NSProgress * progress;
@property(retain) NSString * sessionID;
@property BOOL stateBeingRestored;
@property(retain) UIColor * textColor;

- (void).cxx_destruct;
- (void)addObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)animateCellShow:(BOOL)arg1 delay:(double)arg2 completion:(id)arg3;
- (int)cellState;
- (id)createLabelWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (void)handleKVOUpdateForPerson:(id)arg1 keyPath:(id)arg2;
- (void)handleKVOUpdateForProgress:(id)arg1 keyPath:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)person;
- (void)prepareForReuse;
- (id)progress;
- (void)removeObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)resetNameLabel;
- (void)resetPersonIconView;
- (void)restoreCellStateFromFinalTransferState:(int)arg1;
- (id)sessionID;
- (void)setCellState:(int)arg1 animated:(BOOL)arg2;
- (void)setCellState:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setPerson:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setStateBeingRestored:(BOOL)arg1;
- (void)setTextColor:(id)arg1;
- (BOOL)stateBeingRestored;
- (void)switchToStatusLabel:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (id)textColor;
- (void)triggerKVOForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)updateNameLabel;
- (void)updatePersonIconView;
- (void)userDidCancel;
- (void)userDidSelect;
- (id)visibleStatusLabel;

@end