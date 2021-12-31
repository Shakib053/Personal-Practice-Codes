#include <iostream>
using namespace std;
int visited[1000];
int grid[1000][1000];
int queue[1000];
int front = 0, rear = 0;
int n;
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
int main()
{

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        enqueue(x);
    }
    displayQueue();
    if (dequeue() == 0)
        cout << "Queue is empty\n";
    else
        cout << dequeue() << endl;
    displayQueue();
    return 0;
}