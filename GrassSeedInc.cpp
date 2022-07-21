#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,c,sum=0,x;
    int d;
    cin>>c;
    cin>>d;
    while(d--)
    {    a=0,b=0;
        cin>>a>>b;
        x=a*b;
        x=x*c;
        sum=sum+x;

    }
    cout<<fixed<<setprecision(7);
        cout<<sum;
}