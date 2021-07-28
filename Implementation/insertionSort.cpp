#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{   
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }
 for(int i=1;i<n;i++)
 {
     int v=a[i];
     int h=i;
     while(h>0 && a[h-1]>v)
     {
         a[h]=a[h-1];
         h--;
     }
     a[h]=v;
 }
  for(int i=0;i<n;i++)
  {
      cout<<a[i]<<" ";
  }
  cout<<endl;
 return 0;
}
