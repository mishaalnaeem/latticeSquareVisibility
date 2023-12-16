cmake_minimum_required(VERSION 3.18)
project(latticeSquareVisibility VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(latticeSquareVisibilityLib latticeSquares.cpp)
add_executable(latticeSquareVisibility main.cpp)
target_link_libraries(latticeSquareVisibility PRIVATE latticeSquareVisibilityLib)

# adding gtest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(tests test_latticeSquares.cpp) #target for test
target_link_libraries(tests PRIVATE latticeSquareVisibilityLib ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES}) #linking libs

#enabling test
include(GoogleTest) 
gtest_discover_tests(tests)