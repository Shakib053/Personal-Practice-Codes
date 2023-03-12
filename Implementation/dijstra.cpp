#include <iostream>
#include <queue>
#include <vector>
using namespace std;
struct node
{
    int u;
    long long cost;
    node(int _u, long long _cost)
    {
        u = _u;
        cost = _cost;
    }
    bool friend operator<(node a, node b)
    {
        return a.cost > b.cost;
    }
};

void dijkstra(vector<int> g[], vector<long long> cost[], int n, int source)
{
    priority_queue<node> pq;
    long long distance[n + 1];

    for (int i = 0; i <= n; i++)
    {
        distance[i] = 1e18;
    }
    distance[source] = 0;
    pq.push({source, 0});

    while (!pq.empty())
    {
        node top = pq.top();
        int u = top.u;
        pq.pop();
        for (int i = 0; i < g[u].size(); i++)
        {
            int v = g[u][i];
            if (distance[v] > distance[u] + cost[u][i])
            {
                distance[v] = distance[u] + cost[u][i];
                pq.push({v, distance[v]});
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << source << " " << i << " " << distance[i] << endl;
    }
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<long long> cost[10000];
        vector<int> graph[10000];
        int nodes, edges;
        cin >> nodes >> edges;
        for (int i = 0; i < edges; i++)
        {
            int u, v, w;
            cin >> u >> v >> w;
            graph[u].push_back(v);
            graph[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);
        }
        dijkstra(graph, cost, nodes, 1);
    }

    return 0;
}