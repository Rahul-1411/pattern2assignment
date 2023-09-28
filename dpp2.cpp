#include<iostream>
 using namespace std;
//      A 
//    A B C 
//   A B C D E 
//  A B C D E F G 
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
            cout<<(char)('A'+k)<<" ";
        }
        cout<<endl;
     }

 }
  