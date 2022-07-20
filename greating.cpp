#include<iostream>
using namespace std;
int main()
{
    int c=0;
    string word;
    cin>>word;
    for(int i=0;i<word.size();i++)
    {
        if(word[i]=='e')
        {
            c++;
        }
    }
    cout<<word[0];
    for(int i=0;i<c*2;i++)
    {
        cout<<"e";
    }
    cout<<word[word.size()-1];
}