//
//  main.cpp
//  Codeforces Round #456 (Div. 2) - B
//
//  Created by S M HEMEL on 5/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#define ll long long int
using namespace std;
int main(){
    ll n, k,ans=0;
    cin >> n >> k;
    for(int i=62; i>=0; i--)
        if(1LL<<i&n){
            ans = i;
            break;
        }
    if(k>1)
        cout << (1LL<<(ans+1))-1 << endl;
    else
        cout << n << endl;
    return 0;
}
