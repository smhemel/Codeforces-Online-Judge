//
//  main.cpp
//  AIM Tech Round 5 (rated, Div. 1 + Div. 2) - A
//
//  Created by S M HEMEL on 27/8/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#define ll long long int
using namespace std;
ll ar[211111];
string s[1111],s1[1111];
map<ll,ll> M;
vector<ll> v;
int main() {
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++)
        cin >> s[i];
    int k=0,k1=0,p=0;
    for(int i=0; i<n; i++){
        for(int l=0; l<m; l++){
            if(s[i][l]=='B'){
                k++;
            }
        }
    }
    int div = k%2+k/2;
    for(int i=0; i<n; i++){
        for(int l=0; l<m; l++){
            if(s[i][l]=='B'){
                p++;
            }
            if(p==div){
                cout << i+1 << " " << l+1 << endl;
                return 0;
            }
        }}
    return 0;
}
