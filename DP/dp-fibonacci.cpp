#include <bits/stdc++.h>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;
un ll arr[100000] = {0};
//memoization technique
//complexity reduced to O(n)
//space complexity 0(n), time complexity 0(n)
un ll fib(un ll n)
{

    if (n <= 2)
        return 1;
    if (arr[n] != 0)
        return arr[n];
    else
    {
        arr[n] = fib(n - 1) + fib(n - 2);
        return arr[n];
    }
}
int main()
{
    un ll t;
    cin >> t;
    arr[0] = 1;
    arr[1] = 1;
    while (t--)
    {
        un ll n;
        cin >> n;
        un ll ans = fib(n);
        cout << ans << endl;
    }
    return 0;
}
