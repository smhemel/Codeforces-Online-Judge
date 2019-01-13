//
//  main.cpp
//  Educational Codeforces Round 58 -  A. Minimum Integer
//
//  Created by S M HEMEL on 11/1/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <iostream>
#define ll long long int
using namespace std;
int main(int argc, const char * argv[]) {
    ll a,b,c,n;
    cin >> n;
    while (n--) {
        cin >> a >> b >> c;
        printf("%lld\n",a>c?c:b/c*c+c);
    }
    return 0;
}
