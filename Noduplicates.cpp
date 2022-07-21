#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,x;
    cin>>a;
    while(a--)
    {
        cin>>b;
        x=1;
        while(b!=1)
        {
            x=x*b;
            b--;
        }
        d=x%10;
        cout<<d<<endl;
    }
}