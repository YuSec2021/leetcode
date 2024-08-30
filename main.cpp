#include <iostream>
#include "MergeArray.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    MergeArray* m = new MergeArray();
    vector<int> nums1 = {4,0,0,0,0,0};
    vector<int> nums2 = {1,2,3,5,6};
    // m->merge1(nums1, 3, nums2, 3);
    m->merge3(nums1, 1, nums2, 5);
    return 0;
}
