//
//  main.cpp
//  Codeforces Round #431 (Div. 2) - B. Tell Your World
//
//  Created by S M HEMEL on 25/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#define ll long long
using namespace std;
int ar[1111],n;
bool on_first[1111];
bool check()
{
    for(int i=1; i<n; i++) {
        for(int j=0; j<n; j++){
            if ((ll)i*(ar[j]-ar[0])==(ll)j*(ar[i]-ar[0]))
                on_first[j] = true;
            else on_first[j] = false;
        }
        int idx = -1;
        bool valid = true;
        for(int j=0; j<n; j++) if (!on_first[j]) {
            if(idx==-1) idx = j;
            else if ((ll)i*(ar[j]-ar[idx])!=(ll)(j-idx)*(ar[i]- ar[0])) {
                valid = false;
                break;
            }
        }
        if (valid && idx != -1)
            return true;
    }
    return false;
}

int main()
{
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &ar[i]);
    bool ans = false;
    ans |= check();
    reverse(ar, ar + n);
    ans |= check();
    puts(ans ? "Yes" : "No");
    return 0;
}
