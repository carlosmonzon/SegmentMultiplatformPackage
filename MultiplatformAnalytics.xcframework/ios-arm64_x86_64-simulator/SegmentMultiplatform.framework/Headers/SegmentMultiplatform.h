#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SegmentMultiplatformAnalyticsCompanion, SEGAnalytics, SegmentMultiplatformAnalytics, SegmentMultiplatformConfiguration;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SegmentMultiplatformBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface SegmentMultiplatformBase (SegmentMultiplatformBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface SegmentMultiplatformMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SegmentMultiplatformMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorSegmentMultiplatformKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface SegmentMultiplatformNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface SegmentMultiplatformByte : SegmentMultiplatformNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface SegmentMultiplatformUByte : SegmentMultiplatformNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface SegmentMultiplatformShort : SegmentMultiplatformNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface SegmentMultiplatformUShort : SegmentMultiplatformNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface SegmentMultiplatformInt : SegmentMultiplatformNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface SegmentMultiplatformUInt : SegmentMultiplatformNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface SegmentMultiplatformLong : SegmentMultiplatformNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface SegmentMultiplatformULong : SegmentMultiplatformNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface SegmentMultiplatformFloat : SegmentMultiplatformNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface SegmentMultiplatformDouble : SegmentMultiplatformNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface SegmentMultiplatformBoolean : SegmentMultiplatformNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Analytics")))
@interface SegmentMultiplatformAnalytics : SegmentMultiplatformBase
@property (class, readonly, getter=companion) SegmentMultiplatformAnalyticsCompanion *companion __attribute__((swift_name("companion")));
- (void)aliasUserId:(NSString *)userId options:(NSDictionary<id, id> * _Nullable)options __attribute__((swift_name("alias(userId:options:)")));
- (void)groupGroupId:(NSString *)groupId traits:(NSDictionary<id, id> * _Nullable)traits options:(NSDictionary<id, id> * _Nullable)options __attribute__((swift_name("group(groupId:traits:options:)")));
- (void)identifyUserId:(NSString *)userId traits:(NSDictionary<id, id> * _Nullable)traits options:(NSDictionary<id, id> * _Nullable)options __attribute__((swift_name("identify(userId:traits:options:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)screenScreenTitle:(NSString *)screenTitle properties:(NSDictionary<id, id> * _Nullable)properties options:(NSDictionary<id, id> * _Nullable)options __attribute__((swift_name("screen(screenTitle:properties:options:)")));
- (void)trackName:(NSString *)name properties:(NSDictionary<id, id> * _Nullable)properties options:(NSDictionary<id, id> * _Nullable)options __attribute__((swift_name("track(name:properties:options:)")));
@property (readonly) SEGAnalytics *ios __attribute__((swift_name("ios")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Analytics.Companion")))
@interface SegmentMultiplatformAnalyticsCompanion : SegmentMultiplatformBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SegmentMultiplatformAnalyticsCompanion *shared __attribute__((swift_name("shared")));
- (SegmentMultiplatformAnalytics *)setupWithConfigurationConfiguration:(SegmentMultiplatformConfiguration *)configuration __attribute__((swift_name("setupWithConfiguration(configuration:)")));
- (SegmentMultiplatformAnalytics *)sharedContext:(id _Nullable)context __attribute__((swift_name("shared(context:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Configuration")))
@interface SegmentMultiplatformConfiguration : SegmentMultiplatformBase
- (instancetype)initWithWriteKey:(NSString *)writeKey __attribute__((swift_name("init(writeKey:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (SegmentMultiplatformConfiguration *)doCopyWriteKey:(NSString *)writeKey __attribute__((swift_name("doCopy(writeKey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *writeKey __attribute__((swift_name("writeKey")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaygroundKt")))
@interface SegmentMultiplatformPaygroundKt : SegmentMultiplatformBase
+ (void)test __attribute__((swift_name("test()")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
