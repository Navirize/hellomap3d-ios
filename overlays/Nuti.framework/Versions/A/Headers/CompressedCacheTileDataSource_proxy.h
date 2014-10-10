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


#import "MapTile_proxy.h"
#import "TileData_proxy.h"
#import "TileDataSource_proxy.h"

/**
 * A tile data source that loads tiles from another tile data source<br>
 * and caches them in memory as compressed images. This cache is not persistent, tiles <br>
 * will be cleared once the application closes.
 */
@interface NTCompressedCacheTileDataSource : NTTileDataSource
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Constructs a CompressedCacheTileDataSource object from tile data source.<br>
 * 
 */
-(id)initWithDataSource: (NTTileDataSource*)dataSource;
-(NTTileData*)loadTile: (NTMapTile*)mapTile;
-(void)notifyTilesChanged: (enum TilesType)tilesType removeTiles: (BOOL)removeTiles;
/**
 * Returns the compressed tile cache capacity.<br>
 * @return The compressed tile cache capacity in bytes.
 */
-(unsigned int)getCapacity;
/**
 * Sets the compressed tile cache capacity. Tiles from this cache can't be drawn directly to the screen,<br>
 * they must first be decompressed which may cause a small delay before they can be seen.<br>
 * The default is 5MB.<br>
 * @return The new compressed tile cache capacity in bytes.
 */
-(void)setCapacity: (unsigned int)capacity;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

