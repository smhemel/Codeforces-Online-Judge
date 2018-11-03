//
//  main.cpp
//  Helvetic Coding Contest 2018 - B1. Maximum Control (easy)
//
//  Created by S M HEMEL on 14/4/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int cnt[1011],ans;
int main() {
    int n;
    cin >> n;
    for(int i=1; i<n; i++){
        int x,y;
        cin >> x >> y;
        cnt[x]++;
        cnt[y]++;
    }
    for(int i=1; i<=1000; i++){
        if(cnt[i]==1)
            ans++;
    }
    cout << ans << endl;
    return 0;
}
