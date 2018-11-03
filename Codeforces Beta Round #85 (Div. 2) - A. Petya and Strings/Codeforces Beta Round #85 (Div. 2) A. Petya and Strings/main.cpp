//
//  main.cpp
//  Codeforces Beta Round #85 (Div. 2) A. Petya and Strings
//
//  Created by S M HEMEL on 12/12/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include<cstring>
#include<cstdio>
using namespace std;
char arr1[111];
char arr2[111];
int main()
{
    scanf("%s%s",arr1,arr2);
    int len = (int)strlen(arr1);
    for(int i=0;i<len;i++){
        if(arr1[i]>'Z')
            arr1[i]-=('a'-'A');
        if(arr2[i]>'Z')
            arr2[i]-=('a'-'A');
    }
    //printf("%s\n%s",arr1,arr2);
    int ans=strcmp(arr1,arr2);
    printf("%d\n",ans);
    return 0;
}
