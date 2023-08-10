#ifndef ORG_H_
#define ORG_H_
#include <iostream>

using namespace std;

namespace TTT
{

class CCC
{
public:
    CCC(int x, int y, int z) : l_(x), m_(y), n_(z) {}

    int l_;
    int m_;
    int n_;
};

class ORG_BBB
{
public:
    ORG_BBB() {}
    ~ORG_BBB() {}

    bool is_empty() const;
};

class ORG_AAA
{
public:
    ORG_AAA() {}
    ~ORG_AAA() {}

    bool trans_str_to_container(const string& str, ORG_BBB* resultCont);
    bool RRR_AAA(const string& str, CCC* resultCont);
};

}

#endif // ORG_H_
