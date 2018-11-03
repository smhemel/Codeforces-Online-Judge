//
//  main.cpp
//  Codeforces Round #191 (Div. 2) - A. Flipping Game
//
//  Created by S M HEMEL on 7/12/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int a[1000];
int main(){
    bool f = true;
    int n,first=0,last=0,p=0,p1=0,cnt,Max = 0;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        if(!a[i] && f) {
            first = i;
            f = false;
        }
        if(!a[i]) last = i;
    }
    if(f){
        cout << n-1 << endl;
        return 0;
    }
    for(int i=first; i<=last; i++){
        cnt = 0;
        for(int j=i; j<=last; j++){
            if(!a[j]) cnt++;
            else cnt--;
            if(Max<cnt){
                p = i;
                p1 = j;
                Max = cnt;
            }
        }
    }
    int ans = 0;
    for(int i=1; i<=n; i++){
        if(i>=p && i<=p1){
            if(!a[i]) ans++;
            continue;
        }
        if(a[i]) ans++;
    }
    cout << ans << endl;
    return 0;
}
