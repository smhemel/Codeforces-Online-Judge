//
//  main.cpp
//  Codeforces Beta Round #90 - A. Epic Game
//
//  Created by S M HEMEL on 4/14/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int a[100000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m,k;
    cin >> n >> m >> k;
    while(true){
        int temp = __gcd(n,k);
        k -= temp;
        if(k<=0)
            return 0 * puts("0");
        temp = __gcd(m,k);
        k -= temp;
        if(k<=0)
            return 0 * puts("1");
    }
    return 0;
}
