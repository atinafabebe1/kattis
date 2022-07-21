#include <iostream>
using namespace std;
int main()
{
    int a, b, c, x = 0, y, z;
    cin >> a >> b >> c;
    int sum, sum2;
    for (int i = a; i <= b; i++)
    {
        sum = 0;
        x=0;
        while (i != 0)
        {
            x= i % 10;
            i = i / 10;
            sum = sum + x;
        }

        if (sum== c)
        {
            z= sum;
        }
    }
    cout << z;
    for (int i = a; i < b; i++)
    {
        sum2 = 0;
        x=0;
        while (i != 0)
        {
            x= i % 10;
            i = i / 10;
            sum2 = sum2 + x;
        }

        if (sum2 == c)
        {
            z = sum2;
            break;
        }
    }
    cout << z;
}