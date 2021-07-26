#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define ll long long
using namespace std;
int main()
{   
 int t;
 cin>>t;
 while (t--)
 {
     int n;
     cin>>n;
     int r;
     if(n/10000>=1)
     {
         n=n-(n%10000);
     }
     if(n/1000>=1)
     n=n-(n%1000);
     if(n/100>=1)
     n=n-(n%100);
     if(n/10>=1)
     n=n-(n%10);
 
 }
 
 return 0;
}
