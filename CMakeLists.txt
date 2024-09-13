cmake_minimum_required(VERSION 3.28)
project(leetcode)

set(CMAKE_CXX_STANDARD 17)

add_executable(leetcode main.cpp
        MergeArray.cpp
        MergeArray.h
        RemoveElement.cpp
        RemoveElement.h
        RemoveRepeatSortedArray.cpp
        RemoveRepeatSortedArray.h
        AddBinary.cpp
        AddBinary.h
        MajorityElement.cpp
        MajorityElement.h
        Rotate.cpp
        Rotate.h
        MaxProfit.cpp
        MaxProfit.h
        test/testRotate.cpp
        test/testMain.cpp
        test/testMaxProfit.cpp
        alg/Tanxin.cpp
        alg/Tanxin.h
        alg/DynamicProgramming.cpp
        alg/DynamicProgramming.h
        test/testAlg.cpp
        CanJump.cpp
        CanJump.h
        test/testJUMP.cpp
        Tanxin.cpp
        test/testTanxin.cpp)

add_subdirectory(./googletest-1.15.2)
include_directories(${PROJECT_SOURCE_DIR}/src/include ./googletest1.15.2/include)
link_directories(${PROJECT_SOURCE_DIR}/lib ${PROJECT_SOURCE_DIR}/googletest-1.15.2)
target_link_libraries(${PROJECT_NAME} gtest)