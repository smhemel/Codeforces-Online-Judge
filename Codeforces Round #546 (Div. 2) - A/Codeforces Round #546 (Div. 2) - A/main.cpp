//
//  main.cpp
//  Codeforces Round #546 (Div. 2) - A
//
//  Created by S M HEMEL on 14/3/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<pair<ll,ll>>v;
map<ll,ll>M;
string s,s1;
ll a,b,c,x,y,z,n,m,k,d;
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    cin >> k;
    bool f = true;
    ll cnt = 0;
    for(auto u: v){
        if(u.first<=k && u.second>=k && f){
            cnt++;
            f = false;
        }
        else if(!f) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
