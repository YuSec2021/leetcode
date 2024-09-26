//
// Created by YuSec on 2024/9/10.
//

#include "CanJump.h"

bool CanJump::canJump(vector<int> &nums) {
    /*
     *  maxStep用来存储当前可以走到的最远距离，通过循环来更新
     *  在循环时需要判断 i 是否大于 maxStep，如果判断成立，说明maxStep达不到i的位置。直接返回false
     *  当最后maxStep 大于等于 nums.size() - 1的时候 返回true
     *  该题的核心在于 i + nums[i]，实际上的i已经表示了前面能走到i的位置了，所以直接加上当前i指向的值即可
     **/

    int n = nums.size();
    int maxStep = 0;

    for (int i = 0; i < n; i++) {
        if (i > maxStep) {
            return false;
        }
        maxStep = max(maxStep, i + nums[i]);
        if (maxStep >= n - 1) {
            return true;
        }
    }

    return false;
}

int CanJump::canJump2(vector<int> &nums) {
    /*
     * 利用贪心算法的局部最优解，该题的目的是获取最小跳跃数，
     * 那么我们就需要获取最远跳跃距离，
     * 那对比局部而言，最远的跳跃距离就是局部最优解，
     * 通过该局部最优解，最终可以得到全局的最优解即为最少跳跃数
     */

    int n = nums.size();
    int step = 0;
    int index = 0;
    while (index < n - 1) {
        step ++;
        int length = nums[index];
        int max = 0;
        int next = index;
        for (int i = length; i >= 1; i--) {
            if (index + i >= n - 1) {
                return step;
            }

            if (nums[index + i] + i > max) {
                max = nums[index + i] + i;
                next = index + i;
            }
        }
        index = next;
    }
    return step;
}

int CanJump::canJump3(vector<int> &nums) {
    int n = nums.size();
    int minCount = 0;
    int maxPos = 0;
    int nextMaxPos = 0;
    for (int i = 0; i < n; i++) {
        if (maxPos < i) {
            maxPos = nextMaxPos;
            minCount++;
        }
        nextMaxPos = max(nextMaxPos, i + nums[i]);
    }
    return minCount;
}