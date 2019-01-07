//
//  main.cpp
//  Codeforces Round #434 (Div. 2) - A. k-rounding
//
//  Created by S M HEMEL on 20/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
long long n,k,x=1;
int main(){
    cin>>n>>k;
    for(int i=1;i<=k;i++) x*=10;
    cout<<(n*x)/__gcd(n,x) << endl;
    return 0;
}
