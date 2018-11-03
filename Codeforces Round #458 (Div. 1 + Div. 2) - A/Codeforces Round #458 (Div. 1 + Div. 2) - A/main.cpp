//
//  main.cpp
//  Codeforces Round #458 (Div. 1 + Div. 2) - A
//
//  Created by S M HEMEL on 20/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <map>
#define ll long long int
using namespace std;
int main(){
    int n;
    cin >> n;
    int m = -9999999;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        int d = sqrt(x);
        if(d*d!=x){
            m = max(m,x);
        }
    }
    cout << m << endl;
    return 0;
}





