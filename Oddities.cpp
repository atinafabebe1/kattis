#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,d,e;

    cin>>a;
    while(a--)
    {
        cin>>b;
        c=b;
        b=abs(b);
        if(b%2==0)
        {
            cout<<c << " is even"<<endl;
        }
        else
        {
            cout<< c << " is odd"<<endl;
        }
    }
}