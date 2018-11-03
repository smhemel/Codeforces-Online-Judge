//
//  main.cpp
//  Codecraft-17 and Codeforces Round #391 (Div. 1 + Div. 2) - A
//
//  Created by S M HEMEL on 1/12/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,max=5000000;
    char s[100011];
    int a[7];
    cin >> s;
    int len = (int) strlen(s);
    for(int i=0; i<len; i++)
    {
        if(s[i]=='B') c1++;
        else if(s[i]=='u') c2++;
        else if(s[i]=='l') c3++;
        else if(s[i]=='b') c4++;
        else if(s[i]=='a') c5++;
        else if(s[i]=='s') c6++;
        else if(s[i]=='r') c7++;
    }
    c2 = c2/2;
    c5 = c5/2;
    a[0]=c1,a[1]=c2,a[2]=c3,a[3]=c4,a[4]=c5,a[5]=c6,a[6]=c7;
    for(int i=0; i<7; i++)
    {
        if(a[i]<max)
            max = a[i];
    }
    cout << max<<endl;
    return 0;
}
