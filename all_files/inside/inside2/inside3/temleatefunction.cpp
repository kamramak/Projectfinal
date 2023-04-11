#include<iostream>
using namespace std;
template <typename T>

void swapDemo1(T &a,T &b)
{
    T c;
    c = a;
    a = b;
    b = c;
}
int main()
{
    int a = 15;
    int b = 25;
    float c = 15.5f;
    float d = 25.5f;
    char e = 'd';
    char f = 'e';

    cout<<"Before swap"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    swapDemo1<int>(a,b);
    cout<<"After swap"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    cout<<"Before swap"<<endl;
    cout<<"c="<<c<<endl;
    cout<<"d="<<d<<endl;
    swapDemo1<float>(c,d);
    cout<<"After swap"<<endl;
    cout<<"c="<<c<<endl;
    cout<<"d="<<d<<endl;

    cout<<"Before swap"<<endl;
    cout<<"e="<<e<<endl;
    cout<<"f="<<f<<endl;
    swapDemo1<char>(e,f);
    cout<<"After swap"<<endl;
    cout<<"e="<<e<<endl;
    cout<<"f="<<f<<endl;

    return 0;

}
