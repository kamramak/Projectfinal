#include<iostream>
#include<stdexcept>

 

using namespace std;

 

class Exception
{
        string s;
        int a,id;
        public:
        void set()
        {
                cout<<"enter the course name : "<<endl;
                cin>>s;
                cout<<"enter the age : "<<endl;
                cin>>a;
                cout<<"enter the id : "<<endl;
                cin>>id;
                cout<<endl;
        }
        void show()
        {
                cout<<" s : "<<s<<endl;
        }
        void cal()
        {
                try
                {
                        if(s=="CSE"||s=="cse"||s=="IT"||s=="it")
                        {
                                cout<<"u have selected the computer course"<<endl;
                                cout<<endl;
                        }
                        else throw s;
                }
                catch(string s)
                {
                        cout<<"u have to choose either cs r it course"<<endl;
                        cout<<endl;
                }
                try
                {
                        if(a==0)
                                throw runtime_error("age cant be zero");
                }
                catch(runtime_error &e)
                {
                        cout<<"exception occured"<<endl;
                        cout<<e.what();
                        cout<<endl;
                }
        }
        void p() throw(string)
        {
                try
                {
                        if(id==0)
                                throw id;
                }
                catch(...)
                {
                        cout<<endl;
                        cout<<"restricted throw"<<endl;
                }
        }
};

 

int main()
{
        Exception e;
        e.set();
        e.cal();
        e.show();
        e.p();

 

        return 0;
}