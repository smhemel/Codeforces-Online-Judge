//
//  main.cpp
//  Codeforces Round #539 (Div. 2) - A
//
//  Created by S M HEMEL on 16/2/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int ar[21111];
int main()
{
    ll n,m;
    cin >> n >> m;
    ll amount = m;
    ll cnt = m,c=1;
    if(n==m){
        cout << m-1 << endl;
        return 0;
    }
    if(n<m){
        cout << n-1 << endl;
        return 0;
    }
    while(true){
        if(cnt>=(n-c)){
            cout << amount << endl;
            return 0;
        }
        c++;
        amount += c;
    }
    return 0;
}
