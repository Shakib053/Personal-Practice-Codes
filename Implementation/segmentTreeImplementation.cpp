/*
1.Build basic segment tree
2.Check multiple query
3.Update any particular value
*/

#include <bits/stdc++.h>
#define MAX 100005
using namespace std;
int tree[MAX];
int arr[] = {1, 3, 5, 7, 10, 2};
void build(int node, int left, int right)
{
    if (left == right)
    {
        tree[node] = arr[left];
        return;
    }
    int mid = (left + right) / 2;
    int temp = (2 * node) + 1;
    build(temp, left, mid);
    build(temp + 1, mid + 1, right);
    tree[node] = tree[temp] + tree[temp + 1];
}
int query(int node, int b, int e, int i, int j)
{
    if (e < i || b > j)
        return 0;
    if (b >= i && e <= j)
        return tree[node];

    int mid = (b + e) / 2;
    int temp1 = (2 * node) + 1;
    int temp2 = temp1 + 1;
    int p1 = query(temp1, b, mid, i, j);
    int p2 = query(temp2, mid + 1, e, i, j);
    return (p1 + p2);
}
void update(int node, int b, int e, int i, int newValue)
{
    if (b >= i && e <= i)
    {
        tree[node] = newValue;
        return;
    }
    if (b > i || e < i)
        return;
    int t1 = (2 * node) + 1;
    int t2 = t1 + 1;
    int mid = (b + e) / 2;

    update(t1, b, mid, i, newValue);
    update(t2, mid + 1, e, i, newValue);
    tree[node] = tree[t1] + tree[t2];
}
int main()
{
    int n;

    // custom input
    /*
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    */

    // building the tree in array
    build(0, 0, 6 - 1);

    // checking whether tree is built correctly or not
    // for (int i = 0; i < 15; i++)
    //  cout << i << " " << tree[i] << endl;

    // update function i.e updates a particular value
    update(0, 0, 5, 1, 4);
    update(0, 0, 5, 3, -10);
    int queryNo;
    cin >> queryNo;
    for (int i = 0; i < queryNo; i++)
    {
        int x, y;
        cin >> x >> y;
        // query function i.e takes a range
        cout << query(0, 0, 5, x, y) << endl;
    }
    return 0;
}