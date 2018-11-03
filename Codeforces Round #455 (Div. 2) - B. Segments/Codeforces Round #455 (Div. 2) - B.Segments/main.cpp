//
//  main.cpp
//  Codeforces Round #455 (Div. 2) - B.Segments
//
//  Created by S M HEMEL on 7/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;
int main(){
    ll n;
    cin >> n;
    ll ans = n;
    while(n>2){
        ans += (n-2);
        n-=2;
    }
    cout << ans << endl;
    return 0;
}
