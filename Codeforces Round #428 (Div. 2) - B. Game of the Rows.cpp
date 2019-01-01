//
//  main.cpp
//  Codeforces Round #428 (Div. 2) - B. Game of the Rows
//
//  Created by S M HEMEL on 12/8/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define N 111111
using namespace std;
vector <int> g[N];
int a[N];
bool visit[N];
int dis[N];
queue <int> q;
void bfs(int start)
{
    visit[start] = 1;
    dis[start] = 0;
    q.push(start);
    while (!q.empty())
    {
        int start = q.front();
        q.pop();
        for(auto i: g[start])
        {
            if(visit[i]) continue;
            visit[i] = 1;
            dis[i] = dis[start] + 1;
            q.push(i);
        }
    }
}
int store[N];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<n; i++){
        int u,v;
        scanf("%d%d",&u,&v);
        a[u] = 2;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    double sum = 0.0;
    bfs(1);
    int k = 0;
    for(int i=1; i<=n; i++){
        if(a[i]==0){
            store[k++] = dis[i];
            sum += dis[i];
        }
    }
    //sort(store,store+k,greater<int>());
    sum = sum/k;
    printf("%.15lf\n",sum);
    return 0;
}
