//
//  main.cpp
//  Codeforces Round #475 (Div. 2) - B
//
//  Created by S M HEMEL on 17/4/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#define ll long long int
using namespace std;
int ar[11111];
int main() {
    ll n,a,b,c,t,cnt = 0,x;
    cin >> n >> a >> b >> c >> t;
    for(int i=0; i<n; i++){
        cin >> x;
        if(b-c>=0) cnt += a;
        else cnt += a-(t-x)*(b-c);
    }
    cout << cnt << endl;
    return 0;
}
