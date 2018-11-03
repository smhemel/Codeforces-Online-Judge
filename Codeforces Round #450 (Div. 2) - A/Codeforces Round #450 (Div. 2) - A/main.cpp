//
//  main.cpp
//  Codeforces Round #450 (Div. 2) - A
//
//  Created by S M HEMEL on 11/12/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#define ll long long int
using namespace std;
int main(){
    int n,x,y,one=0,two=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        if(x<0) one++;
        if(x>0) two++;
    }
    if(one<=1 || two<=1) puts("Yes");
    else puts("No");
    return 0;
}
