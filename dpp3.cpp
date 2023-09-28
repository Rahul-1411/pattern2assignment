#include<iostream>
using namespace std;
//    A 
//   B A B 
//  C B A B C 
// D C B A B C D 
 int main()
 {
    int n;
     cout<<" enter the number of lines";
     cin>>n;
     for(int i=1;i<=n;i++)
     {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int k=i-1;k>=0;k--)
        {
            cout<<(char) ('A'+k)<<" ";
        }
        for(int q=1;q<i;q++)
        {
             cout<<(char) ('A'+q)<<" ";
        }
        cout<<endl;
     }
 }