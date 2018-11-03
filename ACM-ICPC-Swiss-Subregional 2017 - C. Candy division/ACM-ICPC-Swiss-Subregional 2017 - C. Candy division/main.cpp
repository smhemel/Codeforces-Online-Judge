//
//  main.cpp
//  ACM-ICPC-Swiss-Subregional 2017 - C. Candy division
//
//  Created by S M HEMEL on 31/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#define ll long long int
using namespace std;
vector<ll> v;
void solve(ll n)
{
    int root = sqrt(n)+1;
    for(ll i=2; i<=root; i++){
        if(n%i==0){
            v.push_back(i);
            v.push_back((int)(n/i));
        }
    }
    v.push_back(1);
}
int main(){
    ios_base::sync_with_stdio(0);
    int test;
    ll n;
    cin >> test;
    while(test--)
    {
        cin >> n;
        if(n<=5){
            if(n==3) puts("1 1 1");
            else puts("IMPOSSIBLE");
        }
        else{
            v.clear();
            solve(n);
            ll len = (int)v.size();
            bool flag = true;
            for(int i=0; i<len-2; i++){
                for(int l=i+1; l<len-1; l++){
                    for(int j=l+1; j<len; j++){
                        if(v[i]+v[l]+v[j]==n){
                            cout << v[i] << " " << v[l] << " " << v[j] << endl;
                            flag = false; break;
                        }
                    }
                    if(!flag) break;
                }
                if(!flag) break;
            }
            if(flag)
                puts("IMPOSSIBLE");
        }
    }
    return 0;
}
