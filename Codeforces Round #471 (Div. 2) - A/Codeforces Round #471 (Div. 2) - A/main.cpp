//
//  main.cpp
//  Codeforces Round #471 (Div. 2) - A
//
//  Created by S M HEMEL on 23/3/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#define ll long long int
#include <string>
#include <cstring>
#include <cstdio>
#include <map>
using namespace std;
int ar[111111];
int cal(ll H,ll N){
    return H/N + !!(H%N);
}
int main() {
    ll h,m,H,D,C,N;
    cin >> h >> m;
    cin >> H >> D >> C >> N;
    if(h>=20){
        double ans = .8*C*cal(H,N);
        printf("%.5lf\n",ans);
    }
    else {
        ll M = (60-m)+60*(20-h-1);
        double ansA = cal(M*D+H,N)*.8*C;
        double ansB = 1*cal(H,N)*C;
        double ans = min(ansA,ansB);
        printf("%.5lf\n",ans);
    }
    
    return 0;
}







