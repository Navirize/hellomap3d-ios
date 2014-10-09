/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.6
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


#import "VectorDataSource_proxy.h"
#import "VectorElement_proxy.h"

/**
 * A modifiable vector data source that keeps all the elements in the local memory.<br>
 * All elements are always rendered regardless of the current view state. This makes it suitable for cases<br>
 * where there are only a few constantly changing elements. For example, GPS location.<br>
 * <br>
 * The draw order of vector elements within the data source is undefined.
 */
@interface NTUnculledVectorDataSource : NTVectorDataSource
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Constructs an UnculledVectorDataSource object.<br>
 * @param projection The projection used by this data source.
 */
-(id)initWithProjection: (NTProjection*)projection;
-(VectorElementVector*)loadElements: (NTCullState*)cullState;
/**
 * Returns all vector elements added to this data source using add() and addAll() methods.<br>
 * @return A vector containing all the vector elements in this data source.
 */
-(VectorElementVector*)getAll;
/**
 * Adds a vector element to the data source. The vector element's coordinates are expected to be<br>
 * in the data source's projection's coordinate system. The order in which the elements are added has <br>
 * no effect on the order they get rendered.<br>
 * @param element The vector element to be added.
 */
-(void)add: (NTVectorElement*)element;
/**
 * Adds multiple vector elements to the data source. The vector elements' coordinates are expected to be<br>
 * in the data source's projection's coordinate system. The order in which the elements are added has<br>
 * no effect on the order they get rendered.<br>
 * @param elements A vector of vector elements to be added.
 */
-(void)addAll: (VectorElementVector*)elements;
/**
 * Removes a vector element from the data source.<br>
 * <br>
 * @return True if the vector element existed in the data source.
 */
-(BOOL)remove: (NTVectorElement*)elementToRemove;
/**
 * Removes all vector elements from the data source.<br>
 * @return The removed vector elements.
 */
-(VectorElementVector*)removeAll;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

