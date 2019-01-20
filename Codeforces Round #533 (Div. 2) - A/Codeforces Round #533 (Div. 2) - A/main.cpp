//
//  main.cpp
//  Codeforces Round #533 (Div. 2) - A
//
//  Created by S M HEMEL on 20/1/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    int n,k=100000,ans=1;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int t=1;t<=100;t++)
    {
        int j=0;
        for(int i=0;i<n;i++)
            if(abs(a[i]-t)>1)
                j+=abs(a[i]-t)-1;
        if(j<k){
            k=j;ans=t;
        }
    }
    cout << ans << " " << k << endl;
    return 0;
}
