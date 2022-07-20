#include<iostream>
using namespace std;
int main()
{
    string word;
    cin>>word;
    int i,a=0;
    for(i=0;i<word.size();i++)
    {
        if(word[i]=='a')
        {
            a=i;
            break;
        }
    }
    for(i=a;i<word.size();i++)
    {
        cout<<word[i];
    }
}