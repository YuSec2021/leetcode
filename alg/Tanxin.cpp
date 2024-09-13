//
// Created by YuSec on 2024/9/8.
//

#include "Tanxin.h"

int Tanxin::numbersTrigle(int a[5][5], int h, int l) {
    int result = a[0][0];
    int i,j = 0;
    for(i = 1; i < h; i++) {
        if (a[i][j] >= a[i][j+1]) {
            result += a[i][j];
            j = j;
        } else {
            result += a[i][j+1];
            j = j + 1;
        }
    }
    return result;
}
