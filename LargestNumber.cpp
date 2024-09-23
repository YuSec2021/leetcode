//
// Created by 顾殇点儿 on 2024/9/20.
//

#include "LargestNumber.h"

#include <iostream>
#include <ostream>


//sort函数允许通过自定义比较函数来实现复杂的排序逻辑。
//这是通过传递一个比较函数或者函数对象给sort来实现的。
//比较函数需要能够比较两个元素并返回一个布尔值，
//指示第一个元素是否应该排在第二个元素之前。
bool compareString(const int &x, const int &y) {
    return to_string(x) + to_string(y) > to_string(y) + to_string(x);
}

string LargestNumber::largestNumber(vector<int> nums) {
    sort(nums.begin(), nums.end(),compareString);
    if (nums[0] == 0) {
        return "0";
    }

    string ret;
    for (int &x: nums) {
        ret += to_string(x);
    }
    return ret;

}