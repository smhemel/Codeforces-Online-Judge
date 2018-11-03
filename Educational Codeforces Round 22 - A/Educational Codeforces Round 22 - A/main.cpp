 //
//  main.cpp
//  Educational Codeforces Round 22 - A
//
//  Created by S M HEMEL on 6/5/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;
int a[1111];
bool c[100011];
int main()
{
    int n,x,y = 0,sum = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum += a[i];
    }
    //sort(a,a+n,greater<int>());
    int m;
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> x >> y;
        if(sum<=y)
            break;
    }
    if(sum<=y)
        printf("%d\n",max(sum,x));
    else
        puts("-1");
    return 0;
}
