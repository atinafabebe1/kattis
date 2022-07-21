#include<iostream>
using namespace std;
int main()
{
    int a,b,c,x,y,z,sum=0;
    cin>>a;
   int i,arr[a];
   for(i=0;i<a;i++)
   {
      cin>>arr[i];
      sum=sum+arr[i];
   }

   
    cout<<sum-a+1;
}