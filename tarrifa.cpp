#include<iostream>
using namespace std;
int main()
{
    int a,b,c,x,sum=0;
    cin>>a>>b;
    while(b--)
    {
        cin>>x;
        sum=sum+a-x;
    }
    cout<<sum+a;
}