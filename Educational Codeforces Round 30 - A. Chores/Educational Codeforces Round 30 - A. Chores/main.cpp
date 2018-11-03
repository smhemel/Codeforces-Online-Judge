//
//  main.cpp
//  Educational Codeforces Round 30 - A. Chores
//
//  Created by S M HEMEL on 21/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int a[1111];
int main(){
    int n,k,x;
    cin >> n >> k >> x;
    for(int i=0; i<n; cin >> a[i],i++);
    sort(a,a+n);
    int ans = k*x;
    for(int i=0; i<n-k; i++)
        ans += a[i];
    cout << ans << endl;
    return 0;
}
