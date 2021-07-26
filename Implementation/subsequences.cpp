#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{ 
  string s;
  cin>>s;
  int ans=0;
  int n=s.size();
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      for(int k=j+1;k<n;k++)
      {
        if(s[i]=='Q' && s[j]=='A' && s[k]=='Q')
        ans++;
      }
    }
  }
  cout<<ans<<endl;
}


return 0;
}
