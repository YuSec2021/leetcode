//
// Created by YuSec on 2024/9/6.
//

#include "../program/MaxProfit.h"
#include "gtest/gtest.h"

TEST(DISABLE_TestCase, testmaxprofit) {
    vector<int> prices = {7,1,5,4,6,3};
    MaxProfit* a = new MaxProfit();
    int res = a->maxProfit(prices);
    EXPECT_EQ(res, 5) << "Max Profit is: " << res;
}


TEST(DISABLE_TestCase, testmaxprofit2) {
    vector<int> prices = {7,6,4,3,1};
    MaxProfit* a = new MaxProfit();
    int res = a->maxProfit(prices);
    ASSERT_EQ(res, 0) << "Max Profit is: " << res;
}

TEST(TestCase, testmaxprofit3) {
    vector<int> prices = {2,1,2,0,1};
    MaxProfit* a = new MaxProfit();
    int res = a->maxProfit2(prices);
    ASSERT_EQ(res, 1) << "Max Profit is: " << res;
}

TEST(TestCase, testmaxprofit4) {
    vector<int> prices = {2,1,2,0,1};
    MaxProfit* a = new MaxProfit();
    int res = a->maxProfit3(prices);
    ASSERT_EQ(res, 1) << "Max Profit is: " << res;
}