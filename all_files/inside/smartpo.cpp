#include<bits/stdc++.h>
using namespace std;
template<class t>
class sp
{
    t *d;
    public:
        sp(t *p=NULL)
        {
            d=p;
            cout<<*d<<endl;
        }
        int operator *()
        {
            return *d;
        }
        ~sp()
        {
            delete d;
        }

};
int main()
{
    int *p=new int(10);
    char *l=new char('a');
    sp <int>s(p);
    sp <char>k(l);
    cout<<*s<<endl;
    cout<<*k<<endl;

}
