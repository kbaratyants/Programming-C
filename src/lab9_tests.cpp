#include <gtest/gtest.h>
#include "lab9.h"

TEST(countLength_test, check_common) {
    EXPECT_EQ(countLength(3, 6, 3, 6), 0);
}

TEST(RectangleP_test, check_common) {
    EXPECT_EQ(RectangleP(Rectangle(0, 0, 3, 0, 3, 3, 0, 3)), 12);
}



int main(int argc, char* argv) {
    testing::InitGoogleTest(&argc, &argv);
    return RUN_ALL_TESTS();
}
