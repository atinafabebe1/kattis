#include<iostream>
using namespace std;
int main()
{
    int a,b,c=0;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
        {
            c++;
        }
    }
    cout<<c;
}