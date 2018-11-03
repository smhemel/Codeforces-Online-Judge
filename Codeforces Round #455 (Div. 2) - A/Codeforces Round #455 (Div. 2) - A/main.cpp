//
//  main.cpp
//  Codeforces Round #455 (Div. 2) - A
//
//  Created by S M HEMEL on 27/12/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <string>
#define ll long long int
using namespace std;
ll store[111];
int main(){
    store[1] = 1;
    store[2] = 2;
    store[3] = 4;
    store[4] = 6;
    for(int i=5; i<101; i++){
        store[i] = store[i-1]+2;
    }
    ll n;
    cin >> n;
    cout << store[n] << endl;
    return 0;
}
