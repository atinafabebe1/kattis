#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    d = 0;
    for(int i=1;i<a;i++)
    {
     
        if(arr[i]%arr[d]==0)
        {
            cout<<arr[i]<<endl;
            d=i+1;
            i=i+1;
            continue;
        }
    }
}