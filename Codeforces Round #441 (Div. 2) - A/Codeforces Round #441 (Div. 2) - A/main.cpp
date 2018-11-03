//
//  main.cpp
//  Codeforces Round #441 (Div. 2) - A
//
//  Created by S M HEMEL on 16/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <string>
#include <utility>
#include <cmath>
using namespace std;
int main(){
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    n--;
    if((a<=b && a<=c) || (b<=a && b<=c) || n<=1)
        cout << n*min(a,b);
    else
        cout << (n-1)*c+min(a,b);
    return 0;
}
