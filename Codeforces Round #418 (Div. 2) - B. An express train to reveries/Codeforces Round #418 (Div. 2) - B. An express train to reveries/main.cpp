//
//  main.cpp
//  Codeforces Round #418 (Div. 2) - B. An express train to reveries
//
//  Created by S M HEMEL on 6/7/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int a[1010],b[1010],c[1010],check[1010];
int main()
{
    int n,p1 = 0, p2 = 0,cnt = 0;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        check[a[i]] = 1;
        c[i] = a[i];
    }
    for(int i=1; i<=n; i++)
        cin>>b[i],check[b[i]]=1;
    
    for(int i=1; i<=n; i++)
    {
        if(a[i]!=b[i]) {
            cnt++;
            if(!p1) p1 = i;
            else p2 = i;
        }
    }
    if(cnt==1) {
        for(int i=1; i<=n; i++)
        {
            if(!check[i]) {
                c[p1]=i;
                break;
            }
        }
    }
    if(cnt==2)
    {
        memset(check,0,sizeof(check));
        c[p2] = b[p2];
        for(int i=1; i<=n; i++) {
            check[c[i]]++;
            if(check[c[i]]>1) {
                c[p1] = b[p1];
                c[p2] = a[p2];
                break;
            }
        }
    }
    for(int i=1; i<=n; i++)
        cout<< c[i] <<" ";
    return 0;
}
