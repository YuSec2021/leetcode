//
// Created by YuSec on 2024/9/2.
//

#include "MajorityElement.h"
#include <algorithm>

int MajorityElement::majorityElement(vector<int> &nums) {
    int num = -110;
    int count = 0;
    int tmp_num = -110;
    int tmp_count = 0;

    sort(nums.begin(), nums.end());

    for (auto i = nums.begin(); i < nums.end(); i++) {
        if (*i != tmp_num) {
            tmp_num = *i;
            tmp_count = 1;
        } else if (*i == tmp_num) {
            tmp_count += 1;
        }
        if (tmp_count > count && tmp_count > nums.size()/2) {
            count = tmp_count;
            num = tmp_num;
        }
    }
    return num;
}
