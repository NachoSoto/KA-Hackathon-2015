#include "VideoFetcher.h"

using namespace std;

namespace Khan {
	std::shared_ptr<VideoFetcher> VideoFetcher::createFetcher() {
		return std::make_shared<Core::VideoFetcherImpl>();
	}

	namespace Core {
		VideoFetcherImpl::VideoFetcherImpl() {
		}

		vector<Video> VideoFetcherImpl::fetchVideos() {
			return {
				Video(false,
					  {
						  {"mp4", "mp4 URL"},
						  {"png", "thumbnail"}
					  },
					  "http://www.youtube.com/watch?v=dQw4w9WgXcQ",
					  522,
					  {"Sal Khan", "Nacho Soto"},
					  "Adding/subtracting negative numbers",
					  "Adding and subtracting negative numbers",
					  ContentType::VIDEO
					  ),
				Video(true,
					  {
						  {"mp4", "mp4 URL"},
					  },
					  "http://www.youtube.com/watch?v=C38B33ZywWs",
					  100,
					  {"Sal Khan"},
					  "Android Programming",
					  "We made an Android app and you won't believe what happened next",
					  ContentType::VIDEO
					  ),
			};
		}
	}
}
