#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;

int factorial(int n)
{
    if(n>1)
    {
        return n*factorial(n-1);
    }
    else 
    {
        return 1;
    }
}
int main()
{  
    int n;
    cin>>n;
    if(n<0)
    {
        cout<<"kono factorial nai\n";
    }
    else{
    cout<<factorial(n);
    }
    return 0;
}