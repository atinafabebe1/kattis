#include<iostream>
using namespace std;
int main()
{
    string word;
    getline(cin,word);
    int i;
    cout<<word[0];
    for(i=0;i<word.size();i++)
    {   
        if(word[i]=='-')
        {
            cout<<word[i+1];
        }
    }
}