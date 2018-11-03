//
//  main.cpp
//  AIM Tech Round 5 (Div. 1 + Div. 2) - B
//
//  Created by S M HEMEL on 27/8/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#define ll long long int
using namespace std;
int main() {
    ll n,m;
    cin >> n >> m;
    string a="",b="";
    for(int i=0; i<=200; i++)
        a += "18";
    for(int i=0; i<=200; i++)
        b += "81";
    a += '9';
    b += '1';
    cout << a << endl << b << endl;
    return 0;
}
