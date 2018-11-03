//
//  main.cpp
//  UVA 10940 - Throwing cards away II
//
//  Created by S M HEMEL on 7/9/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
vector<int>v;
void solve(){
    int p = 0;
    int x = pow(2,p),t = 0;
    while(t<=500000){
        int c = 2;
        for(int i=0; i<x; i++){
            v.push_back(c);
            c += 2;
            t++;
        }
        p++;
        x = pow(2,p);
    }
}
int main() {
    int n;
    v.push_back(1);
    solve();
    while(cin >> n && n){
        cout << v[n-1] << endl;
    }
    return 0;
}
