//
// Created by 顾殇点儿 on 2024/9/23.
//

#include "RemoveDuplicateLetters.h"

#include <string>
#include <vector>
#include <map>

string RemoveDuplicateLetters::removeDuplicateLetters(string s) {
    // 题解：
    // 利用单调栈的思路，这里由于C++没有栈，一般是通过vector实现栈
    // 这里直接用字符串的pop_back更方便
    // 由于题目提示总共只有26个字母，所以这里设置两个vector，
    //  left用来存储字母出现的次数，
    //  in_ans用来描述字母是否在ans中，若存在则不再压栈
    // 其实一样是通过sub-sequence的思路实现局部最优解，从而达到全局最优解，也就是最小字典序
    vector<int> left(26), in_ans(26);
    for (char c : s) {
        left[c - 'a']++;
    }

    string ans;
    for (char c : s) {
        left[c - 'a']--;
        if (in_ans[c - 'a']) {
            continue;
        }

        // 只要符合c>ans.back()的都先压入，当遇到c<ans.back()的时候则循环判断将其弹出
        while(!ans.empty() && ans.back() > c && left[ans.back() - 'a']) {
            in_ans[ans.back() - 'a'] = false;
            ans.pop_back();
        }

        ans += c;
        in_ans[c - 'a'] = true;
    }


    return ans;
}