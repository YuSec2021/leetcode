//
// Created by YuSec on 2024/9/5.
//

#include "gtest/gtest.h"
#include <vector>
#include "../Rotate.h"


using namespace std;

#ifdef DEBUG_MODE
TEST(TestCase, testrotate1) {
    vector<int> nums = {1,2,3,4,5,6,7};
    Rotate* r = new Rotate();
    r->rotate2(nums, 3);
}


TEST(TestCase, testrotate2) {
    vector<int> nums = {1,2,3,4,5,6,7};
    Rotate* r = new Rotate();
    r->rotate2(nums, 3);
}

TEST(TestCase, testrotate3) {
    vector<int> nums = {1,2,3,4,5,6,7};
    Rotate* r = new Rotate();
    r->rotate3(nums, 3);
}


#endif

