//
//  main.cpp
//  Codeforces Round #484 (Div. 2) - C
//
//  Created by S M HEMEL on 17/5/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
using namespace std;
#define N 100009
vector<int> G[N];
int ans,n;
int dfs(int v,int p){
    int cnt = 1;
    for(auto u: G[v]){
        if(u==p) continue;
        int x = dfs(u,v);
        if((x&1)==0)ans++;
        cnt += x;
    }
    return cnt;
}

int main(){
    cin >> n;
    for(int i=0; i<n-1; i++){
        int u,v;
        scanf("%d %d",&u,&v);
        G[u].push_back(v);
        G[v].push_back(u);
    }
    if(n%2==1) ans = -1;
    else dfs(1,-1);
    
    cout<< ans <<endl;
    return 0;
}
