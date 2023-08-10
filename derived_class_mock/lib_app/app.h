#ifndef APP_H_
#define APP_H_

#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "org.h"
#include "mock.h"

namespace TTT
{

class App
{
public:
    App(OrgClass* o) : _o(o) {};
    virtual ~App() {};

    int get();
    bool set(int i);

private:
    OrgClass* _o;
};

}

#endif // APP_H_
