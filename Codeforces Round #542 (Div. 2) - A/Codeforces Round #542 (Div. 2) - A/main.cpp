//
//  main.cpp
//  Codeforces Round #542 (Div. 2) - A
//
//  Created by S M HEMEL on 25/2/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll ar[211111];
string s,s1;
ll n,p,p1;
map<ll,ll>M,M1;
int main()
{
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> ar[i];
        if(ar[i]>0){
            p++;
            M[ar[i]] = 1;
        }
        if(ar[i]<0){
            p1++;
            M1[ar[i]]++;
        }
    }
    ll div = n/2+(n%2);
    
    if(p1>=div){
        for(int i = -1; i >=-1001; i--) {
            if (!M1[i]) {
                cout << i << endl;
                return 0;
            }
        }
    }
    if(p>=div){
        for(int i = 1; i <= 1000; i++) {
            if (!M[i]) {
                cout << i << endl;
                return 0;
            }
        }
    }
    
    puts("0");
    return 0;
} 
