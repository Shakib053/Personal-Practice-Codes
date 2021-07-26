#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
//recursion er maddhome
int asum(int n)
{   
    if(n<=0)
    { 
     return 0;// additive identity hoilo zero
    }
    else{
        return n + asum(n-1);
    }
}
//exponentiation like 5^3=5*5*5 p=5 q=3
int exp(int p,int q)
{
    if(q<=0)
    {
        return 1;//multiplicative identity hoilo zero
    }
    else {
        return p*exp(p,q-1);
    }
}
int main()
{  
     int n,sum=0;
     cin>>n;
     int p,q;
     cin>>p>>q;
//iteration er maddhome
     
     /*for(int i=1;i<=n;i++)
     {
         sum=sum+i;
     }
     cout<<sum;
     */
    cout<<"summation\n";
    cout<<asum(n);
    cout<<"\nexponentiation\n";
    cout<<exp(p,q);
    return 0;
    }