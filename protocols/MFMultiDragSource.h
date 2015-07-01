/* Generated by RuntimeBrowser.
 */

@protocol MFMultiDragSource <NSObject>

@required

- (BOOL)allowsDrag;
- (void)animatePlaceholderForDragFailureWithItems:(NSArray *)arg1;
- (void)dragCompletedWithItems:(NSArray *)arg1 success:(BOOL)arg2;
- (void)dragStartedWithItems:(NSArray *)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForDraggedItem:(id <MFDraggableItem>)arg1 isPivotView:(out BOOL*)arg2;
- (NSArray *)itemsForDragAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)shouldCollapseMultipleItems;
- (UIView *)viewForDragSource;
- (UIView *)viewForDraggedItem:(id <MFDraggableItem>)arg1 atScale:(float)arg2;

@end