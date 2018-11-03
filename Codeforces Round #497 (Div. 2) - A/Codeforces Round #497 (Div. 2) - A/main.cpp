//
//  main.cpp
//  Codeforces Round #497 (Div. 2) - A
//
//  Created by S M HEMEL on 13/7/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>
#include <map>
#define ll long long int
using namespace std;
map<ll,ll> M;
ll ar[211111];
string s;
bool check(char c){
    return c=='a' || c=='e' ||c=='i' || c=='o' || c=='u';
}
int main() {
    cin >> s;
    char p = s[0];
    for(int i=1; s[i]; i++){
        if(!check(p) or p =='n'){
            if(!check(p)){
                cout << "NO";
                return 0;
            }
        }
        p = s[i];
    }
    if(p=='n' or check(p)) cout << "YES" << endl;
    else
        puts("NO");
    return 0;
}
