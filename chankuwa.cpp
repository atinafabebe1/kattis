#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,x,y,z,sum;
    cin>>a;
    while(a--)
    {
        cin>>b>>c;
        sum=0;
        for(int i=1;i<=c;i++)
        {
            sum=sum+i;
        }
        cout<<b<< " " <<sum+c<<endl;
    }
}