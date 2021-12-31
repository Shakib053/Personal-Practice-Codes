#include <iostream>
using namespace std;
int visited[1000];
int grid[1000][1000];
int queue[1000];
int front = 0, rear = 0;
int n, start;
void initcase()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            grid[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
        visited[i] = 0;
}
void enqueue(int val)
{
    queue[rear] = val;
    rear++;
}
int dequeue()
{
    if (front == rear)
    {
        return 0;
    }
    int val = queue[front];
    front++;
    return val;
}
void displayQueue()
{
    for (int i = front; i < rear; i++)
        cout << queue[i] << " ";
    cout << endl;
}
void bfs(int x)
{
    enqueue(x);
    visited[x] = 1;
    while (front < rear)
    {
        int p = dequeue();
        cout << p << " ";
        for (int i = 0; i < n; i++)
        {
            if (grid[p][i] == 1 && visited[i] == 0)
            {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}
int main()
{

    cin >> n;
    initcase();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }
    cin >> start;
    bfs(start);

    return 0;
}