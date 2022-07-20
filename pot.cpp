#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c, n, x, y, z, i,sum=0;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> a;
        b = a % 10;
        a = a / 10;
        arr[i]=pow(a,b);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
}