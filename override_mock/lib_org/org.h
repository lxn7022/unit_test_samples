#ifndef ORG_H_
#define ORG_H_

namespace TTT
{

class OrgClass
{
public:
    OrgClass() {};
    virtual ~OrgClass() {};

    virtual int get();
    virtual bool set(int i);

private:
    int _i;
};

}

#endif // ORG_H_
