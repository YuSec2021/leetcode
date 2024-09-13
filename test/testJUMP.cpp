//
// Created by YuSec on 2024/9/10.
//

#include "gtest/gtest.h"
#include "../CanJump.h"
#include <iostream>

using namespace std;

TEST(TestCase, testJUMP1) {
    CanJump* c = new CanJump();
    vector<int> nums = {0, 1};
    c->canJump(nums);

}

TEST(TestCase, testJUMP2) {
    CanJump* c = new CanJump();
    vector<int> nums = {2,3,1,1,4};
    int minStep =  c->canJump2(nums);
    cout << minStep;
}

TEST(TestCase, testJUMP3) {
    CanJump* c = new CanJump();
    vector<int> nums = {2,3,1,1,4};
    c->canJump3(nums);
}