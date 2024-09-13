//
// Created by YuSec on 2024/9/8.
//

#include "gtest/gtest.h"
#include "../alg/Tanxin.h"
#include "../alg/DynamicProgramming.h"


TEST(TestCase, testalg) {
    int num[5][5]={0}; //全部初始化为0
    num[0][0]=9;
    num[1][0]=12;num[1][1]=15;
    num[2][0]=10;num[2][1]=6;num[2][2]=8;
    num[3][0]=2;num[3][1]=18;num[3][2]=9;num[3][3]=5;
    num[4][0]=19;num[4][1]=7;num[4][2]=10;num[4][3]=4;num[4][4]=16;


    Tanxin* d = new Tanxin();
    int res = d->numbersTrigle(num, 5,5 );
    printf("贪心算法：%d\n", res);


    DynamicProgramming* d1 = new DynamicProgramming();
    res = d1->numbersTrigle(num, 5,5 );
    printf("动态规划：%d\n", res);
}

