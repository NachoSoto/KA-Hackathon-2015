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
		return vector<Video>{
			Video(false, {{"one", "1"}, {"two", "2"}}, "test", 2, { "test", "test" }, "title", "description", ContentType::VIDEO)
		};
	}
}
}
