//
// Created by YuSec on 2024/9/2.
//

#include "AddBinary.h"
#include <bitset>

string AddBinary::addBinary(string a, string b) {
    bitset<2048> a1(a);
    bitset<2048> b1(b);
    bitset<2049> res;
    bool carry = false;

    for(size_t i = 0; i < 2048; i++) {
        bool bitA = a1[i];
        bool bitB = b1[i];
        res[i] = bitA ^ bitB ^ carry;
        carry = (bitA && bitB) || (carry && (bitA || bitB)); // 计算是否进位
    }

    return removeLeadingZeros(res.to_string());
}

string AddBinary::removeLeadingZeros(const std::string& str) {
    size_t firstNonZero = str.find_first_not_of('0');
    if (firstNonZero == string::npos) {
        // 如果字符串全是0，返回"0"
        return "0";
    }
    return str.substr(firstNonZero);
}

