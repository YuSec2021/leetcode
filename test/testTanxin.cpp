//
// Created by YuSec on 2024/9/13.
//

#include "gtest/gtest.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


/*
 * N 位旅行者过桥，但N个人只有一个手电筒
 * 同时只能两个人过桥，两个人过桥的时间为慢的那个人的过桥时间
 *
 * 思路：排序后，让快的那个人过桥后返回接剩下的人
 */
void Tanxin1(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    int stime = 0;
    for (int i = 1; i < nums.size(); i++) {
        stime += nums[i]; // 慢的人过桥的时间
    }
    stime += nums[0] * (nums.size() - 2); // 排去自己，就有n-1个人需要接，那么就需要返回n-2次， n>2
    cout << "time: " << stime;
}


TEST(TestCase, testtanxin) {
    vector<int> nums = {2,5,1,10};
    Tanxin1(nums);
}