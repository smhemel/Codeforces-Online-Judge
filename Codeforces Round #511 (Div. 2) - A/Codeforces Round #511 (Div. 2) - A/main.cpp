//
//  main.cpp
//  Codeforces Round #511 (Div. 2) - A
//
//  Created by S M HEMEL on 21/9/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <map>
#include <vector>
#include <cstdio>
#include <set>
#define ll long long int
using namespace std;
int main() {
    ll n;
    cin >> n;
    int a = 1;
    int b = 1;
    n -= 2;
    if(n%3==0){
        b++;
        n--;
    }
    cout << a << " " << b << " " << n << endl;
    return 0;
}
