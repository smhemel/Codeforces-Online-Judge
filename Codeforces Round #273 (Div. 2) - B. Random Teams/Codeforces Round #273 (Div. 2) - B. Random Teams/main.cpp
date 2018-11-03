//
//  main.cpp
//  Codeforces Round #273 (Div. 2) - B. Random Teams
//
//  Created by S M HEMEL on 3/23/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//


#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#define ll long long int
using namespace std;
int main(){
    ll a,b;
    cin >> a >> b;
    if(a==b)
        return 0 * puts("0 0");
    ll Max = ((a-b)*((a-b)+1))/2;
    ll div = a/b;
    ll rem = a%b;
    ll Min = 0;
    if(rem>0){
        ll x = ((div)*(div+1))/2;
        Min += (x*rem);
    }
    b = b-rem;
    Min += ((((div-1)*(div))/2)*b);
    cout << Min << " " << Max << endl;
    return 0;
}



