//
//  main.cpp
//  Codeforces Round #186 (Div. 2) - A. Ilya and Bank Account
//
//  Created by S M HEMEL on 21/7/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long n,ans = 0;
    cin >> n;
    ans =(n/100)*10;
    ans += (n/10)%10>n%10 ?  (n/10)%10 : n%10;
    if(n>=0)
        cout << n << endl;
    else
        cout << ans << endl;
    return 0;
}
