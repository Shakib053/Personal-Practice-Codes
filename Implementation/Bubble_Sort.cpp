#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define pi 3.1415
#define ll long long
using namespace std;
int main()
{   

int n,m,t;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
} 
for(int i=0;i<n;i++)
{    int flag=0;
    for(int j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
        t=a[j+1];
        a[j+1]=a[j];
        a[j]=t;
        flag=1;
      }
    }
    if(flag==0)
    break;
} 
for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
} 
cout<<endl;
return 0;
}
