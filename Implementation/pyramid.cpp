/* printing a triangle
      *
     ***
    *****
   *******
  *********
 ***********
*************      */
#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define pi 3.1415
#define ll long long
using namespace std;
int main()
{   
   int n;
   cin>>n;
  for(int i=1;i<=n;i++)
  {
      for(int j=0;j<n-i;j++)
      {
          cout<<" ";
      }
      for(int k=0,c=1;k<n,c<=2*i-1;k++,c++)
      {
          cout<<"*";
    }
    cout<<endl;

  }

    return 0;
}
