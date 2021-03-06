/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKMeshBufferZone : NSObject <MDLMeshBufferZone> {
    GLKMeshBufferAllocator *_allocator;
    NSMutableOrderedSet *_buffers;
    unsigned int _capacity;
    BOOL _destroyInvoked;
    unsigned int _glBufferName;
}

@property (nonatomic, readonly) <MDLMeshBufferAllocator> *allocator;
@property (nonatomic, readonly) unsigned int capacity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int glBufferName;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allocator;
- (unsigned int)capacity;
- (void)dealloc;
- (void)destroyBuffer:(id)arg1;
- (unsigned int)glBufferName;
- (id)initWithCapacity:(unsigned int)arg1 allocator:(id)arg2;
- (id)newBufferWithLength:(unsigned int)arg1 type:(unsigned int)arg2;

@end
