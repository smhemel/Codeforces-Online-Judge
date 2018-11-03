//
//  main.cpp
//  Educational Codeforces Round 24 - A. Diplomas and Certificates
//
//  Created by S M HEMEL on 11/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#define ll long long int
using namespace std;
int main(){
    ll n,m;
    cin >> n >> m;
    ll div = n/2/(m+1);
    cout << div <<" "<<div*m << " " << n-(div*(m+1)) << endl;

    return 0;
}
