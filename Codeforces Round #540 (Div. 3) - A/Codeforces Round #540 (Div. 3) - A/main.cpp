//
//  main.cpp
//  Codeforces Round #540 (Div. 3) - A
//
//  Created by S M HEMEL on 21/2/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <iostream>
#define ll long long int
using namespace std;
int main(int argc, const char * argv[]) {
    ll q,n,a,b;
    cin >> q;
    while(q--){
        cin >> n >> a >> b;
        if((a*2)<=b){
            cout << n*a << endl;
        } else {
            if(n&1) cout << (n/2)*b+a << endl;
            else cout << (n/2)*b << endl;
        }
    }
    return 0;
}
