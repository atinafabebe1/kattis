#include<iostream>
using namespace std;
int main()
{
    string word;
    cin>>word;
    int i;
    for(i=0;i<word.size();i++)
    {
        if(word[i]=='a')
        {
            cout<<word[i];
        }
    }
}