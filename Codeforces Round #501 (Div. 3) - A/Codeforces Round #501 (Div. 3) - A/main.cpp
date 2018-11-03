//
//  main.cpp
//  Codeforces Round #501 (Div. 3) - A
//
//  Created by S M HEMEL on 23/8/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
vector<int>v;
int ar[11111];
int main() {
    int n,m,x,y;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        for(int j=x; j<=y; j++) ar[j] = 1;
    }
    int cnt = 0;
    for(int i=1; i<=m; i++)
        if(!ar[i]){
            cnt++;
            v.push_back(i);
        }
    cout << cnt << endl;
    for(auto u: v) cout << u << " ";
    return 0;
}
