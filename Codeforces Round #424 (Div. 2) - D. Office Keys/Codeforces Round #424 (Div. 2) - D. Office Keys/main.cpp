//
//  main.cpp
//  Codeforces Round #424 (Div. 2) - D. Office Keys
//
//  Created by S M HEMEL on 7/13/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <map>
#include <algorithm>
#define ll long long int
using namespace std;
ll key[10000],peo[10000];
map <ll,ll> M;
int main()
{
    ll n,k,p;
    ll Max = 999999999;
    cin >> n >> k >> p;
    for(int i=0; i<n; i++)
        cin >> peo[i];
    for(int i=0; i<k; i++)
        cin >> key[i];
    sort(peo,peo+n);
    ll m;
    ll position;
    for(ll i=0; i<n; i++){
        Max = 9999999999;
        position = 0;
        for(ll l=0; l<k; l++){
            m = 0;
            if(key[l]!=0)
                m = abs(peo[i]-key[l])+abs(key[l]-p);
            else
                continue;
            if(Max>m){
                position = l;
                //cout << l << " " << position <<" "<< m << endl;
                Max = m;
            }
        }
        key[position] = 0LL;
        M[peo[i]] = Max;
    }
    Max = 0;
    for(ll i=0; i<n; i++){
        if(Max<M[peo[i]])
            Max = M[peo[i]];
    }
    cout << Max << endl;
    return 0;
}
