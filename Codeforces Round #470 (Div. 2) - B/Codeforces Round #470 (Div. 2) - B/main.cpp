//
//  main.cpp
//  Codeforces Round #470 (Div. 2) - B
//
//  Created by S M HEMEL on 10/3/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <vector>
#define ll long long int
using namespace std;
ll v[111111];
ll T[111111],ans[111111];
int main(){
    ll days;
    cin >> days;
    for(int i=1; i<=days; i++)
        scanf("%lld",&v[i]);
    for(int i=1; i<=days; i++)
        scanf("%lld",&T[i]);
    ll cnt = 1;
    for(ll i=1; i<=days; i++){
        while(v[cnt]<=0)
            ++cnt;
        ll sum = 0;
        for(ll j=cnt; j<=i; ++j){
            if(v[j]>=T[i])
                sum += T[i];
            else if(v[j]>0)
                sum += v[j];
            v[j] -= T[i];
        }
        printf("%lld ", sum);
    }
    puts("");
    return 0;
}
