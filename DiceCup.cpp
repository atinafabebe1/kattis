#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b;
    int i;
    c=min(a,b);
    d=max(a,b);
    for(i=c;i<=d;i++)
    {
        cout<<i+1<<endl;
    }
}