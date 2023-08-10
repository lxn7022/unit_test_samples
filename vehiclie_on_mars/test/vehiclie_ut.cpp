#include "vehiclie.h"
#include <gtest/gtest.h>

using namespace VOM;

TEST(Vehiclie, f01)
{
    Vehiclie v;
    v.execute("f");
    string r = v.status();
    EXPECT_EQ(r, "0, 1, 0");
}

TEST(Vehiclie, f02)
{
    Vehiclie v;
    v.execute("ff");
    string r = v.status();
    EXPECT_EQ(r, "0, 2, 0");
}

TEST(Vehiclie, f03)
{
    Vehiclie v;
    v.execute("ffb");
    string r = v.status();
    EXPECT_EQ(r, "0, 1, 0");
}

TEST(Vehiclie, b01)
{
    Vehiclie v;
    v.execute("b");
    string r = v.status();
    EXPECT_EQ(r, "0, -1, 0");
}

TEST(Vehiclie, b02)
{
    Vehiclie v;
    v.execute("bb");
    string r = v.status();
    EXPECT_EQ(r, "0, -2, 0");
}

TEST(Vehiclie, b03)
{
    Vehiclie v;
    v.execute("bbf");
    string r = v.status();
    EXPECT_EQ(r, "0, -1, 0");
}

TEST(Vehiclie, l01)
{
    Vehiclie v;
    v.execute("l");
    string r = v.status();
    EXPECT_EQ(r, "0, 0, 3");
}

