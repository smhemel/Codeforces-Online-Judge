//
//  main.cpp
//  Codeforces Round #482 (Div. 2) - C
//
//  Created by S M HEMEL on 14/5/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
using namespace std;
vector<int> v[311111];
bool mark[311111];
int ans = 0;
int n,x,y,u,u1;
int cnt;
void dfs(int i) {
    mark[i]=1;
    cnt++;
    int len = (int) v[i].size();
    for (int l=0; l<len; l++) {
        if(mark[v[i][l]]) continue;
        dfs(v[i][l]);
    }
}
int main() {
    cin >> n >> x >> y;
    for(int i=0; i<n-1; i++){
        cin >> u >> u1;
        v[u].push_back(u1);
        v[u1].push_back(u);
    }
    for(int i=1; i<n; i++){
        if(v[i].size()==0|| mark[i]) continue;
        cnt = 0;
        dfs(i);
        if(cnt==1) ans+= 2;
        else ans += (((cnt+1)*cnt)/2)-1;
    }
    cout << ans << endl;
    return 0;
}
