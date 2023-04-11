#include<iostream>
using namespace std;

class A
{
    private:
    int id;
    string name;
    public:
    void dis()
    {
        int id = 123;
        string name = "Rk";
        cout<<"id = "<<id<<" name = "<<name<<endl;
    }
};
class B
{
    private:
    int id;
    string name;
    public:
    void show()
    {
        int id = 200;
        string name = "krishna";
        cout<<"id = "<<id<<" name = "<<name<<endl;
    }
};
class C:public B,public A
{
    private:
    int id;
    string name;
    public:
    void display()
    {
        int id = 300;
        string name = "Dinesh";
        cout<<"id = "<<id<<" name = "<<name<<endl;
    }
};

int main()
{
    C c;
    c.dis();
    c.show();
    c.display();
    return 0;
}
