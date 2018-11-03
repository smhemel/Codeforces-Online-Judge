//
//  main.cpp
//  Codeforces Round #446 (Div. 2) - A
//
//  Created by S M HEMEL on 17/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#define ll long long int
using namespace std;
int a[100011];
int main(){
    ll n,total = 0;
    cin >> n;
    int x;
    for(int i=0; i<n; i++){
        scanf("%d",&x);
        total += x;
    }
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a,a+n);
    if((a[n-1]+a[n-2])>=total)
        puts("YES");
    else
        puts("NO");
    return 0;
}
