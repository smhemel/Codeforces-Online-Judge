//
//  main.cpp
//  Manthan, Codefest 18 (rated, Div. 1 + Div. 2) - A
//
//  Created by S M HEMEL on 2/9/18.
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
map<ll, ll>M;
vector<ll> v;
int main() {
    ll n;
    cin >> n;
    if(n==2 || n==1){
        cout << n << endl;
        return 0;
    }
    if(n%2==0){
        cout << n/2 << endl;
    }
    else{
        cout << n/2+(n%2) << endl;
    }
    
    return 0;
}
