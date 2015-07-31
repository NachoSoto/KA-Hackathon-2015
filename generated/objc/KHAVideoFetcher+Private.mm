// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.idl

#import "KHAVideoFetcher+Private.h"
#import "KHAVideoFetcher.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "KHAVideo+Private.h"
#import "KHAVideoFetcher+Private.h"
#include <exception>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface KHAVideoFetcher ()

@property (nonatomic, readonly) ::djinni::DbxCppWrapperCache<::Khan::VideoFetcher>::Handle cppRef;

- (id)initWithCpp:(const std::shared_ptr<::Khan::VideoFetcher>&)cppRef;

@end

@implementation KHAVideoFetcher

- (id)initWithCpp:(const std::shared_ptr<::Khan::VideoFetcher>&)cppRef
{
    if (self = [super init]) {
        _cppRef.assign(cppRef);
    }
    return self;
}

- (nonnull NSArray *)fetchVideos {
    try {
        auto r = _cppRef.get()->fetchVideos();
        return ::djinni::List<::djinni_generated::Video>::fromCpp(r);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable KHAVideoFetcher *)createFetcher {
    try {
        auto r = ::Khan::VideoFetcher::createFetcher();
        return ::djinni_generated::VideoFetcher::fromCpp(r);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

@end

namespace djinni_generated {

auto VideoFetcher::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc.cppRef.get();
}

auto VideoFetcher::fromCpp(const CppType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::DbxCppWrapperCache<::Khan::VideoFetcher>::getInstance()->get(cpp, [] (const CppType& p) {
        return [[KHAVideoFetcher alloc] initWithCpp:p];
    });
}

}  // namespace djinni_generated
