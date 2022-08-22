cmake_minimum_required(VERSION 3.23)
project(boost_test)

set(CMAKE_CXX_STANDARD 20)

include(${CMAKE_BINARY_DIR}/conan_paths.cmake)

add_executable(boost_test main.cpp)
find_package(Boost)
find_package(OpenCLHeaders)
target_link_libraries(boost_test PRIVATE OpenCL::Headers Boost::headers)
target_compile_options(boost_test PRIVATE -lOpenCL)
