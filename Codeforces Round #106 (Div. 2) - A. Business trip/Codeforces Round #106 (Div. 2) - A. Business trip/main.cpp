//
//  main.cpp
//  Codeforces Round #106 (Div. 2) - A. Business trip
//
//  Created by S M HEMEL on 4/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int a[15];
int main()
{
    int n,cnt = 0,temp = 0;
    cin >> n;
    for(int i=0; i<12; cin >> a[i],i++);
    sort(a,a+12,greater<int>());
    if(n==0)
        return 0 * puts("0");
    for(int i=0; i<12; i++){
        temp += a[i];
        cnt++;
        if(temp>=n)
            return 0 * printf("%d\n",cnt);
    }
    puts("-1");
    return 0;
}
