//
//  main.cpp
//  Codeforces Round #440 (Div. 2) - C
//
//  Created by S M HEMEL on 15/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        if(n<=3 || n==5 || n==7 || n==11)
            puts("-1");
        else
            printf("%d\n",(int)(n/4)-(n&1));
    }
    return 0;
}
