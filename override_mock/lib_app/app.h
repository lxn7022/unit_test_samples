#ifndef APP_H_
#define APP_H_

#include "org.h"
#include "mock.h"

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
