//
//  main.cpp
//  Educational Codeforces Round 33 - A
//
//  Created by S M HEMEL on 23/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//



#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstdio>
#include <vector>
#define ll long long int
using namespace std;
vector<int>v;
int store[1111];
bool findk(int n){
    for(int i=1; i<=20; i++){
        int ans = 0;
        ans += ((pow(2,i)-1)*pow(2,(i-1)));
        if(ans==n)
            return true;
    }
    return false;
}
int main(){
    int Max = 0;
    int n;
    cin >> n;
    int root = sqrt(n)+1;
    for(int i=1; i<=19; i++){
        store[i] = 1<<i;
    }
    for(int i=1; i<=root; i++){
        if(n%i==0){
            v.push_back(i);
            v.push_back((int)n/i);
        }
    }
    for(auto u: v){
        if(findk(u))
            if(Max<u) Max = u;
    }
    cout << Max << endl;
    return 0;
}
