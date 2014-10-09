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


#import "Projection_proxy.h"

/**
 * EPSG:3857 is a Spherical Mercator projection coordinate system popularized by web services such as Google and later OpenStreetMap.<br>
 * Z-coordinate denotes height in meters.
 */
@interface NTEPSG3857 : NTProjection
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
-(id)init;
-(double)fromInternalScale: (double)size;
-(NTMapPos*)fromWgs84: (NTMapPos*)wgs84Pos;
-(NTMapPos*)toWgs84: (NTMapPos*)mapPos;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

