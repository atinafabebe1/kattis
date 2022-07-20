#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    int arr[a],sum=0;
    int i;
    for(i=0;i<a;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }

    sum=sum+a-1;
    cout<<sum;

    

}