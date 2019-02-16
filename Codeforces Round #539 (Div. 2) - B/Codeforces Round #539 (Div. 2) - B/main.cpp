//
//  main.cpp
//  Codeforces Round #539 (Div. 2) - B
//
//  Created by S M HEMEL on 16/2/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int ar[211111];
int main()
{
    int n,total = 0;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> ar[i];
        total += ar[i];
    }
    int res = total;
    sort(ar+1,ar+n+1);
    for(int i=2; i<=n; i++){
        for(int j=2; j<=ar[i]; j++){
            if(ar[i]%j==0)
                res = min(res,total-ar[i]-ar[1]+ar[1]*j+ar[i]/j);
        }
    }
    cout << res << endl;
    return 0;
}

