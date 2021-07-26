#include <bits/stdc++.h>
using namespace std;
//using recursion
//just work fine for the smaller number of course
int fib(int n)
{
    if(n<=2)
    return 1; //because first two number of the sequence is 1 ,1
    else 
    return fib(n-1)+fib(n-2);
}
int main()
{
    int t;
    cin >> t; //test case
    while(t--)
    {
     int x;
     cin>>x; // the number of n which should print the nth number of the fibonacci sequence 
     cout<<fib(x)<<endl;
    }
    
    return 0;
}
