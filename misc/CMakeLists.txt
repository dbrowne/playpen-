project(misc)
set(CMAKE_CXX_STANDARD 20)
set(HEADER_FILES
        Color.h)
set(SOURCE_FILES
        Color.cpp)

add_library(misc STATIC ${SOURCE_FILES})