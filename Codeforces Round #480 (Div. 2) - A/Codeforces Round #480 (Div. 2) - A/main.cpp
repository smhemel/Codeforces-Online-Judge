//
//  main.cpp
//  Codeforces Round #480 (Div. 2) - A
//
//  Created by S M HEMEL on 8/5/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <map>
using namespace std;
string s;
int main() {
    cin >> s;
    int cnt = 0,c = 0;
    bool f  = false;
    for(int i=0; s[i]; i++){
        if(s[i]=='-') cnt++;
        if(s[i]=='o') {
            f = true;
            c++;
        }
    }
    if(!f) return 0 * puts("YES");
    if(cnt%c==0) puts("YES");
    else puts("NO");
    return 0;
}
