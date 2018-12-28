//
//  main.cpp
//  Codeforces Round #529 (Div. 3) - B
//
//  Created by S M HEMEL on 28/12/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int a[211111];
int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a,a+n);
    if(n==2) cout << 0 << endl;
    else if (n==3) cout << min(a[2] - a[1], a[1] - a[0]) << endl;
    else cout << min(a[n-1] - a[1], a[n-2] - a[0]) << endl;
    return 0;
}
