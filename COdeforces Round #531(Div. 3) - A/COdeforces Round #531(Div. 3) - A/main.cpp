//
//  main.cpp
//  COdeforces Round #531(Div. 3) - A
//
//  Created by S M HEMEL on 10/1/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    n %= 4;
    if(n==0 || n==3) puts("0");
    else puts("1");
    return 0;
}
