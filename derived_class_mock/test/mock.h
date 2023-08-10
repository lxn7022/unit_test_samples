#ifndef MOCK_H_
#define MOCK_H_

#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "org.h"

namespace TTT
{

class OrgClassMock : public OrgClass
{
public:
    OrgClassMock() : OrgClass() {};
    MOCK_METHOD(bool, set, (int i), ());
    MOCK_METHOD(int, get, (), ());
};

}

#endif // MOCK_H_
