#include <iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main() 
{
    int s,e,r,k=0,l;
    string str,str1,str2,str3;
    cout<<"enter the string"<<endl;
    cin>>str;
    cout<<"enter the starting and ending positions"<<endl;
    cin>>s>>e;
    cout<<"enter the rotations"<<endl;
    cin>>r;
    if((e-s)+1==r)
    {
        cout<<str<<endl;
    }
    else
    {
    for(int i=0;i<str.length();i++)
    {
        if(i>=s&&i<=e)
        {
            str2[k]=str[i];
            k++;
            str1[i]=' ';
        }
        else
        {
            str1[i]=str[i];
        }
    }
}
l=k-r;
int j=0;
for(int i=0;i<k;i++)
{
    if(r>0)
    {
        str3[i]=str2[l];
        l++;
        r--;
    }
    else
    {
       str3[i]=str2[j]; 
       j++;
    }
}
j=0;
    for(int i=0;i<str.length();i++)
    {
        if(str1[i]==32)
        {
            str1[i]=str3[j];
            cout<<str[i]<<endl;
            j++;
        }
    }
    for(int i=0;i<str.length();i++)
    {
        cout<<str1[i]<<" ";
    }
    return 0;
}