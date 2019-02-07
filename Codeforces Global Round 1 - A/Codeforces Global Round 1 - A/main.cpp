//
//  main.cpp
//  Codeforces Global Round 1 - A
//
//  Created by S M HEMEL on 7/2/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <iostream>
#define ll long long int
using namespace std;
ll ar[211111];
ll mod = 1000000007;
ll n,m,a,b,c;
ll Max = 0;
int main() {
    cin>> n >> m;
    for(int i=0,j=1; i<m; i++,j++){
        cin >> ar[i];
        if(i<m-1) Max += ar[i]*n;
        else Max += ar[i];
        Max %= mod;
    }
    if(Max&1) puts("odd");
    else puts("even");
    return 0;
}
