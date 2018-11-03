//
//  main.cpp
//  Codeforces Round #401 (Div. 2) - B. Game of Credit Cards
//
//  Created by S M HEMEL on 2/24/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int n;
string a, b;
int main()
{
    ios_base::sync_with_stdio(false);
    cin >> n >> a >> b;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int lo = 0, hi = n;
    while(lo<hi)
    {
        int mid = (lo + hi + 1) >> 1;
        int pos = n - mid;
        bool ok = true;
        for (int i = 0; i < (int)(mid); i++)
            if (a[i]>b[pos+i]) {
                ok = false;
                break;
            }
        if(ok) lo = mid;
        else hi = mid - 1;
    }
    printf("%d\n", n-lo);
    
    lo = 0, hi = n;
    while (lo < hi) {
        int mid = (lo + hi + 1) >> 1;
        int pos = n - mid;
        bool ok = true;
        for (int i = 0; i < (int)(mid); i++)
            if (a[i] >= b[pos + i]) {
                ok = false;
                break;
            }
        if(ok) lo = mid;
        else hi = mid - 1;
    }
    printf("%d\n", lo);
    return 0;
}
