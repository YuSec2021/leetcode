//
// Created by YuSec on 2024/9/23.
//

#include <gtest/gtest.h>

#include "../RemoveDuplicateLetters.h"

TEST(TestCase, removeDuplicate) {
    RemoveDuplicateLetters r;
    string s = r.removeDuplicateLetters("bcabc");
    GTEST_LOG_(INFO) << s;

}
