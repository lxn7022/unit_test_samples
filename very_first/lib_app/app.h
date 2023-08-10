#ifndef APP_H_
#define APP_H_

#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "org.h"

namespace TTT
{

class App
{
public:
    App() {};
    virtual ~App() {};

    int get();
    bool set(int i);

private:
    OrgClass _o;
};

}

#endif // APP_H_
