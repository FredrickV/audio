# audio
WIP Audio system for games



# Introduction

This audio library is a direct port of SFML2. All credits goes to the original developers. Original project can be found here: https://www.sfml-dev.org/

If you plan to use SFML as your Window (or any other SFML systems), i highly recommend using the original project for audio as well.

# Purpose

Create a minimalistic, portable audio library with as few external dependencies as possible.


# Changes compared to the original source code
* sf::thread replaced with std::thread
* sf::mutex replaced with std::mutex
* sf::lock replaced with std::lock_guard
* sf::sleep changed to std::thread version of sleep
* General changes to export symbols for better ABI (WIP)
* Dropped support for FLAC. (Can be easily re-added if it is needed)



# Notes

* FLAC audio format/codec is not supported. OGG/Vorbis + RAW (WAV) is only supported.
* Linux MAKEFILE / CMAKE is not in the repository, but code is cross platform.
* Visual Studio 17 64 bit solution files with binaries are available.


# Version of changes

* 0.0.1
- Initial version. Not yet tested. 
