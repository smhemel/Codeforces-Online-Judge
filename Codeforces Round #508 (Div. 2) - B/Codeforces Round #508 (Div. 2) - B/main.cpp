//
//  main.cpp
//  Codeforces Round #508 (Div. 2) - B
//
//  Created by S M HEMEL on 6/9/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#define ll long long int
using namespace std;
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin >> n;
    if(n<=2)
        return 0 * puts("No");
    cout << "Yes" << endl;
    ll r = n, l = 1LL;
    cout << n-1LL-(1LL-(n%2LL)) << " ";
    for(ll i=0LL; i<(n+1LL)/2LL-1; i++)
        cout << l++ << " " << r-- << " ";
    cout << endl;
    if(n%2LL) cout << 1 << " " << l << endl;
    else cout << 2 << " " << l << " "<< l+1LL << endl;
    return 0;
}
