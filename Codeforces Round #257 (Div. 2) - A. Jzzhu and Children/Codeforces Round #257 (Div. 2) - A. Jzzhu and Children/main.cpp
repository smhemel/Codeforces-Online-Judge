//
//  main.cpp
//  Codeforces Round #257 (Div. 2) - A. Jzzhu and Children
//
//  Created by S M HEMEL on 2/16/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
queue<int> q;
int main()
{
    int n,m,a[101];
    cin >> n >> m;
    for (int i=0; i<n; i++){
        cin >> a[i];
        q.push(i);
    }
    while (q.size()>1)
    {
        int p = q.front();
        q.pop();
        if(a[p]>m)
        {
            a[p] -= m;
            q.push(p);
        }
    }
    cout << q.front()+1 <<endl;
        
    return 0;
}
