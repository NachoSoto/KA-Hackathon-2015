// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.idl

#include "NativeVideoFetcher.hpp"  // my header
#include "Marshal.hpp"
#include "NativeVideo.hpp"
#include "NativeVideoFetcher.hpp"

namespace djinni_generated {

NativeVideoFetcher::NativeVideoFetcher() : ::djinni::JniInterface<::Khan::VideoFetcher, NativeVideoFetcher>("org/khanacademy/core/shared/VideoFetcher$CppProxy") {}

NativeVideoFetcher::~NativeVideoFetcher() = default;


CJNIEXPORT void JNICALL Java_org_khanacademy_core_shared_VideoFetcher_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<djinni::CppProxyHandle<::Khan::VideoFetcher>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_org_khanacademy_core_shared_VideoFetcher_00024CppProxy_native_1fetchVideos(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::CppProxyHandle<::Khan::VideoFetcher>::get(nativeRef);
        auto r = ref->fetchVideos();
        return ::djinni::release(::djinni::List<::djinni_generated::NativeVideo>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_org_khanacademy_core_shared_VideoFetcher_createFetcher(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::Khan::VideoFetcher::createFetcher();
        return ::djinni::release(::djinni_generated::NativeVideoFetcher::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
