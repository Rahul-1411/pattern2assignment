#include<iostream>
using namespace std;
 int main ()
 {
    int n,m;
     cout<<" enter the number of rows";
     cin>>n;
     cout<<" enter the number of columns";
     cin>>m;
     for(int i=0;i<n;i++)
     {
        cout<<" ";
        cout<<"*";
        cout<<endl;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<n-i;j++)
            {
                cout<<" ";
            }
            cout<<"*";
            int m=2*i-1;
            for(int j=0;j<m;j++)
            {
                cout<<" ";
            }
        }
     }
 }