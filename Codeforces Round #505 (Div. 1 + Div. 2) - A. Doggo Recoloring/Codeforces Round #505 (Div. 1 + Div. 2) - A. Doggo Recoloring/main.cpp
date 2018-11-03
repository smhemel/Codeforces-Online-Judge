//
//  main.cpp
//  Codeforces Round #505 (Div. 1 + Div. 2) - A. Doggo Recoloring
//
//  Created by S M HEMEL on 21/8/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include<cstdio>
using namespace std;
int n,ans,a[30];
char s[100010];
int main(){
    scanf("%d%s",&n,s+1);
    for(int i=1; i<=n; i++) a[s[i]-97]++;
    for(int i=0; i<26; i++) if(a[i]>1) ans=1;
    printf(ans||n==1?"Yes":"No");
    return 0;
}
