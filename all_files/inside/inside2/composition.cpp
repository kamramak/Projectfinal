#include<iostream> 
using namespace std;
class Engine
{
        int power;
        public:
        Engine()
        {
                cout<<"creating engine"<<endl;
        }
        ~Engine()
        {
                cout<<"destroying engine"<<endl;
        }
};
class Car
{
        int model;
        string name;
        Engine e;
        public:
        Car(string nName,int mModel)
        {
                model=mModel;
                name=nName;
                cout<<"creating car"<<endl;
        }
        ~Car()
        {
                cout<<"destroying car"<<endl;
        }
        void show()
        {
                cout<<"car name : "<<name<<endl;
                cout<<"car model : "<<model<<endl;
        }
}; 
int main()
{
        Car *c = new Car("Bmw",520);
        c->show();
        delete c;
        return 0;
} 

