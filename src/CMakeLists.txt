# add the executable
add_executable(noip-utils Main.cpp)

TARGET_LINK_LIBRARIES( noip-utils LINK_PUBLIC ${Boost_LIBRARIES} )
