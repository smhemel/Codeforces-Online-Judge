//
//  main.cpp
//  Codeforces Round #494 (Div. 3) - A
//
//  Created by S M HEMEL on 8/7/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int cnt[111];
int main() {
    int n,ans = 0,x;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        cnt[x]++;
        ans = max(cnt[x],ans);
    }
    cout << ans << endl;
    return 0;
}
