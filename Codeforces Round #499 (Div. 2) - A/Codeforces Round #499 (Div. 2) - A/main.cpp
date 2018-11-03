//
//  main.cpp
//  Codeforces Round #499 (Div. 2) - A
//
//  Created by S M HEMEL on 26/7/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#define ll long long int
using namespace std;
map <ll,ll> M;
ll ar[211111];
string s;
int main() {
    int n, k1,k;
    cin >> n >> k1;
    cin >> s;
    sort(s.begin(),s.end());
    int cnt = 0;
    int c = 0;
    k = k1;
    for(int i=0; i<n; i++){
        if(k==0) break;
        if(c==abs(96-s[i]) || (c-1)==abs(96-s[i])) {
            continue;
        }
        c = 0;
        c = abs(96-s[i]);
        cnt += c;
        c++;
        k--;
    }
    if(k<=0) cout << cnt << endl;
    else puts("-1");
    return 0;
}








