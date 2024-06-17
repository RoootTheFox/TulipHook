#pragma once

#include <FunctionData.hpp>
#include <TulipResult.hpp>
#include <WrapperData.hpp>
#include <memory>
#include <unordered_map>

namespace tulip::hook {
	class Handler;

	class Wrapper {
	public:
		std::unordered_map<void*, FunctionData> m_wrappers;
		std::unordered_map<void*, FunctionData> m_reverseWrappers;

		static Wrapper& get();

		Result<void*> createWrapper(void* address, WrapperMetadata const& metadata);
		Result<void*> createReverseWrapper(void* address, WrapperMetadata const& metadata);
	};
}
