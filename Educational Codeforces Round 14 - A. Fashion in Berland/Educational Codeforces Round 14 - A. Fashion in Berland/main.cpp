//
//  main.cpp
//  Educational Codeforces Round 14 - A. Fashion in Berland
//
//  Created by S M HEMEL on 3/26/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int s[1000100];

int main() {
    int n;
    cin>>n;
    for (int i=0; i<n; i++) cin>>s[i];
    
    if (n == 1) {
        if (s[0]) cout<<"YES";
        else cout<<"NO";
        return 0;
    }
    int cnt = 0;
    for (int i=0; i<n; i++)
        cnt += s[i]==0;
    if (cnt == 1) cout<<"YES";
    else cout<<"NO";
    return 0;
}
