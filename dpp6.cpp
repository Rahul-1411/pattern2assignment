#include<iostream>
using namespace std;
 int main ()
 {
    int n;
     cout<<" enter the number of lines";
     cin>>n;
     for(int i=0;i<n-1;i++)
     {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
        cout<<"*";
        cout<<endl;
     }
     for(int k=0;k<n-1;k++)
        {
            cout<<" ";
        }
 }