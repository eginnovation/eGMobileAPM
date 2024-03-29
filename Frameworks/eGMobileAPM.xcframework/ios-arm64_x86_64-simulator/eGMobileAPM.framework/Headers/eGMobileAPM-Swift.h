#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.2 (swiftlang-5.7.2.135.5 clang-1400.0.29.51)
#ifndef EGMOBILEAPM_SWIFT_H
#define EGMOBILEAPM_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="eGMobileAPM",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)



@class UITouch;
@class UIEvent;

@interface UIButton (SWIFT_EXTENSION(eGMobileAPM))
- (void)newtouchesBegan:(NSSet<UITouch *> * _Nonnull)touches with:(UIEvent * _Nullable)event;
- (void)newtouchesEnd:(NSSet<UITouch *> * _Nonnull)touches with:(UIEvent * _Nullable)event;
@end

@protocol UICollectionViewDelegate;
@class NSIndexPath;

@interface UICollectionView (SWIFT_EXTENSION(eGMobileAPM))
- (void)nsh_setWithDelegate:(id <UICollectionViewDelegate> _Nullable)delegate;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didSelectItemAt:(NSIndexPath * _Nonnull)indexPath;
@end


@interface UICollectionView (SWIFT_EXTENSION(eGMobileAPM))
- (void)newViewTouchesBegan:(NSSet<UITouch *> * _Nonnull)touches with:(UIEvent * _Nullable)event;
- (void)newViewTouchesEnded:(NSSet<UITouch *> * _Nonnull)touches with:(UIEvent * _Nullable)event;
@end


@class NSString;
@class NSData;

@interface UIImage (SWIFT_EXTENSION(eGMobileAPM))
- (nonnull instancetype)initWithContentsOfFile1:(NSString * _Nonnull)contentsOfFile1;
- (nonnull instancetype)initWithData1:(NSData * _Nonnull)data1;
- (nonnull instancetype)initWithData1:(NSData * _Nonnull)data1 scale1:(CGFloat)scale1;
@end

@protocol UITableViewDelegate;

@interface UITableView (SWIFT_EXTENSION(eGMobileAPM))
- (void)nsh_setWithDelegate:(id <UITableViewDelegate> _Nullable)delegate;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAt:(NSIndexPath * _Nonnull)indexPath;
@end


@interface UITableView (SWIFT_EXTENSION(eGMobileAPM))
- (void)newViewTouchesBegan:(NSSet<UITouch *> * _Nonnull)touches with:(UIEvent * _Nullable)event;
- (void)newViewTouchesEnded:(NSSet<UITouch *> * _Nonnull)touches with:(UIEvent * _Nullable)event;
@end







@class NSException;

SWIFT_CLASS("_TtC11eGMobileAPM5egAPM")
@interface egAPM : NSObject
+ (egAPM * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (void)startWithApptoken:(NSString * _Nonnull)apptoken;
- (void)startWithApptoken:(NSString * _Nonnull)apptoken collectorHost:(NSString * _Nonnull)collectorHost;
- (void)disableCrash;
- (void)enableCrash;
- (void)disableHTTP;
- (void)enableHTTP;
- (void)disableTrace;
- (void)enableTrace;
- (void)disableUI;
- (void)enableUI;
- (void)stop;
- (NSString * _Nonnull)userCountry SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)osVersion SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)deviceName SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)appName SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)appInfo SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)devInfo SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)resInfo SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)userInfo SWIFT_WARN_UNUSED_RESULT;
- (void)sendEventWithMonitorID:(NSString * _Nonnull)monitorID eventID:(NSString * _Nonnull)eventID payload:(NSDictionary<NSString *, id> * _Nonnull)payload;
- (void)sendSreenNameWithScreenName:(NSString * _Nonnull)screenName;
- (NSString * _Nonnull)getViewController SWIFT_WARN_UNUSED_RESULT;
- (void)leaveAction;
- (BOOL)setUserName:(NSString * _Nonnull)value;
- (BOOL)setAttribute:(NSString * _Nonnull)name :(id _Nonnull)value;
- (BOOL)setHttpAttribute:(NSString * _Nonnull)name :(id _Nonnull)value;
- (void)setCachePolicy:(enum NSURLCacheStoragePolicy)policy;
- (void)show;
- (void)hide;
- (void)ignoreURL:(NSString * _Nonnull)url;
- (void)saveCrashDetailsWithException:(NSException * _Nonnull)exception;
- (void)networkOperationNSURLConnectionWithContent:(NSString * _Nonnull)content;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@class NSDate;

SWIFT_CLASS("_TtC11eGMobileAPM11egHTTPModel")
@interface egHTTPModel : NSObject
@property (nonatomic, copy) NSString * _Nullable requestURL;
@property (nonatomic, copy) NSString * _Nullable requestMethod;
@property (nonatomic, copy) NSString * _Nullable requestCachePolicy;
@property (nonatomic, copy) NSDate * _Nullable requestDate;
@property (nonatomic, copy) NSString * _Nullable requestDateinMills;
@property (nonatomic, copy) NSString * _Nullable requestTime;
@property (nonatomic, copy) NSString * _Nullable requestTimeout;
@property (nonatomic, copy) NSDictionary * _Nullable requestHeaders;
@property (nonatomic, copy) NSString * _Nullable requestType;
@property (nonatomic, copy) NSString * _Nullable responseType;
@property (nonatomic, copy) NSDate * _Nullable responseDate;
@property (nonatomic, copy) NSString * _Nullable responseDateinmills;
@property (nonatomic, copy) NSString * _Nullable responseTime;
@property (nonatomic, copy) NSDictionary * _Nullable responseHeaders;
@property (nonatomic, strong) NSString * _Nullable randomHash;
@property (nonatomic, strong) NSString * _Nonnull shortType;
@property (nonatomic) BOOL noResponse;
- (NSString * _Nonnull)getRequestBody SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getResponseBody SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getRandomHash SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getRequestBodyFilepath SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getRequestBodyFilename SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getResponseBodyFilepath SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getResponseBodyFilename SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getDocumentsPath SWIFT_WARN_UNUSED_RESULT;
- (void)saveData:(NSString * _Nonnull)dataString toFile:(NSString * _Nonnull)toFile;
- (NSData * _Nullable)readRawData:(NSString * _Nonnull)fromFile SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getTimeFromDate:(NSDate * _Nonnull)date SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isSuccessful SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)formattedRequestLogEntry SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)formattedResponseLogEntry SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSURLRequest;
@class NSURLSessionTask;
@class NSCachedURLResponse;
@protocol NSURLProtocolClient;

SWIFT_CLASS("_TtC11eGMobileAPM10egProtocol")
@interface egProtocol : NSURLProtocol
+ (BOOL)canInitWithRequest:(NSURLRequest * _Nonnull)request SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)canInitWithTask:(NSURLSessionTask * _Nonnull)task SWIFT_WARN_UNUSED_RESULT;
- (void)startLoading;
- (void)stopLoading;
+ (NSURLRequest * _Nonnull)canonicalRequestForRequest:(NSURLRequest * _Nonnull)request SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithRequest:(NSURLRequest * _Nonnull)request cachedResponse:(NSCachedURLResponse * _Nullable)cachedResponse client:(id <NSURLProtocolClient> _Nullable)client OBJC_DESIGNATED_INITIALIZER;
@end

@class NSURLSession;
@class NSURLSessionDataTask;
@class NSURLResponse;
@class NSHTTPURLResponse;
@class NSURLAuthenticationChallenge;
@class NSURLCredential;

@interface egProtocol (SWIFT_EXTENSION(eGMobileAPM)) <NSURLSessionDataDelegate>
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didReceiveData:(NSData * _Nonnull)data;
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didReceiveResponse:(NSURLResponse * _Nonnull)response completionHandler:(void (^ _Nonnull)(NSURLSessionResponseDisposition))completionHandler;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didCompleteWithError:(NSError * _Nullable)error;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task willPerformHTTPRedirection:(NSHTTPURLResponse * _Nonnull)response newRequest:(NSURLRequest * _Nonnull)request completionHandler:(void (^ _Nonnull)(NSURLRequest * _Nullable))completionHandler;
- (void)URLSession:(NSURLSession * _Nonnull)session didBecomeInvalidWithError:(NSError * _Nullable)error;
- (void)URLSession:(NSURLSession * _Nonnull)session didReceiveChallenge:(NSURLAuthenticationChallenge * _Nonnull)challenge completionHandler:(void (^ _Nonnull)(NSURLSessionAuthChallengeDisposition, NSURLCredential * _Nullable))completionHandler;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(NSURLSession * _Nonnull)session;
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.7.2 (swiftlang-5.7.2.135.5 clang-1400.0.29.51)
#ifndef EGMOBILEAPM_SWIFT_H
#define EGMOBILEAPM_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="eGMobileAPM",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)



@class UITouch;
@class UIEvent;

@interface UIButton (SWIFT_EXTENSION(eGMobileAPM))
- (void)newtouchesBegan:(NSSet<UITouch *> * _Nonnull)touches with:(UIEvent * _Nullable)event;
- (void)newtouchesEnd:(NSSet<UITouch *> * _Nonnull)touches with:(UIEvent * _Nullable)event;
@end

@protocol UICollectionViewDelegate;
@class NSIndexPath;

@interface UICollectionView (SWIFT_EXTENSION(eGMobileAPM))
- (void)nsh_setWithDelegate:(id <UICollectionViewDelegate> _Nullable)delegate;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didSelectItemAt:(NSIndexPath * _Nonnull)indexPath;
@end


@interface UICollectionView (SWIFT_EXTENSION(eGMobileAPM))
- (void)newViewTouchesBegan:(NSSet<UITouch *> * _Nonnull)touches with:(UIEvent * _Nullable)event;
- (void)newViewTouchesEnded:(NSSet<UITouch *> * _Nonnull)touches with:(UIEvent * _Nullable)event;
@end


@class NSString;
@class NSData;

@interface UIImage (SWIFT_EXTENSION(eGMobileAPM))
- (nonnull instancetype)initWithContentsOfFile1:(NSString * _Nonnull)contentsOfFile1;
- (nonnull instancetype)initWithData1:(NSData * _Nonnull)data1;
- (nonnull instancetype)initWithData1:(NSData * _Nonnull)data1 scale1:(CGFloat)scale1;
@end

@protocol UITableViewDelegate;

@interface UITableView (SWIFT_EXTENSION(eGMobileAPM))
- (void)nsh_setWithDelegate:(id <UITableViewDelegate> _Nullable)delegate;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAt:(NSIndexPath * _Nonnull)indexPath;
@end


@interface UITableView (SWIFT_EXTENSION(eGMobileAPM))
- (void)newViewTouchesBegan:(NSSet<UITouch *> * _Nonnull)touches with:(UIEvent * _Nullable)event;
- (void)newViewTouchesEnded:(NSSet<UITouch *> * _Nonnull)touches with:(UIEvent * _Nullable)event;
@end







@class NSException;

SWIFT_CLASS("_TtC11eGMobileAPM5egAPM")
@interface egAPM : NSObject
+ (egAPM * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (void)startWithApptoken:(NSString * _Nonnull)apptoken;
- (void)startWithApptoken:(NSString * _Nonnull)apptoken collectorHost:(NSString * _Nonnull)collectorHost;
- (void)disableCrash;
- (void)enableCrash;
- (void)disableHTTP;
- (void)enableHTTP;
- (void)disableTrace;
- (void)enableTrace;
- (void)disableUI;
- (void)enableUI;
- (void)stop;
- (NSString * _Nonnull)userCountry SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)osVersion SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)deviceName SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)appName SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)appInfo SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)devInfo SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)resInfo SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)userInfo SWIFT_WARN_UNUSED_RESULT;
- (void)sendEventWithMonitorID:(NSString * _Nonnull)monitorID eventID:(NSString * _Nonnull)eventID payload:(NSDictionary<NSString *, id> * _Nonnull)payload;
- (void)sendSreenNameWithScreenName:(NSString * _Nonnull)screenName;
- (NSString * _Nonnull)getViewController SWIFT_WARN_UNUSED_RESULT;
- (void)leaveAction;
- (BOOL)setUserName:(NSString * _Nonnull)value;
- (BOOL)setAttribute:(NSString * _Nonnull)name :(id _Nonnull)value;
- (BOOL)setHttpAttribute:(NSString * _Nonnull)name :(id _Nonnull)value;
- (void)setCachePolicy:(enum NSURLCacheStoragePolicy)policy;
- (void)show;
- (void)hide;
- (void)ignoreURL:(NSString * _Nonnull)url;
- (void)saveCrashDetailsWithException:(NSException * _Nonnull)exception;
- (void)networkOperationNSURLConnectionWithContent:(NSString * _Nonnull)content;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@class NSDate;

SWIFT_CLASS("_TtC11eGMobileAPM11egHTTPModel")
@interface egHTTPModel : NSObject
@property (nonatomic, copy) NSString * _Nullable requestURL;
@property (nonatomic, copy) NSString * _Nullable requestMethod;
@property (nonatomic, copy) NSString * _Nullable requestCachePolicy;
@property (nonatomic, copy) NSDate * _Nullable requestDate;
@property (nonatomic, copy) NSString * _Nullable requestDateinMills;
@property (nonatomic, copy) NSString * _Nullable requestTime;
@property (nonatomic, copy) NSString * _Nullable requestTimeout;
@property (nonatomic, copy) NSDictionary * _Nullable requestHeaders;
@property (nonatomic, copy) NSString * _Nullable requestType;
@property (nonatomic, copy) NSString * _Nullable responseType;
@property (nonatomic, copy) NSDate * _Nullable responseDate;
@property (nonatomic, copy) NSString * _Nullable responseDateinmills;
@property (nonatomic, copy) NSString * _Nullable responseTime;
@property (nonatomic, copy) NSDictionary * _Nullable responseHeaders;
@property (nonatomic, strong) NSString * _Nullable randomHash;
@property (nonatomic, strong) NSString * _Nonnull shortType;
@property (nonatomic) BOOL noResponse;
- (NSString * _Nonnull)getRequestBody SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getResponseBody SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getRandomHash SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getRequestBodyFilepath SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getRequestBodyFilename SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getResponseBodyFilepath SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getResponseBodyFilename SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getDocumentsPath SWIFT_WARN_UNUSED_RESULT;
- (void)saveData:(NSString * _Nonnull)dataString toFile:(NSString * _Nonnull)toFile;
- (NSData * _Nullable)readRawData:(NSString * _Nonnull)fromFile SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getTimeFromDate:(NSDate * _Nonnull)date SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isSuccessful SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)formattedRequestLogEntry SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)formattedResponseLogEntry SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSURLRequest;
@class NSURLSessionTask;
@class NSCachedURLResponse;
@protocol NSURLProtocolClient;

SWIFT_CLASS("_TtC11eGMobileAPM10egProtocol")
@interface egProtocol : NSURLProtocol
+ (BOOL)canInitWithRequest:(NSURLRequest * _Nonnull)request SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)canInitWithTask:(NSURLSessionTask * _Nonnull)task SWIFT_WARN_UNUSED_RESULT;
- (void)startLoading;
- (void)stopLoading;
+ (NSURLRequest * _Nonnull)canonicalRequestForRequest:(NSURLRequest * _Nonnull)request SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithRequest:(NSURLRequest * _Nonnull)request cachedResponse:(NSCachedURLResponse * _Nullable)cachedResponse client:(id <NSURLProtocolClient> _Nullable)client OBJC_DESIGNATED_INITIALIZER;
@end

@class NSURLSession;
@class NSURLSessionDataTask;
@class NSURLResponse;
@class NSHTTPURLResponse;
@class NSURLAuthenticationChallenge;
@class NSURLCredential;

@interface egProtocol (SWIFT_EXTENSION(eGMobileAPM)) <NSURLSessionDataDelegate>
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didReceiveData:(NSData * _Nonnull)data;
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didReceiveResponse:(NSURLResponse * _Nonnull)response completionHandler:(void (^ _Nonnull)(NSURLSessionResponseDisposition))completionHandler;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didCompleteWithError:(NSError * _Nullable)error;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task willPerformHTTPRedirection:(NSHTTPURLResponse * _Nonnull)response newRequest:(NSURLRequest * _Nonnull)request completionHandler:(void (^ _Nonnull)(NSURLRequest * _Nullable))completionHandler;
- (void)URLSession:(NSURLSession * _Nonnull)session didBecomeInvalidWithError:(NSError * _Nullable)error;
- (void)URLSession:(NSURLSession * _Nonnull)session didReceiveChallenge:(NSURLAuthenticationChallenge * _Nonnull)challenge completionHandler:(void (^ _Nonnull)(NSURLSessionAuthChallengeDisposition, NSURLCredential * _Nullable))completionHandler;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(NSURLSession * _Nonnull)session;
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
