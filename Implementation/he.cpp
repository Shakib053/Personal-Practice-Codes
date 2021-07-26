#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        int n;
        cin>>n;
        int c,d,e=0,f=0;
        
        for(int i=0;i<n;i++)
        {
           cin>>c>>d;
           e=(a*c)+(b*d)+e;
           f=(a*d)+(b*c)+f;
        }
        if(e<f)
        {
             cout<<e;
        }
        else {
            cout<<f;
        }
        cout<<endl;
    }
    return 0;
}