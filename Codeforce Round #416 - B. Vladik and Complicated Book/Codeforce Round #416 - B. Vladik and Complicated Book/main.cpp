//
//  main.cpp
//  Codeforces Round #413 - A
//
//  Created by S M HEMEL on 5/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <cstdio>
#include <cstring>
using namespace std;
template <typename T>
void read(T &x)
{
    char c;
    bool t=false;
    for(c=getchar(); (c<'0'||c>'9') && c!='-'; c=getchar());
    if(c=='-'){
        c = getchar();
        t = true;
    } x = c-'0';
    for(c=getchar(); c>='0'&&c<='9'; c=getchar())
        x=x*10+c-'0';
    if(t) x=-x;
}
int a[10010];
int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        read(a[i]);
    }
    while(m--){
        int l, r, x;
        scanf("%d %d %d", &l, &r, &x);
        int cnt = 0;
        for(int i = l; i <= r; i++)
        {
            if(a[i]<a[x]) cnt++;
        }
        if(l+cnt == x)
            puts("Yes");
        else
            puts("No");
    }
    return 0;
}
