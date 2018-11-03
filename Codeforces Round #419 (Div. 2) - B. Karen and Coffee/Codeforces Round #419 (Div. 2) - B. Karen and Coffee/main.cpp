//
//  main.cpp
//  Codeforces Round #419 (Div. 2) - B. Karen and Coffee
//
//  Created by S M HEMEL on 6/17/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;
template <typename T>
void read(T &x)
{
    char c;
    bool t=false;
    for(c=getchar(); (c<'0'||c>'9') && c!='-'; c=getchar());
    if(c=='-'){
        c = getchar();
        t = true;
    } x = c-'0';
    for(c=getchar(); c>='0'&&c<='9'; c=getchar())
        x=x*10+c-'0';
    if(t) x=-x;
}
int n,k,q,l,r;
int a[200010];
int num[200010];
int main(){
    read(n);read(k);read(q);
    for(int i=0;i<n;i++){
        read(l);read(r);
        a[l]++;a[r+1]--;
    }
    for(int i=1;i<=200000;i++){
        a[i]+=a[i-1];
        num[i]=num[i-1];
        if(a[i]>=k)
            num[i]++;
    }
    while(q--){
        read(l);read(r);
        printf("%d\n",num[r]-num[l-1]);
    }
    return 0;
}
