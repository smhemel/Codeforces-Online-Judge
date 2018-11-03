//
//  main.cpp
//  Codeforeces Round #491 (Div. 2) - B
//
//  Created by S M HEMEL on 23/6/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <cstring>
#include <vector>
#include <map>
#include <utility>
#define ll long long int
using namespace std;
using namespace std;
int a[2111];
int main(){
    int n,ans = 0;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        ans += a[i];
        
    }
    int tot = ceil(4.5*n);
    sort(a+1,a+n+1);
    int cnt = 0;
    for(int i=1; i<=n; i++){
        if(ans>=tot) break;
        cnt++;
        ans += (5-a[i]);
    }
    cout << cnt << endl;
    return 0;
}

