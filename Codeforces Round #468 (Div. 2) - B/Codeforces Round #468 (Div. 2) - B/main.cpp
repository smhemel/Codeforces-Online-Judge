//
//  main.cpp
//  Codeforces Round #468 (Div. 2) - B
//
//  Created by S M HEMEL on 4/3/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#define ll long long int
using namespace std;
int n,a,b;
int ans = -1;
void dfs(int l,int r, int dep){
    if(l==r){
        if(ans==0) puts("Final!");
        else cout << dep-ans << endl; exit(0);
    }
    int mid = (l+r)>>1;
    if(ans==-1) if(a<=mid && b>mid) ans = dep;
    if(ans>-1) dfs(l,mid,dep+1);
    else if(b<=mid) dfs(l,mid,dep+1);
    else if(a>mid) dfs(mid+1,r,dep+1);
}
int main() {
    cin >> n >> a >> b;
    if(a>b) swap(a,b);
    dfs(1,n,0);
    return 0;
}

