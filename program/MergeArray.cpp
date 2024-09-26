//
// Created by YuSec on 2024/8/27.
//

#include "MergeArray.h"
#include <iostream>
using namespace std;
// 示例 1：
//
// 输入：nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// 输出：[1,2,2,3,5,6]
// 解释：需要合并 [1,2,3] 和 [2,5,6] 。
// 合并结果是 [1,2,2,3,5,6] ，其中斜体加粗标注的为 nums1 中的元素。
// 示例 2：
//
// 输入：nums1 = [1], m = 1, nums2 = [], n = 0
// 输出：[1]
// 解释：需要合并 [1] 和 [] 。
// 合并结果是 [1] 。
// 示例 3：
//
// 输入：nums1 = [0], m = 0, nums2 = [1], n = 1
// 输出：[1]
// 解释：需要合并的数组是 [] 和 [1] 。
// 合并结果是 [1] 。
// 注意，因为 m = 0 ，所以 nums1 中没有元素。nums1 中仅存的 0 仅仅是为了确保合并结果可以顺利存放到 nums1 中。

void MergeArray::merge1(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    vector<int> res;
    int i = 0;
    int j = 0;
    while(i < m && j < n) {
        if (nums1[i] < nums2[j] ) {
            res.push_back(nums1[i++]);
        } else {
            res.push_back(nums2[j++]);
        }
    }

    if (i == m) {
        for (; j < n; j++) {
            res.push_back(nums2[j]);
        }
    } else if (j == n) {
        for (; i < m; i++) {
            res.push_back(nums1[i]);
        }
    }

    nums1.clear();
    nums1.operator=(res);
    for (int k = 0; k < nums1.size(); k++) {
        printf("%d ", nums1[k]);
    }
    printf("\n");
}

void MergeArray::merge2(vector<int> &nums1, int m, vector<int> &nums2, int n) {

    int p1 = m - 1;
    int p2 = n - 1;
    int p = m + n - 1;

    while ((p1>=0) || (p2>=0)) {
        if (p1 == -1) {
            nums1[p--] = nums2[p2--];
        } else if (nums1[p1] < nums2[p2]) {
            nums1[p--] = nums2[p2--];
        } else if (nums1[p1] >= nums2[p2]) {
            nums1[p--] = nums1[p1--];
        }
    }

    for (vector<int>::iterator m = nums1.begin();  m != nums1.end(); m++ ) {
        cout << *m << endl;
    }
}

