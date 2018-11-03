//
//  main.cpp
//  Codeforces Round #466 (Div. 2) - A
//
//  Created by S M HEMEL on 24/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int a[1111];
int main() {
    int n,d;
    scanf("%d%d",&n,&d);
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    int ans=0;
    for(int i=0; i<n; i++)
        for(int j=i; j<n; j++)
        {
            if (a[j]-a[i]>d) break;
            ans=max(ans,j-i+1);
        }
    cout << n-ans << endl;
    return 0;
}
