#ifndef MOCK_H_
#define MOCK_H_

#ifdef DO_UNIT_TEST

#include <gtest/gtest.h>
#include <gmock/gmock.h>

//#include "org.h"
#define ORG_AAA MOCKED_AAA
#define ORG_BBB MOCKED_BBB

namespace TTT
{

class MOCKED_BBB
{
public:
    MOCKED_BBB() {}
    ~MOCKED_BBB() {}

    MOCK_METHOD(bool, is_empty, (), (const));

    MOCKED_BBB& operator=(const MOCKED_BBB& other) {
        return *this;
    }
};

class MOCKED_AAA
{
public:
    MOCKED_AAA() {}
    ~MOCKED_AAA() {}

    MOCK_METHOD(bool, trans_str_to_container, (const string, MOCKED_BBB* resultCont), ());
    MOCK_METHOD(bool, RRR_AAA, (const string, CCC* resultCont), ());
};

}

#endif // DO_UNIT_TEST

#endif // MOCK_H_
