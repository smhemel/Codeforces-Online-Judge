//
//  main.cpp
//  Codeforces Round #549 (Div. 2) - B
//
//  Created by S M HEMEL on 31/3/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
#define ll long long int
ll sumOfDigits(ll a)
{
    ll sum = 1;
    while (a) {
        sum *= a % 10;
        a /= 10;
    }
    return sum;
}

ll findMax(ll x)
{
    ll b = 1, ans = x;
    while (x)
    {
        
        ll cur = (x - 1) * b + (b - 1);
        if (sumOfDigits(cur) > sumOfDigits(ans) ||
            (sumOfDigits(cur) == sumOfDigits(ans) &&
             cur > ans))
            ans = cur;
        
        x /= 10;
        b *= 10;
    }
    
    return ans;
}

int main()
{
    ll n;
    cin >> n;
    cout << sumOfDigits(findMax(n)) << endl;
    return 0;
}
