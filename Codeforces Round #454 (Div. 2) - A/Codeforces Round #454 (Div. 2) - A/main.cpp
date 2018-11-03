//
//  main.cpp
//  Codeforces Round #454 (Div. 2) - A
//
//  Created by S M HEMEL on 23/12/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#define ll long long int
using namespace std;
int main(){
    int a,b,c,n;
    cin >> a >> b >> c >> n;
    if(c>2*n || n>2*c || n>=b) puts("-1");
    else cout << 2*a << " " << 2*b << " " << max(c,n) << endl;
    return 0;
}
