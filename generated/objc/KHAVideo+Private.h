// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.idl

#import "KHAVideo.h"
#include "video.hpp"

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class KHAVideo;

namespace djinni_generated {

struct Video
{
    using CppType = ::Khan::Video;
    using ObjcType = KHAVideo*;

    using Boxed = Video;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);
};

}  // namespace djinni_generated
