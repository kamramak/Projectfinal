// deep copy
#include <iostream>
#include<cstring>
using namespace std;
class box {
public:
	int length;
	int breadth;
	char *name;
	box()
	{
		name = new char[strlen(name)];
	}

	void set_dimension(int len, int brea,
					char n[10])
	{
		length = len;
		breadth = brea;
		strcpy(name , n);
	}
	void show_data()
	{
		cout << " Length = " << length
			<< "\n Breadth = " << breadth
			<< "\n name = " << name
			<< endl;
	}
	box(box& sample)
	{
		length = sample.length;
		breadth = sample.breadth;
		name=new char[strlen(name)];
		strcpy(name , sample.name);
	}
};


int main()
{
	box first;
	first.set_dimension(12, 14, "soumith");
	first.show_data();
	box second = first;
	second.show_data();
	first.name[0]='n';
	first.show_data();
	second.show_data();

	return 0;
}
