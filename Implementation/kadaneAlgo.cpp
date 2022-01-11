/*
maximum sub array sum for an array containing both positive and negative value
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int meh = 0, msf = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        // meh = meh + a[i];
        // if (meh < a[i])
        //     meh = a[i];
        // if (msf < meh)
        //     msf = meh;
        meh = max(meh + a[i], a[i]);
        msf = max(meh, msf);
    }
    cout << msf << endl;
    return 0;
}