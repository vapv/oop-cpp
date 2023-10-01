//
// Created by Василенко Павел on 29.09.2023.
//

#include "gtest/gtest.h"
#include "../../s4/SplitService.h"

TEST(SplitService, SplitByWords){
    SplitService splitService;

    vector<string> result = splitService.parse("abc bca 123");

    ASSERT_EQ(result.size(), 2);
    ASSERT_EQ(result[0], "abc");
    ASSERT_EQ(result[1], "bca");
    ASSERT_EQ(result[2], "123");
}

TEST(SplitService, EmptyString){ // 12/2/2020 -> 737761
    SplitService splitService;

    vector<string> result = splitService.parse("");

    ASSERT_EQ(result.size(), 0);
}

TEST(SplitService, StringWithNoWords){ // 12/2/2020 -> 737761
    SplitService splitService;

    vector<string> result = splitService.parse("        ");

    ASSERT_EQ(result.size(), 0);
}

