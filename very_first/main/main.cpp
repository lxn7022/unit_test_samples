#include <iostream>

#include "app.h"

using namespace std;
using namespace TTT;

int main()
{
    App app;
    app.set(50);
    cout<<app.get()<<endl;

    return 0;
};
