#include "app.h"

namespace TTT
{

bool ZZZ::func()
{
    string rawStr = "rawSSSTTTRRR";

    ORG_BBB result;
    _a.trans_str_to_container(rawStr, &result);

    if (result.is_empty())
    {
        return false;
    }

    return true;
}

bool ZZZ::funcII()
{
    string rawStr = "rawSSSTTTRRR";

    cout << "AAAAAAAAAAAAAAAAAAAAAA" << endl;
    CCC result(5, 10, 15);

    _a.RRR_AAA(rawStr, &result);

    cout << "BBBBBBBBBBBBBBBBBBBBBB" << endl;


    cout << "CCC -->> " << result.l_ << " -->> " << result.m_ << " -->> " << result.n_ << endl;

    if (result.l_ == 5)
    {
        cout << "CCCCCCCCCCCCCCCCCCCCCC" << endl;
        return false;
    }

    cout << "DDDDDDDDDDDDDDDDDDDDDD" << endl;
    return true;
}

}
