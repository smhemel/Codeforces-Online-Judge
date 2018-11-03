//
//  main.cpp
//  Codeforces Round #461 (Div. 2) - C. Cave Painting
//
//  Created by S M HEMEL on 8/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#define ll long long int
using namespace std;
bool mark[10000000];
int main(){
    ll n,m;
    cin >> n >> m;
    for(ll i=1; i<=m; i++){
        if(mark[n%i]) return 0 * puts("No");
        else mark[n%i] = 1;
    }
    puts("Yes");
    return 0;
}
