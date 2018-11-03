//
//  main.cpp
//  Codeforces Round #413 - A
//
//  Created by S M HEMEL on 5/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <cstdio>
using namespace std;
int main()
{
    double a,b,x,sum = 0;
    cin >> a >> b;
    for(int i=0; i<a; i++){
        cin >> x;
        sum += x;
    }
    int cnt = 0;
    while (sum/(a+cnt)<b-0.5) {
        cnt+=1;
        sum+= b;
    }
    cout << cnt << endl;
    return 0;
}
