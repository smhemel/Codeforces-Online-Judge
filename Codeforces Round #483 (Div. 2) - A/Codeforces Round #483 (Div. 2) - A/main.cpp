//
//  main.cpp
//  Codeforces Round #483 (Div. 2) - A
//
//  Created by S M HEMEL on 15/5/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <utility>
#define ll long long int
using namespace std;
string s;
ll ar[211111];
int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; cin >> ar[i],i++);
    sort(ar,ar+n);
    if(n%2==0)
    {
        cout << ar[(n-1)/2] << endl;
    }
    else
        cout << ar[n/2] << endl;
        return 0;
}
