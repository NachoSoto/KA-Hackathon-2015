#pragma once

#include "video_fetcher.hpp"

namespace Khan {
namespace Core {
	class VideoFetcherImpl : public VideoFetcher {
	public:
		VideoFetcherImpl();

		virtual std::vector<Video> fetchVideos() override;
	};
}
}
