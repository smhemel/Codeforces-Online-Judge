//
//  main.cpp
//  Educational Codeforces Round 51 - B
//
//  Created by S M HEMEL on 20/9/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long long l, r;
    scanf("%lld %lld", &l, &r);
    printf("YES\n");
    for(long long i = l; i <= r; i += 2) {
        printf("%lld %lld\n", i, i+1);
    }
    return 0;
}
