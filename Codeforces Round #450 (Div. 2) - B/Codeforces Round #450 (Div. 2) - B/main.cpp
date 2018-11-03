//
//  main.cpp
//  Codeforces Round #450 (Div. 2) - B
//
//  Created by S M HEMEL on 12/12/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#define ll long long
using namespace std;
int main ()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll cnt = 0, temp;
    while(cnt<300) {
        cnt++;
        a *= 10;
        temp = a/b;
        if(temp==c) return 0 * printf("%lld\n",cnt);
        a = a - temp*b;
    }
    puts("-1");
    return 0;
}
