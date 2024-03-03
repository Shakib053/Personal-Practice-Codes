//
//  main.cpp
//  Not the best
//
//  Created by Kazi Tanjim Shakib on 19/2/24.
//

#include <iostream>
#include <queue>
#include <vector>
#include <set>
using namespace std;
int cities;
struct node {
    int id;
    int dis;
    bool friend operator <(node a,node b){
        return a.dis>b.dis;
    }
};

int dijstra(vector<int>g[],vector<int>cost[],int n){
    priority_queue<node>pq;
    vector<int>vis(n+1,0);
    
    pq.push({1,0});
    
    set<int>distance;
    
    if(n==1) distance.insert(0);
    
    while (!pq.empty()) {
        auto top = pq.top();
        pq.pop();
        
        int u = top.id;
        int cst = top.dis;
        
        vis[u]++;
        if(vis[u] > 2) continue;
        
        for(int i=0;i<g[u].size();i++){
            int v = g[u][i];
            
            if(vis[v] < 2){
                pq.push({v,cst+cost[u][i]});
            }
            
            if(v == n) {
                distance.insert(cst+cost[u][i]);
            }
        }
    }
    auto it = distance.begin();
    it++;
    return *it;
}

int main() {
    int t;
    cin>>t;
    int cnt = 1;
    while (t--) {
        int n,r;
        cin>>n>>r;
        cities = n;
        vector<int>grid[5005];
        vector<int>cost[5005];
        
        for(int i=0;i<r;i++){
            int a,b,c;
            cin>>a>>b>>c;
            grid[a].push_back(b);
            grid[b].push_back(a);
            cost[a].push_back(c);
            cost[b].push_back(c);
        }
        
        int ans = dijstra(grid, cost,n);
        cout<<"Case "<<cnt<<": "<<ans<<endl;
        cnt++;
    }
    
    
    return 0;
}
