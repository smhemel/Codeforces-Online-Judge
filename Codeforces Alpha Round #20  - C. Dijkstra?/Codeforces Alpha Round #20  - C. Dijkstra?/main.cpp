//
//  main.cpp
//  Codeforces Alpha Round #20  - C. Dijkstra?
//
//  Created by S M HEMEL on 5/20/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <utility>
#include <cstdio>
#define M 100010
#define INF 1<<20
using namespace std;
template <typename T>
void read(T &x)
{
    char c;
    bool t = false;
    for(c=getchar(); (c<'0'||c>'9') && c!='-'; c=getchar());
    if(c=='-'){c = getchar();t = true;
    } x = c-'0';
    for(c=getchar(); c>='0'&&c<='9'; c=getchar())
        x=x*10+c-'0';
    if(t) x=-x;
}
struct cmp{
    bool operator()(const pair <int,int> &a, const pair <int,int> &b){
        return a.second>b.second;
    }
};
vector < pair<int,int> > v[M];
priority_queue<pair<int, int> , vector<pair<int,int> >,cmp > Q;
vector <int> store[M];
int dis[M];
bool mark[M];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,w,x,y,hight = INF;
    read(n),read(m);
    for(int i=0; i<m; i++){
        read(x),read(y),read(w);
        v[x].push_back(make_pair(y,w));
        //v[y].push_back(make_pair(x,w));
    }
    for(int i=1; i<=n; dis[i] = INF,i++);
    int u = 0;
    dis[1] = 0;
    Q.push(make_pair(1,0));
    while (!Q.empty())
    {
        u = Q.top().first;
        Q.pop();
        if(mark[u])
            continue;
        for(auto node: v[u])
        {
            x = node.first;
            w = node.second;
            if(!mark[x] && dis[u]+w<dis[x]){
                dis[x] = dis[u]+w;
                Q.push(make_pair(x,dis[x]));
                store[x].push_back(u);
                cout << x<<"= ";
                for(auto i : store[u])
                    store[x].push_back(i);
                for(auto i : store[x])
                    cout << i << " ";
                cout << endl;
            }
        }
        mark[u] = 1;
    }
    if(dis[n]==INF)
        return 0 * puts("-1");
    for(auto i : store[n])
        cout << i << " ";
    puts("");
    return 0;
}
