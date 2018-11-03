//
//  main.cpp
//  Codeforces Round #408 (Div. 2) - A
//
//  Created by S M HEMEL on 4/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <utility>
#include <cstdio>
#include <cmath>
using namespace std;
string s;
int a[1000];
int main()
{
    int n,m,k,t=0;
    int x = 99999999;
    cin >> n >> m >> k;
    for(int i=1; i<=n; cin >> a[i],i++);
    for(int i=1; i<=n; i++)
    {
        
        if(a[i]<=k && i!=m && a[i]!=0)
        {
            t = abs((m-i))*10;
            x = min(x,t);
        }
    }
    cout << x << endl;
    return 0;
}
