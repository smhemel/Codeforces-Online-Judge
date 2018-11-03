//
//  main.cpp
//  Codeforces Round #272 (Div. 2) - B. Dreamoon and WiFi
//
//  Created by S M HEMEL on 9/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
long long c[15][15];
int main() {
    for(int i=0; i<=10; i++){
        c[i][0] = 1;
        for(int j=1; j<=i; j++)
            c[i][j] = c[i-1][j] + c[i-1][j-1];
    }
    string s, s1;
    cin >> s >> s1;
    int p = 0,q = 0;
    for(int i=0; s[i]; i++) p += (s[i] == '+');
    for(int i=0; s1[i]; i++) {
        p -= (s1[i] == '+');
        q += (s1[i] == '?');
    }
    cout.precision(10);
    if(p < 0) cout << fixed << double(0) << endl;
    else cout << fixed << ((double)c[q][p] / (1 << q)) << endl;
    return 0;
}
