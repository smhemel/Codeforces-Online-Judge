//
//  main.cpp
//  Codeforces Round #172 (Div. 2) - E. Game on Tree
//
//  Created by S M HEMEL on 3/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <queue>
#include <vector>
using namespace std;
vector<int>v[100111];
double level[111111];
int mark[111111];
void dfs(){
    queue<int>q;
    q.push(1);
    level[1] = 1;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        mark[u] = 1;
        for(auto x: v[u]){
            if(!mark[x]){
                q.push(x);
                level[x] = level[u]+1;
            }
        }
    }
}
int main(){
    int n,x,y;
    cin >> n;
    for(int i=1; i<n; i++){
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs();
    double ans = 0.0,v = 1.0;
    for(int i=1; i<=n; i++)
        ans += v/level[i];
    printf("%.10lf\n",ans);
    return 0;
}
