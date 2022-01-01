#include <iostream>
using namespace std;
int grid[100][100];
int visited[100];
int queue[1000];
int front = 0, rear = 0;
int test, n, edges;
void initcase()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            grid[i][j] = 0;
    }
    for (int i = 1; i <= n; i++)
        visited[i] = 0;
}
void print()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << grid[i][j] << " ";
        cout << endl;
    }
}
void enqueue(int val)
{
    queue[rear] = val;
    rear++;
}
int dequeue()
{
    int element = queue[front];
    front++;
    return element;
}
void bfs(int start)
{
    visited[start] = 1;
    enqueue(start);
    while (front < rear)
    {
        int value = dequeue();
        cout << value << " ";
        for (int i = 1; i <= n; i++)
        {
            if (grid[value][i] == 1 && visited[i] == 0)
            {
                visited[i] = 1;
                enqueue(i);
            }
        }
    }
}
void solve()
{
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            bfs(i);
        }
    }
}
int main()
{
    cout << "Test Case : ";
    cin >> test;
    while (test--)
    {
        cout << "Number of nodes: ";
        cin >> n;
        initcase();
        cout << "Number of edges:";
        cin >> edges;
        cout << "Edges\n";
        for (int i = 0; i < edges; i++)
        {
            int x, y;
            cin >> x >> y;
            grid[x][y] = 1;
            grid[y][x] = 1;
        }
        // print();
        solve();
    }
}