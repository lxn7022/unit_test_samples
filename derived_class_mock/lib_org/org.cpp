#include <iostream>
#include "org.h"

using namespace std;

namespace TTT
{

int OrgClass::get()
{
    return _i;
};

bool OrgClass::set(int i)
{
    _i = i;
    return true;
};

}
