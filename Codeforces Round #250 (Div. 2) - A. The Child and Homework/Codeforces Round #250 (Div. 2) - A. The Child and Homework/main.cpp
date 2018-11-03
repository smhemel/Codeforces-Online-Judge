//
//  main.cpp
//  Codeforces Round #250 (Div. 2) - A. The Child and Homework
//
//  Created by S M HEMEL on 3/28/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
char s[4][2048];
int len[4];
int main()
{
     for(int i=0;i<4;i++)
        {
            cin >> s[i];
            len[i] = (int) strlen(s[i]) - 2;
        }
        int cnt=0,ans=0;
        for(int i=0;i<4;i++) {
            int s1=0,s2=0;
            for(int j=0;j<4;j++)
                if(i!=j) {
                    if(len[i]*2<=len[j]) s1++;
                    if(len[i]>=len[j]*2) s2++;
                }
            if(s1==3||s2==3) {
                cnt++;
                ans = i;
            }
        }
        if(cnt==1)
            printf("%c\n",'A'+ans);
        else
            printf("C\n");
    return 0;
}
