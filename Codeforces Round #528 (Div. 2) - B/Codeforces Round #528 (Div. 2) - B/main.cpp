//
//  main.cpp
//  Codeforces Round #528 (Div. 2) - B
//
//  Created by S M HEMEL on 24/12/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int k,n,p;
int main() {
    scanf("%d%d",&n,&k);
    p = k;
    while(n%--p);
    printf("%d",n/p*k+p);
    return 0;
}
