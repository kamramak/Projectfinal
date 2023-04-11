#include <iostream>
using namespace std;
class Base
{
    public:
    int id;
    string emp_name;
    void display()
    {
        id=123;
        emp_name="vk";
        cout<<"id = "<<id<<" emp_name = "<<emp_name<<endl;
    }
};
class Derived:public Base
{
    private:
    int emp_id;
    string cmp_name;
    public:
    void show()
    {
        emp_id=200;
        cmp_name="capgemini";
        cout<<"emp_id = "<<emp_id<<" cmp_name = "<<cmp_name<<endl;
    }
};

int main()
{
    Base c;
    c.display();
    Derived r;
    r.show();
    r.display();

    return 0;
}
