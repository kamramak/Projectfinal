#include<iostream>
using namespace std;

class Base
{
    virtual void rk()
    {
        cout<<" Base"<<endl;
    }
};

class Derived1 : public Base
{
    void rk()
    {
        cout<< "Derived1"<<endl;
    }
};

class Derived2 : public Base
{
    void rk()
    {
        cout<<" Derived2"<<endl;
    }
};

int main()
{
    Derived1 d1;
    
    Base *bp = dynamic_cast<Base*>(&d1);
    Derived1 *dp2 = dynamic_cast<Derived1*>(bp);
    if(dp2 == nullptr)
    {
        cout<<"Null"<<endl;
    }
    else
    {
        cout<<"Not Null"<<endl;
    }
    return 0;
}
