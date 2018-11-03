//
//  main.cpp
//  Codeforces Round #479 (Div. 3) - C
//
//  Created by S M HEMEL on 6/5/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int a[n+2];
    for(int i=1; i<=n; i++)
        cin >> a[i];
    sort(a+1,a+n+1);
    a[0]=1;
    a[n+1]=1e9+1;
    if(a[k+1]==a[k]||k>n)cout<<-1;
    else cout<<a[k];
    return 0;
}
