//
// Created by YuSec on 2024/8/30.
//

#include "RemoveRepeatSortedArray.h"
#include <algorithm>

using namespace std;
int RemoveRepeatSortedArray::removeDuplicates(vector<int>& nums) {
    vector<int> e = {-105};
    for(auto iter = nums.begin(); iter != nums.end(); iter++) {
        auto a = find(e.begin(), e.end(), *iter);
        if (a != e.end()) {
            iter = nums.erase(iter);
        } else {
            e.push_back(*iter);
            iter++;
        }
    }
    return nums.size();
}

int RemoveRepeatSortedArray::removeDuplicates2(vector<int>& nums) {
    for (auto iter = nums.begin(); iter != nums.end() - 1;) {
        if (*iter == *(iter+1)) {
            iter = nums.erase(iter);
        } else {
            iter ++;
        }
    }
    return nums.size();
}


int RemoveRepeatSortedArray::removeDuplicates3(vector<int>& nums) {
    bool flag = false;
    for (auto iter = nums.begin(); iter != nums.end() - 1;) {
        if (*iter == *(iter+1)) {
            if (flag) {
                iter = nums.erase(iter);
            } else {
                flag = true;
                iter ++;
            }
        } else {
            flag = false;
            iter ++;
        }
    }
    return nums.size();
}