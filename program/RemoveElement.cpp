//
// Created by YuSec on 2024/8/28.
//

#include "RemoveElement.h"
#include <algorithm>

using namespace std;
int RemoveElement::removeElement(vector<int> &nums, int val) {
    nums.erase(remove(nums.begin(), nums.end(), 3), nums.end());
    return nums.size();
}
