//
//  main.cpp
//  Codeforces Round #498 (Div. 3) - A
//
//  Created by S M HEMEL on 16/7/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <map>
#include <cstdio>
#include <set>
#define ll long long int
using namespace std;
string s;
int ar[211111];
map<int,int>M;
set<int>S;
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> ar[i];
        S.insert(ar[i]);
    }
    sort(S.begin(),S.end());
    for(auto c: S){
        for(int j=0; j<n; j++){
            if(ar[j]==c){
                if(ar[j]%2==0)
                    ar[j]--;
                else ar[j]++;
                
            }
        }
    }
    for(int i=0; i<n; i++)
        cout << ar[i] << " ";
    return 0;
}







