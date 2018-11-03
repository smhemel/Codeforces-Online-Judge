//
//  main.cpp
//  Educational Codeforces Round 40 - D. Fight Against Traffic
//
//  Created by S M HEMEL on 31/3/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>
#include <queue>
#define N 1111
using namespace std;
vector<int>graph[N];
int s_dis[N], t_dis[N];
bool mark[N][N];
void bfs(int dis[], int start)
{
    queue<int>Q;
    Q.push(start);
    while(!Q.empty()){
        int now = Q.front();
        Q.pop();
        for(auto u : graph[now]){
            if(u!=start && !dis[u]){
                dis[u] = dis[now]+1;
                Q.push(u);
            }
        }
    }
}

int main()
{
    int n, m, s, t, u, v, Min_dis, ans=0;
    cin >> n >> m >> s >> t;
    for(int i=0; i<m; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
        static_cast<void>(mark[u][v] = 1),mark[v][u] = 1;
    }
    bfs(s_dis, s);
    Min_dis = s_dis[t];
    bfs(t_dis, t);
    for(int i=1; i<=n; i++)
        for(int j=i+1; j<=n; j++)
            if(!mark[i][j] && (s_dis[i]+t_dis[j]+1)>=Min_dis && (s_dis[j]+t_dis[i]+1)>=Min_dis)
                ans++;
    printf("%d\n", ans);
    return 0;
}
