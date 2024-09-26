//
// Created by YuSec on 2024/9/2.
//

#include "Rotate.h"
#include <iostream>

using namespace std;

// O(n^2) + O(1)
void Rotate::rotate(vector<int> &nums, int k) {
    int index = k == 0 ? 0:nums.size() - k % nums.size();

    int* p = &nums[index];
    for (int i = 0; i < k % nums.size(); i++, p++, index++) {
        int tmp = nums[i];
        nums[i] = *p;
        for (int j = index; j > i; j-- ) {
            nums[j] = nums[j - 1];
        }
        nums[i + 1] = tmp;
    }
}

// O(n) + O(n)
void Rotate::rotate2(vector<int> &nums, int k) {
    int index = k == 0 ? 0:nums.size() - k % nums.size();
    int* p1 = &nums[0];
    int* p2 = &nums[index];
    int* p3 = p2;
    int* p4 = &nums[nums.size()-1];

    vector<int> tmp;
    for (;p1 != p2; p1++) {
        tmp.push_back(*p1);
    }

    int idx = 0;
    for (; p3 <= p4; idx++, p3++) {
        nums[idx] = *p3;
    }

    for (vector<int>::iterator iter = tmp.begin(); iter != tmp.end(); iter++,idx++) {
        nums[idx] = *iter;
    }

}

// O(n) O(1)
void reverse(vector<int> &nums, int begin, int end) {
    while(begin < end) {
        swap(nums[begin++], nums[end--]);
    }
}


void Rotate::rotate3(vector<int> &nums, int k) {
    int n = nums.size();
    k = k % n;
    reverse(nums, 0, n - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, n - 1);
}

