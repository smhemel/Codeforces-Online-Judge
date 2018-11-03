//
//  main.cpp
//  Zepto Code Rush 2014 - A. Feed with Candy
//
//  Created by S M HEMEL on 3/27/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;
const int N = 123456;
vector < pair <int, int> > a[2];
bool b[2][N];
int sz[2];
int main()
{
    int n, x;
    scanf("%d %d", &n, &x);
    for(int i=0; i<n; i++) {
        int t,h,m;
        scanf("%d %d %d", &t, &h, &m);
        a[t].push_back(make_pair(h, m));
    }
    int ret = 0;
    for(int start=0; start<2; start++) {
        for (int t = 0; t < 2; t++) {
            sz[t] = (int) a[t].size();
            for(int i=0; i<sz[t]; i++)
                b[t][i] = true;
        }
        int t = start;
        int ans = 0;
        int jump = x;
        while (true)
        {
            int mx = -1, km = -1;
            for (int i = 0; i < sz[t]; i++)
                if (b[t][i] && a[t][i].first <= jump && a[t][i].second > mx) {
                        mx = a[t][i].second;
                        km = i;
                    }
            if(km == -1)
                break;
            b[t][km] = false;
            jump += mx;
            ans++;
            t = 1 - t;
        }
        if (ans > ret) {
            ret = ans;
        }
    }
    printf("%d\n", ret);
    return 0;
}
