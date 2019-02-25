//
//  main.cpp
//  Codeforces Round #542 (Div. 2) - B
//
//  Created by S M HEMEL on 25/2/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
int n,last1,last2;
vector<int> v[100100];
int main(){
    cin >> n;
    for(int i=0;i<2*n;i++){
        int x;
        cin >> x;
        v[x].push_back(i);
    }
    long long ans = 0;
    for(int i=1;i<=n;i++){
        ans += abs(v[i][0]-last1)+abs(v[i][1]-last2);
        last1 = v[i][0];
        last2 = v[i][1];
    }
    cout << ans << endl;
    return 0;
}
