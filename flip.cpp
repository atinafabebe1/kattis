#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e, x, y, mo;

    cin >> a >> b;
    x = a;
    y = b;
    if (a % 10 == b % 10)
    {
        a = a / 10;
        b = b / 10;
        if (a % 10 == b % 10)
        {
            a = a / 10;
            b = b / 10;
            if (a > b)
            {
                while (x != 0)
                {
                    mo = x % 10;
                    x = x / 10;
                    cout << mo;
                }
            }
            else
            {
                while (y != 0)
                {
                    mo = y % 10;
                    y = y / 10;
                    cout << mo;
                }
            }
        }
        else if (a % 10 > b % 10)
        {
            while (x != 0)
            {
                mo = x % 10;
                x = x / 10;
                cout << mo;
            }
        }
        else
        {
            while (y != 0)
            {
                mo = y % 10;
                y = y / 10;
                cout << mo;
            }
        }
    }
    else if (a % 10 > b % 10)
    {
        while (x != 0)
        {
            mo = x % 10;
            x = x / 10;
            cout << mo;
        }
    }
    else
    {
        while (y != 0)
        {
            mo = y % 10;
            y = y / 10;
            cout << mo;
        }
    }
}