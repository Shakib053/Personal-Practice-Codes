/* printing a triangle
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5     */
#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define pi 3.1415
#define ll long long
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
   
      for(int j=1;j<=n;j++)
      {
        for(int i=1;i<=n-j;i++)
        {
          cout<<"  ";
        }
        for(int k=1;k<=j;k++)
        { 
          count++;
          cout<<count<<" ";
        }
        for(int k=1;k<j;k++)
        {
          count--;
          cout<<count<<" ";
        }
        cout<<endl;
      }
    
    return 0;
}
