project(misc_tests)
set(CMAKE_CXX_STANDARD 20)
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
add_executable(misc_tests_run ColorTest.cpp)
target_link_libraries(misc_tests_run gtest gtest_main)
target_link_libraries(misc_tests_run misc)