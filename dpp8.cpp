#include<iostream>
using namespace std;
//     1 
//    1 2 3 
//   1 2 3 4 5 
//  1 2 3 4 5 6 7 
 int main()
 {
    int n;
     cout<<"enter the number of lines";
     cin>>n;
     for(int i=0;i<n;i++)
     {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<2*i+1;k++)
        {
            cout<<k+1<<" ";
        }
        cout<<endl;
     }

 }