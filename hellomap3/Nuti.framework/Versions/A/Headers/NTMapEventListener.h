/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#import <Foundation/Foundation.h>


#ifdef __cplusplus
extern "C" {
#endif


#import "NTMapClickInfo.h"
#import "NTVectorElementsClickInfo.h"

/**
 * Listener for events like map and vector element clicks etc.
 */
__attribute__ ((visibility("default"))) @interface NTMapEventListener : NSObject
{
  void *swigCPtr;
  BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

/**
 * Creates a polymorphic instance of the given native object. This is used internally by the SDK.
 */
+(NTMapEventListener*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Listener method that gets called when the map is panned, rotated, tilted or zoomed.<br>
 * The thread this method is called from may vary.
 */
-(void)onMapMoved;
/**
 * Listener method that gets called when a click is performed on an empty area of the map.<br>
 * This method will NOT be called from the main thread.<br>
 * @param mapClickInfo A container that provides information about the click.
 */
-(void)onMapClicked: (NTMapClickInfo*)mapClickInfo;
/**
 * Listener method that gets called when a click is performed on a vector element.<br>
 * If there are multiple vector elements that are located at the click position, then the<br>
 * results will be sorted by their distance to the camera. The closest element will be the first one<br>
 * in the list. This method will NOT be called from the main thread.<br>
 * @param vectorElementsClickInfo A container that provides information about the click.
 */
-(void)onVectorElementClicked: (NTVectorElementsClickInfo*)vectorElementsClickInfo;
/**
 * Listener method that gets called at the start of the rendering process.<br>
 * The method can be used to synchronize vector elements with renderer state, for example<br>
 * to force marker to be always at the center of the screen (focus point).<br>
 * This method is called from GL renderer thread, not from main thread.
 */
-(void)onBeforeDrawFrame;
/**
 * Listener method that gets called at the start of the rendering process.<br>
 * The method can be used to synchronize vector elements with renderer state, for example<br>
 * to force marker to be always at the center of the screen (focus point).<br>
 * This method is called from GL renderer thread, not from main thread.
 */
-(void)onBeforeDrawFrameSwigExplicitNTMapEventListener;
/**
 * Listener method that gets called at the end of the rendering process.<br>
 * This method is called from GL renderer thread, not from main thread.
 */
-(void)onAfterDrawFrame;
/**
 * Listener method that gets called at the end of the rendering process.<br>
 * This method is called from GL renderer thread, not from main thread.
 */
-(void)onAfterDrawFrameSwigExplicitNTMapEventListener;
/**
 * Returns the actual class name of this object. This is used internally by the SDK.<br>
 * @return The class name of this object.
 */
-(NSString*)swigGetClassName;
/**
 * Returns the pointer to the connected director object. This is used internally by the SDK.<br>
 * @return The pointer to the connected director object or null if director is not connected.
 */
-(void *)swigGetDirectorObject;
-(id)init;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

