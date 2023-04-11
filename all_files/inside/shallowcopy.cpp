#include<iostream>
using namespace std;
class Employee{
	private:
		int id,*a;
		string comp = "Capgemini";
		string name;

	public:
		Employee()
		{
		    int id = 14;
		    string comp = "Capgemini";
		    string name = "biryani";
			cout<<"Default constructor"<<endl<<"Welcome to capgemini"<<endl;
			cout<<"id = "<<id<<" comp = "<<comp<<" name = "<<name<<endl;
			a=new int;
		}


		Employee(int id,string name)
		{
			cout<<"Parameterised constructor"<<endl;
			this-> id = id;
			this-> name = name;
			cout<<"your name is = "<<name<<"  your id num is = "<<id<<" company name is = "<<comp<<endl;

		}
		//shallow copy
		/*Employee(Employee &e3)
		{
		    cout<<"copy constructor"<<endl;
		    id=e3.id;
		    name=e3.name;
		    cout<<"name = "<<e3.name<<" id = "<<e3.id<<endl;
		}*/
		Employee(Employee &e)
		{
			cout<<"deep copy constructor"<<endl;
			id=e.id;
		    name=e.name;
		    cout<<"name = "<<e.name<<" id = "<<e.id<<endl;
			//int a=30;
		    a = new int;
			*a = *(e.a);
			*a=50;
		}
		void getData(int id,string name,int c)
		{
		    this->id=id;
		    this->name=name;
		    *a=c;
		}
		void showData()
		{
		    cout<<"id = "<<id<<" name = "<<name<<" *a = "<<*a<<endl;
		}
};
int main()
{
    Employee e2,e1,e3;
    e2.getData(123,"rama",30);
    Employee e4=e2;
    e2.showData();
    e4.showData();
    return 0;
}
