# add the executable
add_executable(noip-utils Main.cpp HttpClient.cpp RespostaHttp.cpp)

TARGET_LINK_LIBRARIES( noip-utils pthread boost_regex)
