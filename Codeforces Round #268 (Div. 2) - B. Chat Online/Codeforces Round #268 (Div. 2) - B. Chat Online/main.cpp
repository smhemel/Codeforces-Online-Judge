//
//  main.cpp
//  Codeforces Round #268 (Div. 2) - B. Chat Online
//
//  Created by S M HEMEL on 7/14/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int a[2005],b[1005];
int main()
{
    int p,q,l,r,x,y;
    int cnt = 0;
    cin >> p >> q >> l >>r;
    for(int i=1; i<=p; i++) {
        cin >> x >> y;
        for(int j=x; j<=y; j++)
            a[j] = 1;
    }
    for(int i=1; i<=q; i++) {
        cin >> x >> y;
        for(int j=x; j<=y; j++)
            b[j]=1;
    }
    for(int i=l; i<=r; i++)
        for(int j=0; j<=1000; j++) {
            if(a[j+i]==1 && b[j]==1) {
                cnt++;
                break;
            }
        }
    cout << cnt << endl;
    return 0;
}
