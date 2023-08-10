#include <iostream>

#include "app.h"

using namespace std;
using namespace TTT;

int main()
{
    OrgClass o;
    App app(&o);
    app.set(50);
    cout<<app.get()<<endl;

    return 0;
};
