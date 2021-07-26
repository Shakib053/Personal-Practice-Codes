#include<bits/stdc++.h>
#include<map>
#include<iterator>
#define pi 3.1416
#define ll long long
using namespace std;
int main()
{
    int n,t=0;
    cin>>n;
    while (1)
    {
        if(n/10>=1)
        {
            t++;
            n=n/10;
        }
        if(n>=0 && n<=9)
        {
            t++;
            break;
        }
    }
    cout<<t<<endl;
    
    return 0;
}
