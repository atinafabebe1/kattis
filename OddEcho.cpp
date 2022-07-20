#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    string word[a];
    int i;
    for (i = 0; i < a; i++)
    {
        if(i%2==0)
        {
            cout<<word[i]<<endl;
        }
        else
        {
            continue;
        }
    }
}