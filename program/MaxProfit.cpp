//
// Created by YuSec on 2024/9/6.
//

#include "MaxProfit.h"
#include <algorithm>
#include <iostream>

// 无效题解，重复无法解决
int MaxProfit::maxProfit(vector<int> &prices) {
    vector<int> a;
    a.operator=(prices); // 深拷贝 空间复杂度O(n)
    sort(a.begin(), a.end());

    int* end = &a[a.size()-1];

    for (int* begin = &a[0]; begin != end ;begin++) {
        for (int* tmp = end; begin < end; tmp--) {
            auto begin_idx = find(prices.begin(), prices.end(), *begin);
            auto tmp_idx = find(prices.begin(), prices.end(), *tmp);
            if (begin_idx < tmp_idx) {
                return *tmp - *begin;
            }
        }
    }
    return 0;
}

int MaxProfit::maxProfit2(vector<int> &prices) {
    int* end = &prices[prices.size() - 1];
    int tmp = 0;

    for (int* p1 = &prices[0]; p1 != end; p1++) {
        for (int* p2 = p1 + 1; p2 <= end; p2++) {
            if (*p1 < *p2) {
                tmp = (*p2-*p1) > tmp ? (*p2-*p1):tmp;
            }
        }
    }

    return tmp;
}

int MaxProfit::maxProfit3(vector<int> & prices) {
    int buy = prices[0];
    int profit = 0;

    if (prices.size() > 1) {
        for (int* sell = &prices[1]; sell <= &prices[prices.size() - 1]; sell++) {
            buy = min(buy, *sell);
            profit = max(profit, *sell-buy);
        }
    }
    return profit;

}

int maxProfit4(vector<int>& prices) {
    int minPrices = prices[0];
    int profit = 0;
    int tmp_profit = 0;

    for (int i = 1; i < prices.size(); i++) {

        if (prices[i] > minPrices) {
            tmp_profit = prices[i] - minPrices;
        } else if (prices[i] < minPrices) {
            minPrices = prices[i];
        }

        if (i < prices.size() - 1) {
            if (prices[i] > prices[i + 1]) {
                profit += tmp_profit;
                tmp_profit = 0;
                minPrices = prices[i + 1];
            }
        } else {
            profit += tmp_profit;

        }
    }

    return profit;

}
