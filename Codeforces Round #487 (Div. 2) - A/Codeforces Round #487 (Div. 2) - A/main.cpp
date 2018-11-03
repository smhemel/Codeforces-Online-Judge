//
//  main.cpp
//  Codeforces Round #487 (Div. 2) - A
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
    cin >> s;
    int len = s.length();
    for(int i=0; i<len-2; i++){
        if((s[i]=='A' && s[i+1]=='B' && s[i+2]=='C')||(s[i]=='A' && s[i+1]=='C' && s[i+2]=='B') || (s[i]=='C' && s[i+1]=='B' && s[i+2]=='A') || (s[i]=='C' && s[i+1]=='A' && s[i+2]=='B') || (s[i]=='B' && s[i+1]=='A' && s[i+2]=='C') || (s[i]=='B' && s[i+1]=='C' && s[i+2]=='A'))
            return 0 * puts("YES");
    }
    puts("NO");
    return 0;
}
