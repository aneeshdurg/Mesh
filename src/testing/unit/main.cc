#include <stddef.h>
#include <cstdio>
#include "gtest/gtest.h"

// TODO: on MacOS, gtest_main segfaults immediately, so we need this wrapper.
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
