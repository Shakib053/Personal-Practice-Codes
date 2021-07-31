#include <bits/stdc++.h>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;
// this is binary search implementation using iteratve approach
int binary_search(int a[], int l, int r, int x)
{
    while (l <= r)
    {
        int mid = (l + r) / 2;
        // int mid = l + (r - l) / 2;
        // int mid = r - (r - l) / 2;
        if (a[mid] == x)
            return mid + 1;
        // 1 base indexing is value is returned
        if (x > a[mid])
            l = mid + 1;
        else
            r = mid - 1;
    }

    return -1;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    // sorted array should be given
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int x;
    cin >> x;
    if (binary_search(a, 0, n - 1, x) != -1)
        cout << binary_search(a, 0, n - 1, x);
    else
        cout << "Value not present in the given array" << endl;
    return 0;
}
