//
//  main.cpp
//  Codeforces Round #383 (Div. 2) - A. Arpa’s hard exam and Mehrdad’s naive cheat
//
//  Created by S M HEMEL on 5/9/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#define ll long long int
using namespace std;
int modpow(ll b,ll p){
    int ans = 1;
    while(p>0)
    {
        ans = ((ans*b*(p&1)) + (ans*((p&1)==0)))%10;
        b = (b*b)%10;
        p >>= 1;
    }
    return ans;
}
int main()
{
    ll n;
    cin >> n;
    if(n==1)
        return 0 * puts("8");
    cout << modpow(1378,n) << endl;
    return 0;
}
