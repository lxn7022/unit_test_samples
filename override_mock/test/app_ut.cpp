#define private public

#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "app.h"

using namespace TTT;
using namespace std;

using ::testing::_;
using ::testing::Return;

TEST(App, demo)
{
    App a;
    O_rgClassMock& mockedO = a._o;
    EXPECT_CALL(mockedO, get()).WillOnce(testing::Return(100));
    EXPECT_CALL(mockedO, set(testing::_)).WillOnce(testing::Return(true));

    a.set(50);

    EXPECT_EQ(100, a.get());
}
