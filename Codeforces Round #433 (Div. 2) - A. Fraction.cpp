//
//  main.cpp
//  Codeforces Round #433 (Div. 2) - A. Fraction
//
//  Created by S M HEMEL on 10/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = (int)n/2;
    int b = (int)n/2+(n%2);
    while(true){
        if(__gcd(a,b)==1)
            return 0 * printf("%d %d\n",a,b);
        static_cast<void>(a--),b++;
    }
    return 0;
}
