//
//  main.cpp
//  Codeforces Round #545 (Div. 2) - A
//
//  Created by S M HEMEL on 8/3/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll ar[211111];
vector<ll>v,v1;
string s,s1;
ll a,b,c,x,y,z,n,m,k,d;
int main(){
    
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> ar[i];
    }
    ll c = ar[0];
    ll cnt = 0,ans = 0;
    for(int i=1; i<=n; i++){
        if(ar[i]!=c){
            v.push_back(cnt);
            cnt = 1;
            c = ar[i];
        }else cnt++;
    }
    v.push_back(cnt);
    for(int i=1; i<v.size(); i++){
        ans = max(ans,min(v[i-1],v[i]));
    }
    cout << 2*ans << endl;
    return 0;
}
