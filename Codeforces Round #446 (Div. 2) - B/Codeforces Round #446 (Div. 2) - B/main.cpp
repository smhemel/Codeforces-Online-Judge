//
//  main.cpp
//  Codeforces Round #446 (Div. 2) - B
//
//  Created by S M HEMEL on 17/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#define ll long long int
ll a[1000111],cnt[1000111];
using namespace std;
int main(){
    ll n,ans = 0, total = 0;
    cin >> n;
    for(int i=1; i<=n; i++)
        scanf("%lld",&a[i]);
    for(int i=2; i<=n; i++)
    {
        if(a[i]==0)
            continue;
        cnt[max(1LL,i-a[i])]--;
        cnt[i]++;
    }
    for(int i=1; i<=n; i++){
        total += cnt[i];
        cnt[i] = total;
    }
    for(int i=1; i<=n; i++){
        if(cnt[i]>=0)
            ans++;
    }
    cout << ans << endl;
    return 0;
}
