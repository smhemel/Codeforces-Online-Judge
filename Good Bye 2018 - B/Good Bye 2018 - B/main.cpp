//
//  main.cpp
//  Good Bye 2018 - B
//
//  Created by S M HEMEL on 30/12/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#define ll long long int
using namespace std;
int main() {
    ll n,x,y,total = 0,total1 = 0;
    cin >> n;
    for(ll i=0;i <n; i++){
        cin >> x >> y;
        total += x;
        total1 += y;
    }
    for(ll i=0;i <n; i++){
        cin >> x >> y;
        total += x;
        total1 += y;
    }
    cout << total/n << " " << total1/n << endl;
    return 0;
}
