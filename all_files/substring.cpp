#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,str1;
    cout<<"enter"<<endl;
    getline(cin,str);
    cout<<"entr the word"<<endl;
    cin>>str1;
    int count=0,k=0,m=0;
    for(int i=0;i<str.length();i++)
    {
        for(int j=0;j<str1.length();j++)
        {
            if(str[i]==str1[j])
            {
                count++;
                i++;
            }
            else if(count==str1.length())
            {
                k=count;
                if(m==0)
                {
                m=(i-str1.length())-1;
                }
            }
            else
            {
                count=0;
            }
        }
    }
    if(k==str1.length())
    {
        cout<<"word found"<<endl;
        cout<<m<<endl;
    }
    else
    {
        cout<<"word not found"<<endl;
    }
}
