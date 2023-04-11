#include<iostream> 
using namespace std; 
class Car
{
        string cname;
        public:
        Car()
        {
                cname="";
        }
        Car(string cn)
        {
                cname=cn;
        }
        string getCarName()
        {
                return cname;
        }
        ~Car()
        {
                cout<<"car destructor called"<<endl;
        }
};
class Driver
{
        string dname;
        public:
        Driver()
        {
                dname="";
        }
        Driver(string dn)
        {
                dname=dn;
        }
        string getDriverName()
        {
                return dname;
        }
        void drives(Car &c)
        {
                cout<<dname<<" is driving "<<c.getCarName()<<endl;
        }
		~Driver()
        {
                cout<<"Driver destructor called"<<endl;
        }
}; 
int main()
{
        Driver d1("Rama"),d2("krishna");
        Car c1("honda"),c2("toyota");         
		d1.drives(c1);
        d1.drives(c2);         
		d2.drives(c1);
        d2.drives(c2);         
		return 0;
}
