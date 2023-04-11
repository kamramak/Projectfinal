#include <iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int s=0,p[10000],cnt=0,k=0;
    cout<<"enter"<<endl;
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        p[i]=str[i];
    }
    for(int i=0;i<=str.length();i++)
    {
        if(p[i]>=48&&p[i]<=57&&p[i+1]>=48&&p[i+1]<=57)
        {
            s=(s+(p[i])-48)*10;
        }
        else if(p[i]>=48&&p[i]<=57)
        {
            cnt=s+(p[i]-48);
            s=cnt;
        }
        else
        {
            k=k+s;
            s=0;
        }
    }
    cout<<k<<endl;
    return 0;
}