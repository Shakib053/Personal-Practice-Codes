#include <iostream>
using namespace std;
int n;
int value[100];
int weights[100];
int maxWeight;
int ans;
int sum;
void solve(int i, int cap, int sum)
{
    if (i == n)
    {
        if (sum > ans)
        {
            ans = sum;
        }
        return;
    }
    solve(i + 1, cap, sum);
    if (cap >= weights[i])
    {
        solve(i + 1, cap - weights[i], sum + value[i]);
    }
}
int main()
{
    cout << "Value of N : ";
    cin >> n;
    cout << "Values: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }
    cout << "Weights: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }
    cout << "Max Weight Value: " << endl;
    cin >> maxWeight;
    solve(0, maxWeight, 0);
    cout << "Solution : " << ans << endl;
    return 0;
}