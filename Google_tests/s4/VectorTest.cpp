//
// Created by Василенко Павел on 30.09.2023.
//

#include "gtest/gtest.h"
#include "../../s4/Vector.h"

TEST(VectorTest, operatorSum) {
    Vector v1 (1, 2, 3);
    Vector v2 (4, 5, 6);
    Vector v3 = v1 + v2;

    ASSERT_EQ(v3, Vector(5,7,9));
}

TEST (VectorTest, sum) {
    Vector v1 (1,2,3);
    Vector result = v1 + Vector (1, 1, 1);
    ASSERT_EQ(result, Vector(2, 3, 4));
}