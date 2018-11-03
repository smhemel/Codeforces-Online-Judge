//
//  main.cpp
//  Codeforces Round #487 (Div. 2) - B
//
//  Created by S M HEMEL on 11/6/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <cstdio>
#define ll long long int
using namespace std;
ll ar[211111];
string s;
int main() {
    ll n,m;
    cin >> n >> m;
    cin >> s;
    if(n==m) return 0 * puts("No");
    int k=0;
    for(int i=0; i<n-m; i++){
        if(s[i]=='.' && s[i+m]=='.'){
            s[i] = '0';
            s[i+m] = '1';
            k = 1;
        }
        if(s[i]=='1' && s[i+m]=='0'){
            k = 1;
        }
        if(s[i]=='0' && s[i+m]=='1'){
            k = 1;
        }
        if(s[i]=='.' && s[i+m]=='1'){
            s[i] = '0';
            k = 1;
        }
        if(s[i]=='.' && s[i+m]=='0'){
            s[i] = '1';
            k = 1;
        }
        if(s[i]=='0' && s[i+m]=='.'){
            s[i+m] = '1';
            k = 1;
        }
        if(s[i]=='1' && s[i+m]=='.'){
            s[i+m] = '0';
            k = 1;
        }
    }
    if(!k) cout << "No" << endl;
    else {
        for(int i=0; i<n; i++){
            if(s[i]=='.') cout << '0';
            else cout << s[i];
        }
        cout << endl;
    }
    return 0;
}

