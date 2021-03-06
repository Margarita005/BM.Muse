// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from validation.djinni

#import "Muse/gen-objc/IXNResultLevel.h"
#import <Foundation/Foundation.h>

/**
 * Represents the result of a synchronous operation.
 *
 * Results can be at different levels: eg, success, info, warning, error
 */
@interface IXNResult : NSObject
- (nonnull id)initWithLevel:(IXNResultLevel)level
                       type:(nonnull NSString *)type
                       code:(int32_t)code
                       info:(nonnull NSString *)info;

/**
 * The level of the result.
 * \return The
 * \if ANDROID_ONLY
 * ResultLevel
 * \elseif IOS_ONLY
 * ::IXNResultLevel
 * \endif
 */
@property (nonatomic, readonly) IXNResultLevel level;

/**
 * The type of operation that this result applies to as a string.
 * \return The type of this result.
 */
@property (nonatomic, readonly, nonnull) NSString * type;

/**
 * A machine-parseable error code
 * \return 0 if the result is a success, non-zero otherwise.
 */
@property (nonatomic, readonly) int32_t code;

/**
 * Human-readable description
 * \return A verbose description of the result (error message or status)
 */
@property (nonatomic, readonly, nonnull) NSString * info;

@end
