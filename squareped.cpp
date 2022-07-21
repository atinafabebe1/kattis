#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,d,e;
    cin>>a>>b;
    c=a*a;
    c*=2;
    c=sqrt(c);
    b*=2;
    if(c>b)
    {
        cout<<"nope";
    }
    else{
        cout<<"fit";
    }
}