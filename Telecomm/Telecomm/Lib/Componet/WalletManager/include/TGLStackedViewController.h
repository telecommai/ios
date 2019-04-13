//
//  TGLStackedViewController.h
//  TGLStackedViewController
//
//  Created by Tim Gleue on 07.04.14.
//  Copyright (c) 2014 Tim Gleue ( http://gleue-interactive.com )
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.

#import <UIKit/UIKit.h>

FOUNDATION_EXPORT double TGLStackedViewControllerVersionNumber;
FOUNDATION_EXPORT const unsigned char TGLStackedViewControllerVersionString[];

#import "TGLStackedLayout.h"
#import "TGLExposedLayout.h"

@interface TGLStackedViewController : UICollectionViewController <UICollectionViewDragDelegate>

/** The collection view layout object used when all items are collapsed.
 *
 * When using storyboards, this property is only intialized in method
 * `-viewDidLoad`.
 */
@property (nonatomic, readonly, nullable) TGLStackedLayout *stackedLayout;

/** The collection view layout object used when a single item is exposed. */
@property (nonatomic, readonly, nullable) TGLExposedLayout *exposedLayout;

/** Margins between collection view and items when exposed.
 *
 * Changes to this property take effect on next
 * item being selected, i.e. exposed.
 *
 * Default value is UIEdgeInsetsMake(40.0, 0.0, 0.0, 0.0)
 */
@property (nonatomic, assign) IBInspectable UIEdgeInsets exposedLayoutMargin;

/** Size of items when exposed if set to value not equal CGSizeZero.
 *
 * Changes to this property take effect on next
 * item being selected, i.e. exposed.
 *
 * Default value is CGSizeZero
 */
@property (nonatomic, assign) IBInspectable CGSize exposedItemSize;

/** Amount of overlap for items above exposed item.
 *
 * The value is effective only if `-exposedPinningMode`
 * is equal to `TGLExposedLayoutPinningModeNone` and
 * ignored otherwise. Changes to this property take
 * effect on next item being selected, i.e. exposed.
 *
 * Default value is 10.0
 */
@property (nonatomic, assign) IBInspectable CGFloat exposedTopOverlap;

/** Amount of overlap for items below exposed item.
 *
 * The value is effective only if `-exposedPinningMode`
 * is equal to `TGLExposedLayoutPinningModeNone` and
 * ignored otherwise. Changes to this property take
 * effect on next item being selected, i.e. exposed.
 *
 * Default value is 10.0
 */
@property (nonatomic, assign) IBInspectable CGFloat exposedBottomOverlap;

/** Number of items overlapping below exposed item.
 *
 * The value is effective only if `-exposedPinningMode`
 * is equal to `TGLExposedLayoutPinningModeNone` and
 * ignored otherwise. Changes to this property take
 * effect on next item being selected, i.e. exposed.
 *
 * Default value is 1
 */
@property (nonatomic, assign) IBInspectable NSUInteger exposedBottomOverlapCount;

/** Layout mode for other than exposed items.
 *
 * Controls how the items surrounding the exposed item
 * above and below should be layed out. When set to
 * `TGLExposedLayoutPinningModeNone` items are pushed to
 * the top and the bottom edges of the exposed item,
 * overlapping upwards and downwards by `-exposedTopOverlap`
 * and `-exposedBottomOverlap`. This is the default.
 *
 * When set to `TGLExposedLayoutPinningModeBelow` the
 * items above the exposed item are pushed to the exposed
 * item's top edge as above, while the items below are pinned
 * to the collection view's bottom edge, and overlapping upwards.
 *
 * When set to `TGLExposedLayoutPinningModeAll` all items but
 * the exposed item are pinned to the collection view's bottom
 * edge, and overlapping upwards.
 *
 * Default value is `TGLExposedLayoutPinningModeAll`
 */
@property (nonatomic, assign) TGLExposedLayoutPinningMode exposedPinningMode;

/** The number of items above the exposed item to be pinned.
 *
 * The value is effective only if `-exposedPinningMode`
 * is not equal to `TGLExposedLayoutPinningModeNone` and
 * ignored otherwise. Changes to this property take
 * effect on next item being selected, i.e. exposed.
 *
 * Default value is -1
 */
@property (nonatomic, assign) IBInspectable NSUInteger exposedTopPinningCount;

/** The number of items below the exposed item to be pinned.
 *
 * The value is effective only if `-exposedPinningMode`
 * is not equal to `TGLExposedLayoutPinningModeNone` and
 * ignored otherwise. Changes to this property take
 * effect on next item being selected, i.e. exposed.
 *
 * Default value is -1
 */
@property (nonatomic, assign) IBInspectable NSUInteger exposedBottomPinningCount;

/** Index path of currently exposed item.
 *
 * When the user exposes an item this property
 * contains the item's index path. The value
 * is nil if no item is exposed.
 *
 * Set this property to a valid item index path
 * location to expose it instead of the current
 * one, or set to nil to collapse all items.
 *
 * The exposed item's selected state is `YES`.
 *
 * The layout transition is animated. If no animation
 * is required call `-setExposedItemIndexPath:animated:`
 * instead.
 *
 * @see -setExposedItemIndexPath:animated:
 */
@property (nonatomic, strong, nullable) NSIndexPath *exposedItemIndexPath;

/** Allow exposed items to be interactively collapsed by a gesture.
 *
 * If `-exposedPinningMode` is set to `TGLExposedLayoutPinningModeNone`
 * a pinch gesture is used to interactively transition from exposed
 * to stacked layout. Otherwise a vertical pan gesture is used.
 *
 * The respective gesture is effective only if this property is `YES`.
 * Changes to this property take effect on next item being selected,
 * i.e. exposed.
 *
 * Default value is `YES`
 */
@property (nonatomic, assign) IBInspectable BOOL exposedItemsAreCollapsible;

/** Allow the overlapping parts of unexposed items
 * to be tapped and thus select another item.
 *
 * If set to `NO` (default), the currently exposed item
 * has to be tapped to deselect or interactively collapesed
 * before another item may be selected.
 */
@property (nonatomic, assign) IBInspectable BOOL unexposedItemsAreSelectable;

/** Factor used to scale items while being moved interactively.
 *
 * Default value is 0.95
 */
@property (nonatomic, assign) IBInspectable CGFloat movingItemScaleFactor;

/** Allow item being moved interactively to float above of all other items.
 *
 * Default value is `YES`
 */
@property (nonatomic, assign) IBInspectable BOOL movingItemOnTop;

/** Minimum amount of downwards panning at end of gesture to trigger collapse.
 *
 * Default value is 120.0
 */
@property (nonatomic, assign) IBInspectable CGFloat collapsePanMinimumThreshold;

/** Maximum amount of downwards panning to consider gesture transition to be complete.
 *
 * If the property value is less or equal 0.0 the exposed item's height is used.
 *
 * Default value is 0.0
 */
@property (nonatomic, assign) IBInspectable CGFloat collapsePanMaximumThreshold;

/** Minimum percentage of pinching at end of gesture to trigger collapse.
 *
 * Value 1.0 means 100%, i.e. fully pinched, and 0.0 means 0%, i.e. no pinch at all.
 *
 * Default value is 0.25
 */
@property (nonatomic, assign) IBInspectable CGFloat collapsePinchMinimumThreshold;

/** Returns the class to use when creating the exposed layout.
 *
 * If you subclass `TGLExposedLayout` overwrite this method
 * and return your subclass.
 */
+ (nonnull Class)exposedLayoutClass;

/** Sets the currently exposed item.
 *
 * Expose the item at a valid index path location
 * instead of the current one, or pass to `nil`
 * to collapse all items.
 *
 * The resulting layout transition may be animated.
 *
 * The exposed item's selected state is `YES`.
 *
 * @param exposedItemIndexPath The index path of the item to be exposed.
 * @param animated If `YES` the layout transition will be animated.
 *
 * @see -exposedItemIndexPath
 * @see -setExposedItemIndexPath:animated:completion:
 */
- (void)setExposedItemIndexPath:(nullable NSIndexPath *)exposedItemIndexPath animated:(BOOL)animated;

/** Sets the currently exposed item.
 *
 * Expose the item at a valid index path location
 * instead of the current one, or pass to `nil`
 * to collapse all items.
 *
 * The resulting layout transition may be animated.
 *
 * The exposed item's selected state is `YES`.
 *
 * @param exposedItemIndexPath The index path of the item to be exposed.
 * @param animated If `YES` the layout transition will be animated.
 * @param completion The block to execute after the transition finishes.
 *
 * @see -exposedItemIndexPath
 */
- (void)setExposedItemIndexPath:(nullable NSIndexPath *)exposedItemIndexPath animated:(BOOL)animated completion:(nullable void (^)(void))completion;

@end
