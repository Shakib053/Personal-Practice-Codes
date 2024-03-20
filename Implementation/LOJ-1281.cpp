#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include<algorithm>
using namespace std;

int roadLimit;

struct node
{
    int id;
    int dis;
    bool isProposed;
    node(int _id, int _dis, bool _is)
    {
        id = _id;
        dis = _dis;
        isProposed = _is;
    }
};

struct city
{
    int id;
    int dis;
    int roadUsed;
    city(int _id, int _dis, int _s)
    {
        id = _id;
        dis = _dis;
        roadUsed = _s;
    }
    bool friend operator<(city a, city b)
    {
        return a.dis > b.dis;
    }
};

vector<vector<node> > graph;

int solve(int n, int d)
{
    int distance[d + 1][n];
    priority_queue<city> pq;
    pq.push(city(0, 0, 0));

    for (int i = 0; i < d + 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            distance[i][j] = INT_MAX;
        }
    }

    distance[0][0] = 0;
    while (!pq.empty())
    {
        city top = pq.top();
        pq.pop();
        int u = top.id;
        int cost = top.dis;
        int usedSoFar = top.roadUsed;
        if(u == n-1) return top.dis;

        for (int i = 0; i < graph[u].size(); i++)
        {
            int v = graph[u][i].id;
            int temp = 0;
            if (graph[u][i].isProposed)
            {
                temp = 1;
            }
            int used = usedSoFar + temp;

            if (distance[usedSoFar][v] > cost + graph[u][i].dis && used <= roadLimit)
            {
                distance[usedSoFar][v] = cost + graph[u][i].dis;
                pq.push(city(v, distance[usedSoFar][v], used));
            }
        }
    }

    int maxi = INT_MAX;
    for (int i = 0; i < d + 1; i++)
    {   
        maxi = min(maxi,distance[i][n-1]);
    }
    return maxi;
}

int main()
{
    int t;
    cin >> t;
    int tc=1;
    while (t--)
    {
        int n, m, k, d;
        cin >> n >> m >> k >> d;

        roadLimit = d;
        graph.clear();
        graph.resize(n);

        for (int i = 0; i < m; i++)
        {
            int u, v, w;
            cin >> u >> v >> w;
            graph[u].push_back(node(v, w, false));
        }

        for (int i = 0; i < k; i++)
        {
            int u, v, w;
            cin >> u >> v >> w;
            graph[u].push_back(node(v, w, true));
        }
        int res = solve(n,d);

        if(res == INT_MAX){
            res = -1;
        }

        if(res != -1) cout<<"Case "<<tc<<": "<<res<<endl;
        else cout<<"Case "<<tc<<": "<<"Impossible"<<endl;
        tc++;
    }

    return 0;
}