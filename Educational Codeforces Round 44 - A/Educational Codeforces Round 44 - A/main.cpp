//
//  main.cpp
//  Educational Codeforces Round 44 - A
//
//  Created by S M HEMEL on 21/5/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <vector>
#include <utility>
#include <map>
#include <string>
#define ll long long int
using namespace std;
int ar[211111];
int main() {
    int n;
    cin >> n;
    for(int i=0; i<n/2; i++)
        cin >> ar[i];
    sort(ar,ar+(n/2));
    int a = 0, b = 0;
    for(int i=0; i<n/2; i++){
        a += abs(ar[i] - (2*i+1));
        b += abs(ar[i] - (2*i+2));
    }
    cout << min(a, b) << endl;
    return 0;
}
