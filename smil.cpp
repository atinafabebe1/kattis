#include <iostream>
using namespace std;
int main()
{
    int i, j;
    string word;
    cin>>word;
    int c = word.size();

    for (i = 0; i < c; i++)
    {
        if (word[i] == ':' && word[i + 1] == ')')
        {
            cout << i << endl;
        }
        else if (word[i] == ';' && word[i + 1] == ')')
        {
            cout << i << endl;
        }
        else if (word[i] == ':' && word[i + 1] == '-' && word[i+2]==')')
        {
            cout << i << endl;
        }
        else if (word[i] == ';' && word[i + 1] == '-')
        {
            cout << i << endl;
        }
        else
        {
            continue;
        }
    }
}