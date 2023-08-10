#include "vehiclie.h"

namespace VOM
{

Vehiclie::Vehiclie()
{
    direction_ = 0;
    x_ = 0;
    y_ = 0;
}

string Vehiclie::execute(string orders)
{
    string skipedOrders;
    for (auto c: orders)
    {
        if (c == 'f')
        {
            move(true);
        }
        else if (c == 'b')
        {
            move(false);
        }
        else if (c == 'l')
        {
            turn(true);
        }
        else if (c == 'r')
        {
            turn(false);
        }
        else
        {
            cout << "Unknown order: " << c << endl;
        }
    }

    return skipedOrders;
}

//0 0  0 -1
//0 1  0 +1
//1 0 -1  0
//1 1 +1  0
//2 0  0 +1
//2 1  0 -1
//3 0 +1  0
//3 1 -1  0
bool Vehiclie::move(bool forward)
{
    switch (direction_)
    {
        case 0:
        {
            if (forward)
            {
                y_ += 1;
            }
            else
            {
                y_ -= 1;
            }
            break;
        }
        case 1:
        {
            if (forward)
            {
                x_ += 1;
            }
            else
            {
                x_ -= 1;
            }
            break;
        }
        case 2:
        {
            if (forward)
            {
                y_ -= 1;
            }
            else
            {
                y_ += 1;
            }
            break;
        }
        case 3:
        {
            if (forward)
            {
                x_ -= 1;
            }
            else
            {
                x_ += 1;
            }
            break;
        }
        default:
        {
            break;
        }
    }

    return true;
}

bool Vehiclie::turn(bool left)
{
    if (left)
    {
        direction_ -= 1;
    }
    else
    {
        direction_ += 1;
    }
    direction_ += 4;
    direction_ %= 4;

    return true;
}

string Vehiclie::status() const
{
    string result;
    result += to_string(x_);
    result += ", ";
    result += to_string(y_);
    result += ", ";
    result += to_string(direction_);
    return result;
}

}
