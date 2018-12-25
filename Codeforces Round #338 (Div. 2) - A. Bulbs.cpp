//
//  main.cpp
//  Codeforces Round #338 (Div. 2) - A. Bulbs
//
//  Created by S M HEMEL on 1/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int ar[1000];
int main()
{
    int n,m,x,z,cnt = 0;
    cin >> n >> m;
    while(n--){
        cin >> x;
        while(x--){
            cin >> z;
            if(z<=m && !ar[z]){
                cnt++;
                ar[z] = 1;
            }
        }
    }
    if(cnt==m)
        puts("YES");
    else
        puts("NO");
    return 0;
}
