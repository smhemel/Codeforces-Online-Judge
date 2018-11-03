//
//  main.cpp
//  Codeforces Round #484 (Div. 2) - B
//
//  Created by S M HEMEL on 17/5/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <vector>
#include <cstdio>
#include <map>
#include <utility>
#include <queue>
#define ll long long int
using namespace std;
pair<int,int> a[211111];
int main()
{
    int n,x;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> x;
        a[i] = make_pair(x,i+1);
    }
    string s;
    cin >> s;
    sort(a,a+n);
    int last_o=0;
    priority_queue<pair<int,int> > Q;
    for(int i=0; i<2*n; i++)
    {
        if(s[i]=='0')
        {
            cout<<a[last_o].second<<" ";
            Q.push(a[last_o]);
            last_o++;
        }
        if(s[i]=='1')
        {
            cout<<Q.top().second<<" ";
            Q.pop();
        }
    }
    return 0;
}

