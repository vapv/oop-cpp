//
// Created by Василенко Павел on 30.09.2023.
//

#ifndef GOOGLE_TESTS_SPLITSERVICEFIXTURETEST_H
#define GOOGLE_TESTS_SPLITSERVICEFIXTURETEST_H
#include "gtest/gtest.h"
#include "../../s4/SplitService.h"

using std::cout;
using std::endl;

class SplitServiceFixtureTest : public ::testing::Test {
protected:
    SplitService splitService;

    void SetUp() override {
        cout << "setup()" << endl;
    }
};

TEST_F(SplitServiceFixtureTest, test) {
    cout << "SplitServiceFixtureTest.test()" << endl;
    ASSERT_TRUE(true);
}

#endif //GOOGLE_TESTS_SPLITSERVICEFIXTURETEST_H
