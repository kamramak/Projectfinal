#include<bits/stdc++.h>
using namespace std;
void mergesort(int ar[],int l,int m,int h,int n)
{
    int coun=0,mov=0;
    int temp[n];
    int i=l;
    int j=m+1;
    int k=l;
    while(i<=m&&j<=h)
    {
        if(ar[i]<=ar[j])
        {
            temp[k]=ar[i];
            coun++;
            k++;
            i++;
        }
        else
        {
            temp[k]=ar[j];
            mov++;
            k++;
            j++;
        }
    }
    while(i<=m)
    {
        temp[k]=ar[i];
        k++;
        i++;
    }
    while(j<=h)
    {
        temp[k]=ar[j];
        k++;
        j++;
    }
    for(int s=l;s<=h;s++)
    {
        ar[s]=temp[s];
    }
    //cout<<endl;
    cout<<coun<<" "<<mov<<endl;
}
void mergeso(int ar[],int l,int h,int n)
{
    if(l<h)
    {
        int m=(l+h)/2;
        mergeso(ar,l,m,n);
        mergeso(ar,m+1,h,n);
        mergesort(ar,l,m,h,n);
    }
}
int main()
{

    int ar[10]={3,2,9,5,8,1,99,4,6,7};
    mergeso(ar,0,9,10);
    for(int i=0;i<10;i++) cout<<ar[i]<<" ";
}
