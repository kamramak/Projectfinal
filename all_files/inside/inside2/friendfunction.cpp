#include<iostream>
using namespace std;
template<typename T>
class Demo
{
	T x,y;
public:
		Demo()
		{
			T x = 10;
			T y = 20;
			this->x=x;
			this->y=y;
		}
		template<class U>
		friend void disp(Demo<U> d);
};

template<class U>
void disp(Demo<U> d)
{
	cout<<"x = "<<d.x <<endl;
	cout<<"y = "<<d.y <<endl;
}
int main()
{
	Demo<int> rk1;
	disp(rk1);
	return 0;

}
