//
// Created by YuSec on 2024/9/23.
//

#include <gtest/gtest.h>

#include "../program/RemoveDuplicateLetters.h"

TEST(TestCase, removeDuplicate) {
    RemoveDuplicateLetters r;
    string s = r.removeDuplicateLetters("bcabc");
    GTEST_LOG_(INFO) << s;

    s = r.removeDuplicateLetters("cbacdcbc");
    GTEST_LOG_(INFO) << s;

}
