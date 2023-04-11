#include<iostream> 
using namespace std;
class Demo
{
        double a,b;
        public:
        Demo(double x=0,double y=0)
        {
                a=x;b=y;
        }
        void setvalues(double x,double y)
        {
                a=x;b=y;
        }
        Demo operator +(Demo d)
        {
                Demo temp;
                temp.a=a+d.a;
                temp.b=b+d.b;
                return temp;
        }
        Demo operator -(Demo d)
        {
                Demo temp;
                temp.a=a-d.a;
                temp.b=b-d.b;
                return temp;
        }
        Demo operator *(Demo d)
        {
                Demo temp;
                temp.a=a*d.a;
                temp.b=b*d.b;
                return temp;
        }
        Demo operator /(Demo d)
        {
                Demo temp;
                temp.a=a/d.a;
                temp.b=b/d.b;
                return temp;
        }
        void show()
{
                cout<<"a : "<<a<<"\t b : "<<b<<endl;
        }
}; 

int main()
{
        Demo e,e1(11,12),e2;
        e2.setvalues(10,20);
        e=e1+e2;
        e.show();
        e=e1-e2;
        e.show();
        e=e1*e2;
        e.show();
        e=e1/e2;
        e.show();         
		return 0;
}

