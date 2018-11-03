//
//  main.cpp
//  ProgKriya July'18 - A. Concatenation of Perfect Squares
//
//  Created by S M HEMEL on 7/7/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <map>
#include <cmath>
#define ll long long int
using namespace std;
int main() {
    int test;
    cin >> test;
    string s;
    while(test--){
        cin >> s;
        while(true){
            ll n = stoll(s);
            ll div = sqrt(n);
            if(n==(div*div)) break;
        }
    }
    return 0;
}
