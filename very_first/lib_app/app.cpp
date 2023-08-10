#include "app.h"

namespace TTT
{

int App::get()
{
    int i = _o.get();
    i *= 2;
    return i;
};

bool App::set(int i)
{
    return _o.set(i);
};

}
