//
// Created by YuSec on 2024/9/19.
//

#include <gtest/gtest.h>
#include "../program/CanCompleteCircuit.h"

TEST(TestCase, Circuit) {
    CanCompleteCircuit c;

    vector<int> gas = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};

    c.canCompleteCircuit(gas, cost);

}

TEST(TestCase, Circuit2) {
    CanCompleteCircuit c;

    vector<int> gas = {2,3,4};
    vector<int> cost = {3,4,3};

    c.canCompleteCircuit(gas, cost);
}

TEST(TestCase, Circuit3) {
    CanCompleteCircuit c;

    vector<int> gas = {5,1,2,3,4};
    vector<int> cost = {4,4,1,5,1};

    c.canCompleteCircuit(gas, cost);
}