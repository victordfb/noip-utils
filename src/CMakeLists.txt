# add the executable
add_executable(noip-utils Main.cpp HttpClient.cpp ResponseHttp.cpp Configurator.cpp)

TARGET_LINK_LIBRARIES( noip-utils pthread boost_regex)
