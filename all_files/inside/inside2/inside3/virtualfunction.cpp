#include <iostream>
using namespace std;
class Vechicle
{
    public:
    virtual void m()
    {
        cout<<"main m"<<endl;
    }
    void show()
    {
        cout<<"main show"<<endl;
    }
};
class Car:public Vechicle
{
    public:
    void m()   // function
    {
        cout<<"child m"<<endl;
    }
    void show()
    {
        cout<<"child show"<<endl;
    }

};

int main()
{
    Vechicle *b=new Car();  To create pointer *b to refering to the new car.
    b->m();  calling method.
    b->show();
    delete b;

    return 0;
}
