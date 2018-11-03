//
//  main.cpp
//  Codeforces Round #441 (Div. 2) - C
//
//  Created by S M HEMEL on 16/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <utility>
#include <map>
using namespace std;
vector<int>v;
int n;
void solve(int i){
    int x = i;
    int z = i;
    while(i>0) {
        x += (i%10);
        i /= 10;
    }
    if(n==x){
        v.push_back(z);
    }
}
int main(){
    int m = 0;
    cin >> n;
    m = max(0,n-250);
    for(int i=n; i>m; i--){
        solve(i);
    }
    reverse(v.begin(), v.end());
    cout << v.size() << endl;
    for(auto u: v)
        cout << u << endl;
    return 0;
}
