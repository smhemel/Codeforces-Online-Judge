//
//  main.cpp
//  Codeforces Round #481 (Div. 3) - C
//
//  Created by S M HEMEL on 13/5/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
int n,m,p;
long long ar[200010],tmp;
int main(){
    
    scanf("%d%d",&n,&m);
    for (int i=1; i<=n; i++){
        scanf("%lld",&ar[i]);
        ar[i]+=ar[i-1];
    }
    while(m--){
        scanf("%lld",&tmp);
        while(ar[p]<tmp)
            p++;
        printf("%d %lld\n",p,tmp-ar[p-1]);
    }
    return 0;
}
