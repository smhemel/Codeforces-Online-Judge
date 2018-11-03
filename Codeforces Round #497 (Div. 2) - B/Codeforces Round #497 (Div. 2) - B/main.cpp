//
//  main.cpp
//  Codeforces Round #497 (Div. 2) - B
//
//  Created by S M HEMEL on 13/7/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;
ll w[211111],h[211111];
int main(){
    ll n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> w[i] >> h[i];
    }
    ll Max = max(w[0],h[0]);
    for(int i=1; i<n; i++){
        bool f1 = false,f2 = false;
        if(Max>=max(w[i],h[i]))
            f1 = true;
        if(Max>=min(w[i],h[i]))
            f2 = true;
        if(!f1 && !f2) return 0 * puts("NO");
        if(f2)
            Max = min(w[i],h[i]);
        if(f1) Max = max(w[i],h[i]);
    }
    cout << "YES" << endl;
    return 0;
}
