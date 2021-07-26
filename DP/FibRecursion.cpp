#include <bits/stdc++.h>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;
ll fib(ll n)
{

    if (n <= 2)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = fib(n);
        cout << ans << endl;
    }
    return 0;
}
