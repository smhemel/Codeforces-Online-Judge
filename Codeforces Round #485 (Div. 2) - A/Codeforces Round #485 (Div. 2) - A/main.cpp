//
//  main.cpp
//  Codeforces Round #485 (Div. 2) - A
//
//  Created by S M HEMEL on 29/5/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <map>
#include <string>
#include <cstring>
#include <vector>
#include <utility>
#define ll long long int
using namespace std;
ll ar[211111];
string s;
map<string,string> M;
int main() {
    int n;
    cin >> n;
    M["purple"] = "Power";
    M["green"] = "Time";
    M["blue"] = "Space";
    M["orange"] = "Soul";
    M["red"] = "Reality";
    M["yellow"] = "Mind";
    for(int i=0; i<n; i++){
        cin >> s;
        M[s] = "aa";
    }
    cout << 6-n << endl;
    if(M["purple"]!="aa") cout << M["purple"] << endl;
    if(M["green"]!="aa") cout << M["green"] << endl;
    if(M["blue"]!="aa") cout << M["blue"] << endl;
    if(M["orange"]!="aa") cout << M["orange"] << endl;
    if(M["red"]!="aa") cout << M["red"] << endl;
    if(M["yellow"]!="aa") cout << M["yellow"] << endl;
    return 0;
}
