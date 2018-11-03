//
//  main.cpp
//  Codeforces Round #331 (Div. 2) - B. Wilbur and Array
//
//  Created by S M HEMEL on 3/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int a[211111];
int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; cin >> a[i], i++);
    long long int ans = abs(a[0]);
    for(int i=1; i<n; i++)
        ans += abs(a[i]-a[i-1]);
    cout << ans << endl;
    return 0;
}
