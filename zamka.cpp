#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c;
    int x, y, z, sum, i;
    for (i = a; i <= b; i++)
    {
        sum = 0;
        y = i;
        z=i;
        while (y != 0)
        {
            x = y% 10;
            y = y / 10;
            sum = sum + x;
        }
        if (sum == c)
        {
            cout << z<< endl;
            break;
        }
    }
    for (i = a; i <= b; i++)
    {
        sum = 0;
        y = i;
        
        while (y != 0)
        {
            x = y% 10;
            y = y / 10;
            sum = sum + x;
        }
        if (sum == c)
        {
        d=i;
        }
    }
    cout << d;
}