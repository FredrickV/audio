# audio
WIP Audio system for games



# Introduction

This audio library is a direct port of SFML2. All credits goes to the original developers. Original project can be found here: https://www.sfml-dev.org/

If you plan to use SFML as your Windowing system (or any other SFML systems), i highly recommend using the original project for audio as well.

The original authors are in no way responsible for bugs you may encounter while using this library. Please use the "Issue Tracker" found on this repository to report bugs. 

# Purpose

Create a minimalistic, portable audio library with as few external dependencies as possible.


# Changes compared to the original source code
* sf::thread replaced with std::thread
* sf::mutex replaced with std::mutex
* sf::lock replaced with std::lock_guard
* sf::sleep changed to std::thread version of sleep
* Changed library export rules to specifically audio functions only. 
* Dropped support for FLAC. (Can be easily re-added if it is needed)
* Isolated code/source files to stay audio specific. (With a few more code simplifications planed down the road)



# Notes

* FLAC audio format/codec is not supported. OGG/Vorbis + RAW (WAV) is only supported.
* Linux MAKEFILE / CMAKE is not in the repository, but code is cross platform.
* Visual Studio 17 64 bit solution files with binaries are available.

# Changes I want to do (if time allows)

* sf::Time to std::chrono
* std::condition_variable to eliminate polling
* Build option to use glm::vec3 + glm::* (Stay native to OpenGL or Vulkan)
* Additional accessor functions for direct memory access for game engines and general audio manipulations.


# Version of changes

* 0.0.1
Initial version. Not yet tested. 
