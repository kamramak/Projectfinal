#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l=6,val=1,i=1,preSum=0,closeSum=0,sum=1,rem=0,closeVal=1;
    int num;
    string s="";
    cout<<"enter the number"<<endl;
    cin>>num;
    while(1)
    {
        closeVal=val*val;
        if(closeVal>num)
        {
            num=num-(rem*rem);
            s=s+to_string(rem)+".";
            rem=2*rem;
            break;
        }
        else
        {
            rem=val;
            val++;

        }
    }
    while(l)
    {
        i=1;
        num=num*100;
        while(1)
        {
            sum=rem*10+i;
            closeSum=sum*i;
            if(closeSum>num)
            {
                rem=(sum-1)+(--i);
                s=s+to_string(i);
                break;
            }
            else
            {
                preSum=closeSum;
                i++;
            }
        }
        num=num-preSum;
        l--;
    }
    cout<<s<<endl;
}
