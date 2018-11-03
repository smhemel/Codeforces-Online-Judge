//
//  main.cpp
//  Divide by Zero 2018 and Codeforces Round #474 - A
//
//  Created by S M HEMEL on 7/4/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
char s[50100];
int n,cnt[10];
int main() {
    scanf("%s",s);
    n=(int)strlen(s);
    for(int i=0; i<n-1; i++)
        if (s[i]>s[i+1]) {
            puts("NO");
            return 0;
        }
    for(int i=0; i<n; i++) cnt[s[i]-'a']++;
    if (cnt[0]>=1&&cnt[1]>=1&&(cnt[2]==cnt[0]||cnt[2]==cnt[1])) {
        puts("YES");
    }
    else puts("NO");
    return 0;
}
