cmake_minimum_required(VERSION 3.22)


FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2
    GIT_TAG v3.5.3
    GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(Catch2)
list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/extras)

include(CTest)
enable_testing()

include(Catch)

file(GLOB_RECURSE SYLVER_MATH_TEST_SOURCES ${CMAKE_CURRENT_LIST_DIR}/src/*.cpp)
file(GLOB_RECURSE SYLVER_MATH_TEST_HEADERS ${CMAKE_CURRENT_LIST_DIR}/src/*.hpp)

add_executable(SylverMathTests ${SYLVER_MATH_TEST_SOURCES} ${SYLVER_MATH_TEST_HEADERS})

target_include_directories(SylverMathTests PUBLIC 
    ${CMAKE_CURRENT_LIST_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
target_link_libraries(SylverMathTests PUBLIC SylverMath Catch2::Catch2WithMain)

catch_discover_tests(SylverMathTests)
