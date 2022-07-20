#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    string word;
    while(1){
        cin>>word;
    int a=word.size();
   int i,c=0,n=0;
   /*for(i=0;i<a;i++)
   {
     if(word[i]=='(')
     {
        n=i;
        break;
     }
   }*/
   if(a%2==1)
   {
    cout<<"fix";
   }

   else if(word[a/2-1]=='(')
   {
    cout<<"correct"<<endl;
   }
   else
   {
    cout<<"fix";
   }
}
}