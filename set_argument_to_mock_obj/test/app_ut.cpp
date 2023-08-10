#define private public

#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "app.h"

using namespace std;
using namespace TTT;

using ::testing::_;
using ::testing::DoAll;
using ::testing::Return;
using ::testing::SetArgPointee;
using ::testing::ByRef;

//TEST(ZZZ, demo01)
//{
//    MOCKED_BBB mockedB;
//    EXPECT_CALL(mockedB, is_empty())
//        .WillOnce(Return(false));
//    cout << "BBBB --->>> " << mockedB.is_empty() << endl;
//
//    ZZZ z;
//    MOCKED_AAA& mockedA = z._a;
//
//    EXPECT_CALL(mockedA, trans_str_to_container(_, _))
//        .WillOnce(
//                DoAll(
//                    //SetArgPointee<1>(&mockedB),
//                    SetArgPointee<1>(ByRef(mockedB)),
//                    Return(true)
//                    )
//                );
//
//    EXPECT_TRUE(z.func());
//
//    //EXPECT_TRUE(true);
//}

TEST(ZZZ, demo02)
{
    CCC ccc(10, 15, 20);

    ZZZ z;
    MOCKED_AAA& mockedA = z._a;

    EXPECT_CALL(mockedA, RRR_AAA(_, _))
        .WillOnce(
                DoAll(
                    SetArgPointee<1>(ByRef(ccc)),
                    Return(true)
                    )
                );

    EXPECT_TRUE(z.funcII());
}
