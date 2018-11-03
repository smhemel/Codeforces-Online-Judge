//
//  main.cpp
//  Codeforces Round #461 (Div. 2) - A
//
//  Created by S M HEMEL on 7/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdio>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    if(m==0 || (m==1 && n>0) ) return 0 * puts("NO");
    int ans = 0;
    ans = ans + m-1;
    if((n-ans)%2==0 && n-ans>=0) puts("YES");
    else puts("NO");
    return 0;
}









