# 'Google_test' is the subproject name
project(Google_tests)

# 'lib' is the folder with Google Test sources
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# 'Google_Tests_run' is the target name
# 'test1.cpp test2.cpp' are source files with tests
add_executable(Google_Tests_run s4/SplitServiceTest.cpp
        ../s4/SplitService.cpp
        ../s4/SplitService.h
        s4/SplitServiceFixtureTest.cpp
        s4/SplitServiceFixtureTest.h
        Run.cpp
        ../s4/Vector.cpp
        ../s4/Vector.h
        s4/VectorTest.cpp
        ../s5/DownloadService.cpp
        ../s5/DownloadService.h
        ../s5/CacheService.cpp
        ../s5/CacheService.h
        s5/DownloadServiceTest.cpp
        ../s5/BitArray.cpp
        ../s5/BitArray.h)

target_link_libraries(Google_Tests_run gtest gtest_main)
