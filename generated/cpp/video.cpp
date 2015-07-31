// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.idl

#include "video.hpp"  // my header

namespace Khan {


bool operator==(const Video& lhs, const Video& rhs) {
    return lhs.hasQuestions == rhs.hasQuestions &&
           lhs.downloadUrls == rhs.downloadUrls &&
           lhs.url == rhs.url &&
           lhs.duration == rhs.duration &&
           lhs.authors == rhs.authors &&
           lhs.title == rhs.title &&
           lhs.videoDescription == rhs.videoDescription &&
           lhs.type == rhs.type;
}

bool operator!=(const Video& lhs, const Video& rhs) {
    return !(lhs == rhs);
}

}  // namespace Khan
