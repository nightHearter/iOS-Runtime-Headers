/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeExportCache : NSObject {
    TSTStrokeLayerMergedStack * _mergedStrokes;
    struct TSTSimpleRange { 
        int origin; 
        unsigned int length; 
    }  _range;
    TSDStroke * _stroke;
}

@property (nonatomic, retain) TSTStrokeLayerMergedStack *mergedStrokes;
@property (nonatomic) struct TSTSimpleRange { int x1; unsigned int x2; } range;
@property (nonatomic, retain) TSDStroke *stroke;

- (void)dealloc;
- (id)initWithMergedStack:(id)arg1;
- (id)mergedStrokes;
- (struct TSTSimpleRange { int x1; unsigned int x2; })range;
- (void)setMergedStrokes:(id)arg1;
- (void)setRange:(struct TSTSimpleRange { int x1; unsigned int x2; })arg1;
- (void)setStroke:(id)arg1;
- (id)stroke;
- (id)strokeAtIndex:(unsigned short)arg1;

@end