/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNGeometryElement : NSObject <NSSecureCoding> {
    int  _bytesPerIndex;
    NSData * _elementData;
    struct __C3DMeshElement { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_2_1; unsigned char x_1_2_2[4]; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; int x_1_1_6; int x_1_1_7; } x1; unsigned int x2; unsigned int x3; struct __C3DMeshElement {} *x4; unsigned char x5; unsigned char x6; unsigned char x7; struct { BOOL x_8_1_1; struct __CFData {} *x_8_1_2; unsigned int x_8_1_3; } x8; struct { BOOL x_9_1_1; struct __CFData {} *x_9_1_2; unsigned int x_9_1_3; } x9; void *x10; struct __C3DMeshSource {} *x11; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x12[2]; } * _meshElement;
    int  _primitiveCount;
    int  _primitiveType;
}

@property (nonatomic, readonly) int bytesPerIndex;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) int primitiveCount;
@property (nonatomic, readonly) int primitiveType;

+ (id)_optimizedGeometryElementWithData:(id)arg1 primitiveType:(int)arg2 primitiveCount:(int)arg3 bytesPerIndex:(int)arg4;
+ (id)geometryElementWithData:(id)arg1 primitiveType:(int)arg2 primitiveCount:(int)arg3 bytesPerIndex:(int)arg4;
+ (id)geometryElementWithMDLSubmesh:(id)arg1;
+ (id)geometryElementWithMeshElementRef:(struct __C3DMeshElement { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_2_1; unsigned char x_1_2_2[4]; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; int x_1_1_6; int x_1_1_7; } x1; unsigned int x2; unsigned int x3; struct __C3DMeshElement {} *x4; unsigned char x5; unsigned char x6; unsigned char x7; struct { BOOL x_8_1_1; struct __CFData {} *x_8_1_2; unsigned int x_8_1_3; } x8; struct { BOOL x_9_1_1; struct __CFData {} *x_9_1_2; unsigned int x_9_1_3; } x9; void *x10; struct __C3DMeshSource {} *x11; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x12[2]; }*)arg1;
+ (BOOL)supportsSecureCoding;

- (float)_computeACMR;
- (void)_optimizeTriangleIndices;
- (id)_renderableElementCopy;
- (int)bytesPerIndex;
- (id)data;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)indexCount;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 primitiveType:(int)arg2 primitiveCount:(int)arg3 bytesPerIndex:(int)arg4;
- (id)initWithMeshElement:(struct __C3DMeshElement { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_2_1; unsigned char x_1_2_2[4]; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; int x_1_1_6; int x_1_1_7; } x1; unsigned int x2; unsigned int x3; struct __C3DMeshElement {} *x4; unsigned char x5; unsigned char x6; unsigned char x7; struct { BOOL x_8_1_1; struct __CFData {} *x_8_1_2; unsigned int x_8_1_3; } x8; struct { BOOL x_9_1_1; struct __CFData {} *x_9_1_2; unsigned int x_9_1_3; } x9; void *x10; struct __C3DMeshSource {} *x11; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x12[2]; }*)arg1;
- (struct __C3DMeshElement { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_2_1; unsigned char x_1_2_2[4]; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; int x_1_1_6; int x_1_1_7; } x1; unsigned int x2; unsigned int x3; struct __C3DMeshElement {} *x4; unsigned char x5; unsigned char x6; unsigned char x7; struct { BOOL x_8_1_1; struct __CFData {} *x_8_1_2; unsigned int x_8_1_3; } x8; struct { BOOL x_9_1_1; struct __CFData {} *x_9_1_2; unsigned int x_9_1_3; } x9; void *x10; struct __C3DMeshSource {} *x11; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x12[2]; }*)meshElement;
- (int)primitiveCount;
- (int)primitiveType;

@end
