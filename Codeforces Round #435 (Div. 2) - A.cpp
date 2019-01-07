//
//  main.cpp
//  Codeforces Round #435 (Div. 2) - A
//
//  Created by S M HEMEL on 19/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
#include <vector>
using namespace std;
int a[111];
int m[111];
int main(){
    int n,x,cnt = 0;
    cin >> n >> x;
    for(int i=0; i<n; i++){
        cin >> a[i];
        m[a[i]] = 1;
    }
    for(int i=0; i<x; i++)
        if(!m[i])
            cnt++;
    if(m[x])
        cnt++;
    cout << cnt << endl;
    return 0;
}
