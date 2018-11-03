//
//  main.cpp
//  RookieRank 3 - Maximal Tourism
//
//  Created by S M HEMEL on 5/7/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;
bool check[110000];
vector<int> v[110000];
int Max = 0;
void dfs(int n,int cnt)
{
    queue<int> q;
    q.push(n);
    while(!q.empty())
    {
        int temp = q.front();
        check[temp] = 1;
        q.pop();
        for(auto u : v[temp]){
            if(check[u]==0){
                q.push(u);
                cnt++;
                check[u] = 1;
            }
        }
    }
    if(Max<cnt)
        Max = cnt;
}
int main()
{
    set <int> s;
    int n,m;
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        int x,y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
        s.insert(x);
    }
    for(auto u : s)
        if(!check[u]){
            dfs(u,1);
        }
    cout << Max << endl;
    return 0;
}
