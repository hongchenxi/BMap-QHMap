//
//  MapCommUtility.h
//  weekend
//
<<<<<<< HEAD
//  Created by caomei on 14/12/8.
//  Copyright (c) 2014年 MiBang. All rights reserved.
=======
//  Created by imqiuhang on 15/1/15.
//  Copyright (c) 2015年 your Co. Ltd. All rights reserved.
>>>>>>> master
//

#import <Foundation/Foundation.h>
#import "BMapKit.h"
<<<<<<< HEAD

@interface MapCommUtility : NSObject

+ (BMKCoordinateRegion) regionForAnnotations:(NSArray*) anns;
+ (CLLocationCoordinate2D)locationToBaidu:(CLLocationCoordinate2D)location;
+ (CLLocationCoordinate2D)gpsLocationToBaidu:(CLLocationCoordinate2D)location;
+ (NSString*)removeFormatWithStr:(NSString*)str;
+ (BMKCoordinateRegion) regionForCarAnnotations:(NSArray *)anns;

@end

@interface MapCommView : NSObject

+ (UIView*)getGoHereViewWithTitle:(NSString*)title
                      andSubTitle:(NSString*)subtitle
                      andLocation:(CLLocationCoordinate2D)location
                         andFrame:(CGRect)frame;

+ (UIButton*)getGoHereBtnWithFrame:(CGRect)frame
                            andSel:(SEL)event;

+ (UIButton*)getGoHereBtnWithFrame:(CGRect)frame
                        andSelName:(NSString*)eventName;

@end

@interface CustomMapLocation : NSObject

@property (nonatomic) CLLocationCoordinate2D location;

+ (instancetype)customLocationMake:(float)lat
                            andLon:(float)lon;

+ (instancetype)customLocationMakeWithCLL:(CLLocationCoordinate2D)cllLocation;

+ (instancetype)customLocationMakeWithGoogleLoc:(CLLocationCoordinate2D)cllLocation;

+ (instancetype)customLocationMakeWithGPSLoc:(CLLocationCoordinate2D)cllLocation;

@end



=======
#import "UIView+QHUiViewCtg.h"
#import "CAdefine.h"
@interface MapCommUtility : NSObject

+(BMKCoordinateRegion) regionForAnnotations:(NSArray*) anns;
+(CLLocationCoordinate2D)locationToBaidu:(CLLocationCoordinate2D)location;
+(CLLocationCoordinate2D)gpsLocationToBaidu:(CLLocationCoordinate2D)location;
+(NSString*)removeFormatWithStr:(NSString*)str;
+(BMKCoordinateRegion) regionForCarAnnotations:(NSArray *)anns;
@end



@interface MapCommView : NSObject

+(UIView*)getGoHereViewWithTitle:(NSString*)title andSubTitle:(NSString*)subtitle andLocation:(CLLocationCoordinate2D)location andFrame:(CGRect)frame;


+(UIButton*)getGoHereBtnWithFrame:(CGRect)frame andSel:(SEL)event;
+(UIButton*)getGoHereBtnWithFrame:(CGRect)frame andSelName:(NSString*)eventName;

@end

@interface CustomMapLocation : NSObject
@property(nonatomic)CLLocationCoordinate2D location;

+(CustomMapLocation*)customLocationMake:(float)lat andLon:(float)lon;
+(CustomMapLocation*)customLocationMakeWithCLL:(CLLocationCoordinate2D)cllLocation;
+(instancetype)customLocationMakeWithGoogleLoc:(CLLocationCoordinate2D)cllLocation;
+(instancetype)customLocationMakeWithGPSLoc:(CLLocationCoordinate2D)cllLocation;
@end
>>>>>>> master
