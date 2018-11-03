//
//  main.cpp
//  Codeforces Round #467 (Div. 2) - C
//
//  Created by S M HEMEL on 26/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#define ll double
using namespace std;
int main(){
    ll n,k,m;
    cin >> n >> k >> m;
    ll ans = n/k;
    ans = ans*(m/n)-((int)m%int(n)==0);
    ans += m;
    cout << m << endl;
    return 0;
}
