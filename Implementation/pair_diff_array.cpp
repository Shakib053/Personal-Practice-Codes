#include <bits/stdc++.h>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    ll a[n];
    ll b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(a, a + n);
    sort(b, b + m);
    ll result = LLONG_MAX;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        ll x = abs(a[i] - b[j]);
        if (x < result)
            result = x;
        if (a[i] < b[j])
            i++;
        else
            j++;
    }
    cout << result << endl;
    return 0;
}