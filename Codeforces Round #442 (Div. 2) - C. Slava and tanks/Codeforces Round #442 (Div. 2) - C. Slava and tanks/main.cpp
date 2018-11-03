//
//  main.cpp
//  Codeforces Round #442 (Div. 2) - C. Slava and tanks
//
//  Created by S M HEMEL on 5/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <stdio.h>
#include <cstring>
void swap(char *x,char *y);
void permutate(char *x,int i,int n) {
    int j;
    if(i==n) printf("%s\n",x);
    else {
        for(j=i;j<=n;j++) {
            swap(x+i,x+j);
            permutate(x,i+1,n);
            swap(x+i,x+j);
        }
    }
}
// Combination
void swap(char *x,char *y) {
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    char x[100],s[100];
    printf("\nEnter a word : ");
    scanf("%s",s);
    int j=0;
    for(int i=0; i<strlen(s); i++){
        j = 0;
        for(int l=0; l<=i; l++,j++){
            x[j++] = s[l];
        }
        permutate(x,0,j-1);
        memset(x,0,sizeof(x));
    }
    return 0;
}
