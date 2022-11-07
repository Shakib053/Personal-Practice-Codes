#include <iostream>
#include <algorithm>
#include <math.h>
#include <set>
#include <vector>
int arr[100005];
int tree[4 * 100005];
int ans;

void build(int node, int left, int right)
{
    if (left == right)
    {
        tree[node] = arr[left];
        return;
    }
    int temp = (2 * node) + 1;
    int mid = (left + right) / 2;
    build(temp, left, mid);
    build(temp + 1, mid + 1, right);
    tree[node] = tree[temp] + tree[temp + 1];
}

void update(int node, int b, int e, int i, int value, int flag)
{
    if (b >= i && e <= i)
    {
        ans = tree[node];
        if (flag == 0)
            tree[node] = tree[node] + value;
        else
            tree[node] = 0;
        return;
    }
    if (b > i || e < i)
    {
        return;
    }

    int mid = (b + e) / 2;
    int temp = (2 * node) + 1;
    update(temp, b, mid, i, value, flag);
    update(temp + 1, mid + 1, e, i, value, flag);
    tree[node] = tree[temp] + tree[temp + 1];
}

int find(int node, int b, int e, int i, int j)
{
    if (b >= i && e <= j)
    {
        return tree[node];
    }
    if (b > j || e < i)
    {
        return 0;
    }
    int mid = (b + e) / 2;
    int temp = (2 * node) + 1;
    int p1 = find(temp, b, mid, i, j);
    int p2 = find(temp + 1, mid + 1, e, i, j);
    return p1 + p2;
}

using namespace std;
int main()
{
    int t;
    cin >> t;
    int test = 1;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        build(0, 0, n - 1);
        cout << "Case " << test << ":" << endl;
        test++;
        for (int i = 0; i < q; i++)
        {
            int type;
            cin >> type;
            if (type == 1)
            {
                int index;
                cin >> index;
                update(0, 0, n - 1, index, 0, 1);
                cout << ans << endl;
            }
            else if (type == 2)
            {
                int p, v;
                cin >> p >> v;
                update(0, 0, n - 1, p, v, 0);
            }
            else
            {
                int x, y;
                cin >> x >> y;
                cout << find(0, 0, n - 1, x, y) << endl;
            }
        }
    }
    return 0;
}