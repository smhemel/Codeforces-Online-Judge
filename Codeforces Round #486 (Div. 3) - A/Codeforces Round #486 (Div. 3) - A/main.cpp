//
//  main.cpp
//  Codeforces Round #486 (Div. 3) - A
//
//  Created by S M HEMEL on 1/6/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <map>
#include <utility>
#define ll long long int
using namespace std;
string s;
ll ar[211111],br[21111];
map<ll,ll> M;
int main() {
    ll n,m,k=0;
    cin >> n >> m;
    for(ll i=0; i<n; i++){
        cin >> ar[i];
        if(!M[ar[i]]){
            br[k++] = ar[i];
            M[ar[i]] = i+1;
        }
    }
    sort(br,br+k);
    if(k>=m){
        puts("YES");
        for(int i=0; i<m; i++){
            cout << M[br[i]] << " ";
        }
    }
    else puts("NO");
    
    return 0;
}
