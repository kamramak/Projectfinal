#include <iostream>
using namespace std;
int main() {
    int ar[5]={5,1,4,2,8};
    int temp=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(ar[j]>ar[j+1])
            {
               temp=ar[j];
               ar[j]=ar[j+1];
               ar[j+1]=temp;
            }
        }
    }
for(int i=0;i<5;i++)
    {
        cout<<ar[i]<<endl;
    }
    return 0;
}