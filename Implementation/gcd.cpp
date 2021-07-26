#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,gcd;
    cin>>n1>>n2;
    if (n1==0)
    {
        cout<<"GCD = "<<n2<<endl;
    }
  else if (n2==0)
  { 
      cout<<"GCD = " <<n1;
  }
  else if(n1==n2)
  {
      cout<<"GCD = "<<n1;
  }
   else {
  for(int i=1;i<=n1 && i<=n2;i++)
  {
      if(n1%i==0 && n2%i==0)
      {
          gcd=i;
      }
  }
   cout<<"GCD = "<<gcd;
}
 
    return 0;
}