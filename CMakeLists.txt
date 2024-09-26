cmake_minimum_required(VERSION 3.28)
project(leetcode)

set(CMAKE_CXX_STANDARD 17)

add_executable(leetcode main.cpp
        program/MergeArray.cpp
        program/MergeArray.h
        program/RemoveElement.cpp
        program/RemoveElement.h
        program/RemoveRepeatSortedArray.cpp
        program/RemoveRepeatSortedArray.h
        program/AddBinary.cpp
        program/AddBinary.h
        program/MajorityElement.cpp
        program/MajorityElement.h
        program/Rotate.cpp
        program/Rotate.h
        program/MaxProfit.cpp
        program/MaxProfit.h
        test/testRotate.cpp
        test/testMain.cpp
        test/testMaxProfit.cpp
        alg/Tanxin.cpp
        alg/Tanxin.h
        alg/DynamicProgramming.cpp
        alg/DynamicProgramming.h
        test/testAlg.cpp
        program/CanJump.cpp
        program/CanJump.h
        test/testJUMP.cpp
        Tanxin.cpp
        test/testTanxin.cpp
        test/test_Circuit.cpp
        test/test_Circuit.cpp
        program/CanCompleteCircuit.cpp
        program/LargestNumber.cpp
        test/test_Largest.cpp
        program/RemoveDuplicateLetters.cpp
        program/RemoveDuplicateLetters.h
        test/test_removeDuplicate.cpp
)

add_subdirectory(./googletest-1.15.2)
include_directories(${PROJECT_SOURCE_DIR}/src/include ./googletest1.15.2/include)
link_directories(${PROJECT_SOURCE_DIR}/lib ${PROJECT_SOURCE_DIR}/googletest-1.15.2)
target_link_libraries(${PROJECT_NAME} gtest)