#include<bits/stdc++.h>
using namespace std;
int main()
{ 

    double a,x,y,z;
    int b,c;
    cin>>a>>b>>c;
    x=(a*b)/100;
    y=(a*c)/100;
    //cout<<a;

    cout<<round(x+y+a);
    return 0;
}