#include "app.h"

namespace TTT
{

int App::get()
{
    return _o.get();
};

bool App::set(int i)
{
    return _o.set(i);
};

}
