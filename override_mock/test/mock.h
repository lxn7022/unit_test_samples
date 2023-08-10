#ifndef MOCK_H_
#define MOCK_H_

#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "org.h"
#define OrgClass O_rgClassMock

namespace TTT
{

class O_rgClassMock
{
public:
    O_rgClassMock() {};
    MOCK_METHOD(int, get, (), ());
    MOCK_METHOD(bool, set, (int i), ());
};

}

#endif // MOCK_H_
