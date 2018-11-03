//
//  main.cpp
//  Educational Codeforces Round 21 - B. Average Sleep Time
//
//  Created by S M HEMEL on 5/15/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
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
int main()
{
    double n,k,a[200010],sum[200010],total = 0;
    read(n);
    read(k);
    int l = 0;
    for(int i=0; i<n; i++){
        read(a[i]);
        total += a[i];
        sum[l++] = total;
    }
    if(n==1 && k==1)
        return 0 * printf("%.11lf\n",(double)a[0]);
    else{
        double div = (n-k+1),ans = 0.0;
        int d = k, i = -1;
        sum[-1] = 0;
        while(d!=0){
            total = 0.0;
            int t = n-d;
            total = sum[t]-sum[i];
            ans += (total/div);
            d--;
            i++;
        }
        printf("%.11lf\n",ans);
    }
    return 0;
}
