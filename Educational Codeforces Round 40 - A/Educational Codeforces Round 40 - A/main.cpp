//
//  main.cpp
//  Educational Codeforces Round 40 - A
//
//  Created by S M HEMEL on 22/3/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#define ll long long int
using namespace std;
int ar[1111111];
string s;
int main() {
    int n,cnt=0;
    cin >> n;
    cin >> s;
    for(int i=0; i<n; i++){
        if(s[i]=='U' && s[i+1]=='R'){
            cnt++;
            i++;
        }
        else if(s[i]=='R' && s[i+1]=='U'){
            cnt++;
            i++;
        }
        else {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
