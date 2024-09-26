//
// Created by YuSec on 2024/9/20.
//


#include <gtest/gtest.h>

#include "../program/LargestNumber.h"
TEST(TestCase, Largest) {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> nums1 = {10,2};
    vector<int> nums2 = {3,30,34,5,9};
    LargestNumber l;
    string largest = l.largestNumber(nums2);
    GTEST_LOG_(INFO) << largest;
}
