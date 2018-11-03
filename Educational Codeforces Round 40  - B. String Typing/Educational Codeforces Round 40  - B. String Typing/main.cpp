//
//  main.cpp
//  Educational Codeforces Round 40  - B. String Typing
//
//  Created by S M HEMEL on 22/3/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <set>
using namespace std;
string str;
char s[1000];
int main() {
    int n,cnt = 0,ans,k=1;
    cin >> n;
    ans = n;
    cin >> str;
    for(auto u: str) s[k++] = u;
    int div = n/2;
    for(int i=1; i<=div; i++){
        bool f = true;
        for(int l=i+1,j=1; l<=i+i && j<=i; l++,j++){
            if(s[j]!=s[l]){
                f = false;
                break;
            }
        }
        if(f) cnt = n-i+1;
        if(cnt) ans = min(ans,cnt);
    }
    cout << ans << endl;
    return 0;
}
