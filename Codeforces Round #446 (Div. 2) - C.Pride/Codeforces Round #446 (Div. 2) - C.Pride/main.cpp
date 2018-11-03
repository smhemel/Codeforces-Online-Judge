//
//  main.cpp
//  Codeforces Round #446 (Div. 2) - C.Pride
//
//  Created by S M HEMEL on 17/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;
ll a[10001],b[10001];
ll cnt;
int n,m,c;
ll __gcd(ll n1,ll n2)
{
    if(n2 != 0)
        return __gcd(n2, n1 % n2);
    else
        return n1;
}
void solve(){
    for(int i=0; i<n-1; i++){
        ll x = a[i];
        ll y = a[i+1];
        if(x==1 && y==1)
            continue;
        if(__gcd(x,y)==1){
            cnt++;
            if(x==1LL)
                a[i+1] = 1;
            else
                a[i] = 1;
            m--;
            break;
        }
    }
}
int main(){
    cin >> n;
    m = n;
    for(int i=0; i<n; i++){
        scanf("%lld",&a[i]);
        b[i] = a[i];
    }
    sort(b,b+n);
    bool f1 = true;
    for(int i=1; i<n; i++){
        if(b[i]%b[0]!=0){
            f1 = false;
            break;
        }
    }
    if(f1) return 0 * puts("-1");
    while(true) {
        bool f = true;
        c = 0;
        solve();
        for(int i=0; i<n; i++){
            if(a[i]!=1)
                f = false;
            if(a[i]>1)
                c++;
        }
        if(c==m){
            for(int i=0; i<n-1; i++){
                ll x = a[i];
                ll y = a[i+1];
                if(x==y) continue;
                if(){
                    cnt++;
                    if(x==1LL)
                        a[i+1] = 1;
                    else
                        a[i] = 1;
                    m--;
                    break;
                }
            }
        }
        puts("");
        if(f)
            break;
    }
    cout << cnt << endl;
    return 0;
}
