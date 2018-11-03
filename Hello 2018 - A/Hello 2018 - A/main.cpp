//
//  main.cpp
//  Hello 2018 - A
//
//  Created by S M HEMEL on 8/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#define ll long long int
using namespace std;
string s;
int main(){
    ll n,m,ans=1;
    cin >> n >> m;
    ll i=0;
    while (i<n && ans<=m) {
        ans*= 2;
        ++i;
    }
    cout << m%ans << endl;
    return 0;
}








