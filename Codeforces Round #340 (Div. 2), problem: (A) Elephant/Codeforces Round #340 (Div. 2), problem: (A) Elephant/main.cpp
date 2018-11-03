//
//  main.cpp
//  Codeforces Round #340 (Div. 2), problem: (A) Elephant
//
//  Created by S M HEMEL on 1/2/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int x;
    while(~scanf("%d", &x))
    {
        int ans = (x + 4) / 5;
        printf("%d\n", ans);
    }
    return 0;
}
