//
//  main.cpp
//  Codeforces Round #142 (Div. 2) - A. Dragons
//
//  Created by S M HEMEL on 4/16/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    vector < pair<int,int> > v;
    for(int i=0; i<m; i++)
    {
        int x,y;
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    for(int i=0; i<m; i++)
    {
        if(n>v[i].first)
            n+=v[i].second;
        else
            return 0 * puts("NO");
    }
    puts("YES");
    return 0;
}
