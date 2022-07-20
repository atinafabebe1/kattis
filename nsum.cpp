#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int i,arr[a];
    int sum=0;
    for(i=0;i<a;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<sum;
}