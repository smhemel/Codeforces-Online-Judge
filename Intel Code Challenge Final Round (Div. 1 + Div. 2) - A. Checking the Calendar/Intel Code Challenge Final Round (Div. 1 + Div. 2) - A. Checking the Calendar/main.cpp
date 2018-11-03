//
//  main.cpp
//  Intel Code Challenge Final Round (Div. 1 + Div. 2) - A. Checking the Calendar
//
//  Created by S M HEMEL on 3/11/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include<iostream>
using namespace std;
int m[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30,31};
int getid(string s)
{
    if(s[0]=='m')return 0;
    if(s[0]=='t'&&s[1]=='u')return 1;
    if(s[0]=='w')return 2;
    if(s[0]=='t'&&s[1]=='h')return 3;
    if(s[0]=='f')return 4;
    if(s[0]=='s'&&s[1]=='a')return 5;
    if(s[0]=='s') return 6;
}
string s1,s2;
int main()
{
    cin>>s1>>s2;
    int p=getid(s1),q=getid(s2);
    for(int i=0;i<7;i++)
    {
        int now=i;
        for(int j=0;j<12;j++)
        {
            for(int k=0;k<m[j];k++)
            {
                now=(now+1)%7;
                if(k==0&&now==p&&(now+m[j])%7==q)
                    return puts("YES");
            }
        }
    }
    printf("NO");
}
