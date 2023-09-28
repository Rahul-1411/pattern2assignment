#include <iostream>
using namespace std;
// A B C D E F G 
// A B C  EFG
// A B    FG
// A      G
int main()
{
int n;
 cout<<" enter the number of lines";
 cin>>n;
 for(int i=0;i<2*n-1;i++)
 {
    cout<<(char)('A'+ i) <<" ";
 }
 cout<<endl;
 for(int k=1;k<n;k++)
 {
    for(int q=0;q<n-k;q++)
    {
      cout<<(char)('A'+q)<<" ";
    }
    for(int j=0;j<2*k-1;j++)
    {
        cout<<" ";
    }
    for(int p=0;p<n-k;p++)
    {
        cout<<(char)('A'+n+k+p-1);
    }
    cout<<endl;
 }










}