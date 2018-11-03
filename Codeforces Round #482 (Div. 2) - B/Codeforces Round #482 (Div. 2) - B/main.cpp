//
//  main.cpp
//  Codeforces Round #482 (Div. 2) - B
//
//  Created by S M HEMEL on 14/5/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <utility>
#define ll long long int
using namespace std;
ll ar[211111];
string s[10];
ll Max1 = 0, Max2 = 0, Max3 = 0;
vector<ll>v,v1,v2;
ll cnt[1111],cnt1[1111],cnt2[1111];
int main() {
    ll n;
    cin >> n;
    cin >> s[0];
    cin >> s[1];
    cin >> s[2];
    ll len = (int)s[0].size();
    if(n>=len){
        puts("Draw");
        return 0;
    }
    else {
        for(ll i=0; i<len; i++){
            cnt[s[0][i]]++;
            cnt1[s[1][i]]++;
            cnt2[s[2][i]]++;
        }
        for(ll i= 'a'; i<='z'; i++){
            v.push_back(cnt[i]);
            v1.push_back(cnt1[i]);
            v2.push_back(cnt2[i]);
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        ll Si = (int)v.size();
        ll m1=n,m2=n,m3=n;
        int loop = 1;
        Max1 = v[Si-1];
        Max2 = v1[Si-1];
        Max3 = v2[Si-1];
        ll z1 = Max1,z2 = Max2,z3 = Max3;
        if(Max1>Max2 && Max1>Max3) return 0 * puts("Kuro");
        if(Max2>Max1 && Max2>Max3) return 0 * puts("Shiro");
        if(Max3>Max2 && Max3>Max1) return 0 * puts("Katie");
        while(loop<20){
            loop++;
            if(Max1==v[Si-loop])
                Max1 = Max1;
            else {
                Max1 += v[Si-loop]; ll d = z1-v[Si-loop];
                if(d<=m1){
                    m1 -= d;
                }
            }
            if(Max2==v1[Si-loop]) Max2 = Max2;
            else { Max2 += v1[Si-loop]; ll d = z2-v1[Si-loop];
                if(d<=m2){
                    m2 -= d;
                }
            }
            if(Max3==v2[Si-loop]) Max3 = Max3;
            else { Max3 += v2[Si-loop]; ll d = z3-v2[Si-loop];
                if(d<=m3){
                    m3 -= d;
                }
            }
            if(Max1>Max2 && Max1>Max3) return 0 * puts("Kuro");
            if(Max2>Max1 && Max2>Max3) return 0 * puts("Shiro");
            if(Max3>Max2 && Max3>Max1) return 0 * puts("Katie");
            if(m1<=0 || m2<=0 || m3<=0) return 0 * puts("Draw");
        }
    }
    return 0;
}
