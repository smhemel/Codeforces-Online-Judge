//
//  main.cpp
//  Codeforces Round #448 (Div. 2) - A
//
//  Created by S M HEMEL on 26/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <algorithm>
#include <cstdlib>
using namespace std;
int a[1000];
int main(){
    int n,ans = INT_MAX;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        int total = 0;
        for(int l=i; l<n; l++){
            total += a[l];
            ans = min(ans,abs(total-(360-total)));
        }
    }
    cout << ans << endl;
    return 0;
}
