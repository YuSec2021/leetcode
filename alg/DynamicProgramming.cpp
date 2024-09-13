//
// Created by YuSec on 2024/9/8.
//

#include "DynamicProgramming.h"

int DynamicProgramming::numbersTrigle(int a[5][5], int h, int l) {
    int i, j;
    for(i = h-2; i >= 0; i--){
        for(j = 0; j <= i; j++){
            if(a[i+1][j] > a[i+1][j+1]) {
                a[i][j] += a[i+1][j];
            } else {
                a[i][j] += a[i+1][j+1];
            }
        }
    }
    return a[0][0];
}
