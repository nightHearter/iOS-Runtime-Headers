/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIRefreshControlModernContentView : _UIRefreshControlContentView {
    BOOL  _animationsAreValid;
    BOOL  _areAnimationsValid;
    float  _currentPopStiffness;
    BOOL  _hasFinishedRevealing;
    float  _impactIntensity;
    UIView * _replicatorContainer;
    _UIRefreshControlModernReplicatorView * _replicatorView;
    BOOL  _scrollViewVerticalFeedbackBehaviorEnabled;
    UIView * _seed;
    UILabel * _textLabel;
}

@property (nonatomic) BOOL areAnimationsValid;
@property (nonatomic) float currentPopStiffness;
@property (nonatomic) float impactIntensity;
@property (nonatomic, readonly) UILabel *textLabel;

- (void).cxx_destruct;
- (void)_bloom;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_bloomedSeedTransform;
- (void)_cleanUpAfterRevealing;
- (double)_currentTimeOffset;
- (float)_effectiveScrollViewHeight;
- (id)_effectiveTintColor;
- (id)_effectiveTintColorWithAlpha:(float)arg1;
- (void)_goAway;
- (float)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
- (float)_percentageShowing;
- (void)_resetToRevealingState;
- (void)_reveal;
- (void)_setBloomedAppearance;
- (void)_setSpunAppearance;
- (void)_setUnbloomedAppearance;
- (void)_snappingMagic;
- (void)_spin;
- (void)_tick;
- (void)_tickDueToProgrammaticRefresh;
- (void)_unbloom;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_unbloomedSeedTransform;
- (void)_updateTimeOffsetOfRelevantLayers;
- (BOOL)areAnimationsValid;
- (id)attributedTitle;
- (float)currentPopStiffness;
- (void)didTransitionFromState:(int)arg1 toState:(int)arg2;
- (float)impactIntensity;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (float)maximumSnappingHeight;
- (void)setAreAnimationsValid:(BOOL)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)setCurrentPopStiffness:(float)arg1;
- (void)setImpactIntensity:(float)arg1;
- (void)setTintColor:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)style;
- (id)textLabel;
- (void)willTransitionFromState:(int)arg1 toState:(int)arg2;

@end
