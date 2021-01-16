cmake_minimum_required(VERSION 3.10)
project(NoipUtils VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package( Boost 1.71 COMPONENTS program_options REQUIRED )

include_directories(include)
add_subdirectory(src)
