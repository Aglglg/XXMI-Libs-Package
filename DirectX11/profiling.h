#pragma once

#include <wrl.h>
#include <string>

namespace Profiling {
	enum class Mode {
		NONE = 0,
		SUMMARY,
		TOP_COMMAND_LISTS,
		TOP_COMMANDS,
		CTO_WARNING,

		INVALID, // Must be last
	};

	class Overhead {
	public:
		LARGE_INTEGER cpu;
		unsigned count, hits;

		void clear();
	};

	struct State {
		LARGE_INTEGER start_time;
	};

	static inline void start(State *state)
	{
		QueryPerformanceCounter(&state->start_time);
	}

	static inline void end(State *state, Profiling::Overhead *overhead)
	{
		LARGE_INTEGER end_time;

		QueryPerformanceCounter(&end_time);
		overhead->cpu.QuadPart += end_time.QuadPart - state->start_time.QuadPart;
	}

	template<class T>
	static inline typename T::iterator lookup_map(T &map, typename T::key_type key, Profiling::Overhead *overhead)
	{
		Profiling::State state;

		if (Profiling::mode == Profiling::Mode::SUMMARY) {
			overhead->count++;
			Profiling::start(&state);
		}
		auto ret = map.find(key);
		if (Profiling::mode == Profiling::Mode::SUMMARY) {
			Profiling::end(&state, overhead);
			if (ret != end(map))
				overhead->hits++;
		}
		return ret;
	}

	void update_txt();
	void update_cto_warning(bool warn);
	void clear();

	extern Mode mode;
	extern Overhead present_overhead;
	extern Overhead overlay_overhead;
	extern Overhead draw_overhead;
	extern Overhead map_overhead;
	extern Overhead hash_tracking_overhead;
	extern Overhead stat_overhead;
	extern Overhead shaderregex_overhead;
	extern Overhead cursor_overhead;
	extern std::wstring text;
	extern std::wstring cto_warning;
	extern INT64 interval;
	extern bool freeze;

	extern Overhead shader_hash_lookup_overhead;
	extern Overhead shader_reload_lookup_overhead;
	extern Overhead shader_original_lookup_overhead;
	extern Overhead shaderoverride_lookup_overhead;
	extern Overhead texture_handle_info_lookup_overhead;
	extern Overhead textureoverride_lookup_overhead;
	extern Overhead resource_pool_lookup_overhead;

	extern unsigned resource_full_copies;
	extern unsigned resource_reference_copies;
	extern unsigned inter_device_copies;
	extern unsigned msaa_resolutions;
	extern unsigned buffer_region_copies;
	extern unsigned views_cleared;
	extern unsigned resources_created;
	extern unsigned resource_pool_swaps;
	extern unsigned max_copies_per_frame_exceeded;
	extern unsigned injected_draw_calls;
	extern unsigned skipped_draw_calls;
	extern unsigned max_executions_per_frame_exceeded;
	extern unsigned iniparams_updates;

}
