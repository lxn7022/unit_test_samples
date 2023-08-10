#include "app.h"
#include <gtest/gtest.h>

using namespace TTT;

TEST(App, demo)
{
    App a;
    a.set(80);

    int i = a.get();

    EXPECT_EQ(160, i);
}
