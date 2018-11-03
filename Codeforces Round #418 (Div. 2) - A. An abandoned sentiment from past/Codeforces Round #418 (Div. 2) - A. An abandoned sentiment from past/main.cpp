//
//  main.cpp
//  Codeforces Round #418 (Div. 2) - A. An abandoned sentiment from past
//
//  Created by S M HEMEL on 6/7/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
int a[10000],b[10000];
int main()
{
    int n,m,k;
    bool f=0;
    cin >> n >> k;
    for(int i=0; i<n; cin >> a[i],i++);
    for(int i=0; i<n; cin >> b[i],i++);
    if(k>1)
        return 0 * puts("Yes");
    else{
        for(int i=0; i<n; i++)
            if(a[i]==0){
                a[i]=b[0];
                break;
            }
        for(int i=0; i<n-1; i++)
            if(a[i]>a[i+1]){
                f = 1;
                break;
            }
        f ? puts("Yes") : puts("No");
    }
    return 0;
}

