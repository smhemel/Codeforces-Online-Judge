//
//  main.cpp
//  Codeforces Round #287 (Div. 2) - A. Amr and Music
//
//  Created by S M HEMEL on 4/6/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    vector< pair <int, int> > a(n);
    for(int i=0; i<n; i++)
    {
        int x;
        scanf("%d", &x);
        a[i] = make_pair(x,i+1);
    }
    
    sort(a.begin(), a.end());
    vector <int> v;
    for(int i=0; i<n; i++)
        if(k>=a[i].first) {
            k -= a[i].first;
            v.push_back(a[i].second);
        }
    
    sort(v.begin(), v.end());
    int sz = (int) v.size();
    printf("%d\n", sz);
    for(int i=0; i<sz; i++) {
        if(i>0)
            printf(" ");
        printf("%d", v[i]);
    }
    printf("\n");
    return 0;
}
