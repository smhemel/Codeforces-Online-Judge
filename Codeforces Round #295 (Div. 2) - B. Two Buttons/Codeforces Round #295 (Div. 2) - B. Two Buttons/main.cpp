//
//  main.cpp
//  Codeforces Round #295 (Div. 2) - B. Two Buttons
//
//  Created by S M HEMEL on 3/16/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
#define MAX         10050
int n, m;
int dis[MAX];
int bfs(){
    memset(dis,50,sizeof(dis));
    queue <int> q;
    q.push(n);
    dis[n] = 0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        int v = 2*u;
        if(v<MAX && dis[v] > dis[u]+1){
            dis[v] = dis[u] + 1;
            q.push(v);
        }
        v = u-1;
        if(v >= 0 && dis[v]>dis[u]+1){
            dis[v] = dis[u] + 1;
            q.push(v);
        }
    }
    return dis[m];
}

int main(){
    scanf("%d %d", &n, &m);
    printf("%d\n", bfs());
    return 0;
}
