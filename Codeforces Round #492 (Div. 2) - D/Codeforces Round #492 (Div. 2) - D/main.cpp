//
//  main.cpp
//  Codeforces Round #492 (Div. 2) - D
//
//  Created by S M HEMEL on 24/6/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#define ll long long int
using namespace std;
int a[1010];
int main()
{
    int n,ans=0,p1,p2;
    cin >> n;
    for(int i=1; i<=2*n; i++) cin >> a[i];
    for(int i=1; i<=2*n; i++) {
        int x = a[i];
        p1 = i;
        p2 = 0;
        for(int j=i+1; j<=2*n; j++)
            if(a[j]==x) p2 = j;
        if(p2!=0) {
            ans += (p2-p1-1);
            for(int j=p2; j>i+1; j--)
                a[j]=a[j-1];
            a[i+1]=a[i];
        }
    }
    cout << ans << endl;
    return 0;
}

