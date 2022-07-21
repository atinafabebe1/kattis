#include<iostream>
using namespace std;
int main()
{
    int a,b,c,x,y,z,sum=0;
    cin>>a;
    while(a--)
    {
        cin>>b;
        sum=sum+b;
    }
    cout<<sum-a-1;
}