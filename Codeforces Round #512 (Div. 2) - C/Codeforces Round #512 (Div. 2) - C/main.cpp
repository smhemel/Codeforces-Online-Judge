//
//  main.cpp
//  Codeforces Round #512 (Div. 2) - C
//
//  Created by S M HEMEL on 23/9/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string s;
int main() {
    int n;
    cin >> n;
    cin >> s;
    for(int sum=0; sum<=1000; sum++) {
        int now=0,cnt=0;
        for (int i=0; i<n; i++) {
            now += (s[i]-'0');
            if(now==sum) {
                now = 0;
                ++cnt;
            }
        }
        if (now == 0 && cnt >= 2)
            return 0 * puts("YES");
    }
    puts("NO");
    return 0;
}
