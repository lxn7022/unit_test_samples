#define private public

#include "app.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace TTT;
using namespace std;

TEST(App, demo_01)
{
    OrgClassMock mockedO;
    EXPECT_CALL(mockedO, get()).WillOnce(testing::Return(90));

    App a(&mockedO);
    a.set(70);

    EXPECT_EQ(180, a.get());
}

TEST(App, demo_02)
{
    OrgClassMock mockedO;
    EXPECT_CALL(mockedO, get())
        .WillOnce(testing::Return(75))
        .WillOnce(testing::Return(80))
        .WillRepeatedly(testing::Return(85));

    App a(&mockedO);
    a.set(70);

    EXPECT_EQ(150, a.get());
    EXPECT_EQ(160, a.get());
    EXPECT_EQ(170, a.get());
    EXPECT_EQ(170, a.get());
    EXPECT_EQ(170, a.get());
}

TEST(App, demo_03)
{
    OrgClassMock mockedO;
    EXPECT_CALL(mockedO, get())
        .WillOnce(testing::Return(75))
        .WillOnce(testing::Return(80));

    App a(&mockedO);
    a.set(70);

    EXPECT_EQ(150, a.get());
}

TEST(App, demo_04)
{
    OrgClassMock mockedO;
    EXPECT_CALL(mockedO, get())
        .Times(4)
        .WillOnce(testing::Return(75))
        .WillOnce(testing::Return(80))
        .WillRepeatedly(testing::Return(85));

    App a(&mockedO);
    a.set(70);

    EXPECT_EQ(150, a.get());
    EXPECT_EQ(160, a.get());
    EXPECT_EQ(170, a.get());
    EXPECT_EQ(170, a.get());
    EXPECT_EQ(170, a.get());
}

TEST(App, demo_05)
{
    OrgClassMock mockedO;
    EXPECT_CALL(mockedO, set(40))
        .WillOnce(testing::Return(true));
    EXPECT_CALL(mockedO, set(80))
        .WillOnce(testing::Return(false));

    App a(&mockedO);

    EXPECT_TRUE(a.set(40));
    EXPECT_FALSE(a.set(80));
}

