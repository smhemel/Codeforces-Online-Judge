//
//  main.cpp
//  Codeforces Round #411 (Div. 1) - B. Minimum number of steps
//
//  Created by S M HEMEL on 5/8/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
const int MOD = (int) 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    int cnt_b = 0;
    int ans = 0;
    for(char c : s) {
        if(c=='b')
            cnt_b++;
        else {
            ans = (ans + cnt_b) % MOD;
            cnt_b = (2 * cnt_b) % MOD;
        }
    }
    cout << ans << endl;
    
    return 0;
}
