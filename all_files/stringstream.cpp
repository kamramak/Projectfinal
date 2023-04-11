#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,W;
	int count=1;
	cout<<"enter"<<endl;
	getline(cin,s);
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==32)
		count++;
	}
	cout<<count<<endl;
	
}
