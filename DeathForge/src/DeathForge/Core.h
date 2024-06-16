#pragma once

#ifdef DF_PLATFORM_WINDOWS
	#ifdef DF_BUILD_DLL
		#define DF_API __declspec(dllexport)
	#else
		#define DF_API __declspec(dllimport)
	#endif
#else
	#error Death Forge only supports Windows!
#endif