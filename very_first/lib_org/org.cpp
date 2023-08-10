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
    if (i < 50 or i > 99)
    {
        _i = 0;
        return false;
    }

    _i = i;
    return true;
};

}
