#include<iostream>
using namespace std;
class Employee{
	private:
		int id;
		string comp = "Capgemini";
		string name;

	public:
		Employee(int id,string name)
		{
			cout<<"Parameterised constructor"<<endl;
			this-> id = id;
			this-> name = name;
			cout<<"your name is "<<name<<"  your id num is "<<id<<" company name is "<<comp<<endl;

		}

};
int main()
{
	int num;
	string emp_name;
	cout<<"enter your id number";
	cin>>num;
	cout<<"enter your name";
	cin>>emp_name;
	Employee e(num,emp_name);
	return 0;
}
