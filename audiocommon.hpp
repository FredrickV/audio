#ifndef AUDIO_COMMON_H
#define AUDIO_COMMON_H

#include <mutex>
#include <thread>
#include <stdint.h>
#include <assert.h>

// TODO: Linux

#ifdef AUDIO_EXPORT

#ifdef _MSC_VER
#define AUDIO_LIB __declspec(dllexport)
#endif

#else 
#define AUDIO_LIB


#endif



namespace audio {
    typedef uint64_t Uint64;
    typedef int16_t Int16;
    typedef int32_t Int32;
    typedef int64_t Int64;
    typedef uint32_t Uint32;
    typedef uint16_t Uint16;
    typedef uint8_t Uint8;

    inline void Wait(const int durationMSec) {
        std::this_thread::sleep_for(std::chrono::milliseconds(durationMSec));
    }
}

#endif