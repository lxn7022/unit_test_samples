#ifndef APP_H_
#define APP_H_

#include <iostream>
#include "org.h"
#include "mock.h"

using namespace std;

namespace TTT
{

class ZZZ
{
public:
    ZZZ() {};
    ~ZZZ() {};
   
    bool func();
    bool funcII();

private:
    ORG_AAA _a;
};

}

#endif // APP_H_
