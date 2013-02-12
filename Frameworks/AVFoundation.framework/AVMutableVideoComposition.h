/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMutableVideoCompositionInternal;

@interface AVMutableVideoComposition : AVVideoComposition {
    AVMutableVideoCompositionInternal *_mutableVideoComposition;
}

@property(retain) AVVideoCompositionCoreAnimationTool *animationTool;
@property(copy) NSArray *instructions;
@property ? frameDuration;
@property float renderScale;
@property CGSize renderSize;

+ (id)videoComposition;

- (id)animationTool;
- (id)compositor;
- (struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })frameDuration;
- (id)instructions;
- (float)renderScale;
- (struct CGSize { float x1; float x2; })renderSize;
- (void)setAnimationTool:(id)arg1;
- (void)setCompositor:(id)arg1;
- (void)setFrameDuration:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg1;
- (void)setInstructions:(id)arg1;
- (void)setRenderScale:(float)arg1;
- (void)setRenderSize:(struct CGSize { float x1; float x2; })arg1;

@end