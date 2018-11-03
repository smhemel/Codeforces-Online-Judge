//
//  main.cpp
//  Codeforces Round #507 (Div. 2) - A
//
//  Created by S M HEMEL on 5/9/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <string>
#include <map>
#define ll long long int
using namespace std;
ll ar[211111];
map<ll,ll>M;
vector<ll>v;
string s;
int main() {
    ll n,a,b;
    cin >> n >> a >> b;
    for(ll i=0; i<n; i++){
        cin >> ar[i];
    }
    if(n==1){
        if(ar[0]==1 || ar[0]==0)
            puts("0");
        else cout << min(a,b) << endl;
        return 0;
    }
    if(n&1)
    {
        for(ll i=0,j=n-1; i<n/2; i++,j--){
            if(ar[i]==2 || ar[j]==2) continue;
            if(ar[i]!= ar[j])
                return 0 * puts("-1");
        }
        ll cnt = 0;
        for(ll i=0,j=n-1; i<n/2; i++,j--){
            if(ar[i]==2 && ar[j]==2){
                cnt += 2*min(a,b);
            }
            else if(ar[i]==0 && ar[j]==2){
                cnt += a;
            }
            else if(ar[i]==1 && ar[j]==2){
                cnt += b;
            }
            else if(ar[i]==2 && ar[j]==0){
                cnt += a;
            }
            else if(ar[i]==2 && ar[j]==1){
                cnt += b;
            }
        }
        if(ar[n/2]==2)
            cnt += min(a,b);
        cout << cnt << endl;
    }
    else {
        for(ll i=0,j=n-1; i<n/2; i++,j--){
            if(ar[i]==2 || ar[j]==2) continue;
            if(ar[i]!= ar[j])
                return 0 * puts("-1");
        }
        ll cnt = 0;
        for(ll i=0,j=n-1; i<n/2; i++,j--){
            if(ar[i]==2 && ar[j]==2){
                cnt += 2*min(a,b);
            }
            else if(ar[i]==0 && ar[j]==2){
                    cnt += a;
            }
            else if(ar[i]==1 && ar[j]==2){
                    cnt += b;
            }
            else if(ar[i]==2 && ar[j]==0){
                    cnt += a;
            }
            else if(ar[i]==2 && ar[j]==1){
                    cnt += b;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}




