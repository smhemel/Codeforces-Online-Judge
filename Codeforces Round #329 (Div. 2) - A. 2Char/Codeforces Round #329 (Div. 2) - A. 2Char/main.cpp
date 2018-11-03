//
//  main.cpp
//  Codeforces Round #329 (Div. 2) - A. 2Char
//
//  Created by S M HEMEL on 29/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string s[111];
int main(){
    int n,ans = 0;
    cin >> n;
    for(int i=0; i<n; i++) cin >> s[i];
    for(int i='a'; i<='z'; i++)
        for(int j='a'; j<='z'; j++){
            int cnt = 0;
            for(int l=0; l<n; l++){
                bool f = true;
                for(auto c: s[l])
                    if(c!=i && c!=j){
                        f = false;
                        break;
                    }
                if(f) cnt += (int)s[l].size();
            }
            ans = max(ans,cnt);
        }
    cout << ans << endl;
    return 0;
}
