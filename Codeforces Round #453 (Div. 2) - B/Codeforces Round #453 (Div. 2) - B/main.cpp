//
//  main.cpp
//  Codeforces Round #453 (Div. 2) - B
//
//  Created by S M HEMEL on 19/12/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int e[11111],color[11111];
int mark[11111];
vector<int> v[11111];
int cnt = 1;
void dfs(int root, int p){
    mark[root] = color[root];
    if(mark[root]!=mark[p]) cnt++;
    for(auto u: v[root]){
        if(!mark[u])
            dfs(u,root);
    }
}
int main(){
    int n,c=2;
    cin >> n;
    for(int i=1; i<n; i++) {
        cin >> e[i];
        v[e[i]].push_back(c);
        c++;
    }
    for(int i=1; i<=n; i++) cin >> color[i];
    dfs(1,1);
    cout << cnt << endl;
    return 0;
}
