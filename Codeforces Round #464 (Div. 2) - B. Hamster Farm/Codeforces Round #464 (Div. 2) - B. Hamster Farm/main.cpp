//
//  main.cpp
//  Codeforces Round #464 (Div. 2) - B. Hamster Farm
//
//  Created by S M HEMEL on 17/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#define ll long long int
using namespace std;
ll Min = 1e18;
int main(){
    ll n,m,p=0,p1 = 0,x;
    cin >> n >> m;
    for(ll i=1; i<=m; i++){
        cin >> x;
        if((n%x)<Min){
            p = i;
            p1 = n/x;
            Min = (n%x);
        }
    }
    cout << p << " " << p1 << endl;
    return 0;
}
