//
// Created by 顾殇点儿 on 2024/9/19.
//

#include "CanCompleteCircuit.h"

int CanCompleteCircuit::canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
    int n = gas.size();
    int remainder = 0;

    int start = 0;
    int end = n - 1;
    while (start <= end) {
        if (end == 2*n - 1) {
            return -1;
        }

        if (remainder + gas[start % n] >= cost[start % n]) {
            remainder += gas[start % n] - cost[start % n];
            start ++;
        } else {
            end += 1;
            start = (end + 1) % n;
            remainder = 0;
        }
    }

    return start % n;
}

int CanCompleteCircuit::canCompleteCircuit2(vector<int> &gas, vector<int> &cost) {
    int n = gas.size();
    int remainder = 0;

    int start = 0;
    int count = 0;
    while (true) {
        if (count == n) {
            return start;
        }

        if (remainder + gas[start % n] - cost[start % n] >= 0) {
            remainder += gas[start % n] - cost[start % n];
            start ++;
            count ++;
        } else {
            count = 0;
        }
    }

}
