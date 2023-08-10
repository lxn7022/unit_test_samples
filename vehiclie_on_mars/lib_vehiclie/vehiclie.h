#ifndef VEHICLIE_H_
#define VEHICLIE_H_

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::to_string;

namespace VOM
{

class Vehiclie
{
public:
    Vehiclie();
    ~Vehiclie() {}

    string execute(string);
    bool move(bool);
    bool turn(bool);
    string status() const;

private:
    int direction_;
    int x_;
    int y_;
};

}

#endif
