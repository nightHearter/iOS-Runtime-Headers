/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSIndexSet;

@interface TSCH3DCascadeAnimationTimeSlice : TSCH3DAnimationTimeSlice {
    struct tvec2<int> { 
        union { 
            int x; 
            int r; 
            int s; 
        } ; 
        union { 
            int y; 
            int g; 
            int t; 
        } ; 
    unsigned int mCascadeSlices;
    NSIndexSet *mElements;
    BOOL mReverse;
    } mSize;
}

@property unsigned int cascadeSlices;

+ (id)timeSliceWithIndexSet:(id)arg1 size:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 reverse:(BOOL)arg3 cascadeSlices:(unsigned int)arg4;
+ (id)timeSliceWithIndexSet:(id)arg1 size:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 reverse:(BOOL)arg3;

- (id).cxx_construct;
- (unsigned int)cascadeSlices;
- (void)dealloc;
- (id)initWithIndexSet:(id)arg1 size:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 reverse:(BOOL)arg3 cascadeSlices:(unsigned int)arg4;
- (struct box<glm::detail::tvec1<float> > { struct tvec1<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; } x1; struct tvec1<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; } x2; })rangeForIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1;
- (void)setCascadeSlices:(unsigned int)arg1;
- (unsigned int)totalSlices;

@end