#include <iostream>
using namespace std;
int main()
{
    int a, b, x, y, z, e, c, r;
   
        cin >> a;
        while (a)
        {
            cin >> r >> e >> c;
            if (r + c < e)
            {
                cout << "advertise"<<endl;
            }
            else if (r + c == e)
            {
                cout<<"does not matter"<<endl;
            }
            else
            {
                cout<<"do not advertise"<<endl;
            }
            a--;
        }
    
}