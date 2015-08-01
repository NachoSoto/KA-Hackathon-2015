#pragma once

#include "video_fetcher.hpp"

namespace Khan {
namespace Core {
	class VideoFetcherImpl final : public VideoFetcher {
	public:
		VideoFetcherImpl();

		virtual std::vector<Video> fetchVideos() override;
	};
}
}
