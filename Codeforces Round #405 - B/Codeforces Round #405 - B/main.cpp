//
//  main.cpp
//  Codeforces Round #405 - B
//
//  Created by S M HEMEL on 3/18/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//



#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

#define endl           '\n'
#define LL             long long
#define ULL            unsigned long long
#define all(x)         x.begin(), x.end()

const LL MOD = 1000000007;
const LL LINF = 0x3f3f3f3f3f3f3f3fLL;
const int INF = 0x3f3f3f3f;
const int N = 2e5 + 5;

LL ed, nd;
bool ok, used[N];
vector <int> g[N];

void dfs(int u) {
    nd++, ed += (LL) g[u].size();
    used[u] = 1;
    for (auto v : g[u]) {
        if (!used[v]) dfs(v);
    }
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i++) {
        int u, v;
        scanf("%d%d", &u, &v);
        g[u].push_back(v);
        g[v].push_back(u);
    }
    ok = true;
    for (int i = 1; i <= n; i++) {
        if (!used[i] and ok) {
            nd = 0, ed = 0;
            dfs(i);
            if (ed != nd * (nd - 1)) ok = false;
        }
    }
    puts(ok ? "YES" : "NO");
    return 0;
}




