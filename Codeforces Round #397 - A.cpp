//
//  main.cpp
//  Codeforces Round #397 by Kaspersky Lab and Barcelona Bootcamp (Div. 1 + Div. 2 combined)- A
//
//  Created by S M HEMEL on 2/14/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

/*#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    int n;
    char s[10], str[10];
    cin >> n;
    cin >> s;
    int cnt = 0;
    for(int i=1; i<=n; i++)
    {
        cin >> str;
        if(str[0]==s[0] && str[1]==s[1] && str[2]==s[2])
            ++cnt;
        else
            --cnt;
    }
    if(!cnt)
        puts("home");
    else
        puts("contest");
    return 0;
}*/



#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
char s[1000],s1[1000];
int main()
{
    cin >> s;
    for(int i = 0; s[i]; i++)
    strcpy(s1,s);
    bool flag = true;
    int len = (int) strlen(s);
    char number = s[0], string = s[1], character = s[3];
    for(int i=0; i<len; i++)
    {
        if((i+1)%4==0){
            s[i] = character;
        }
        else if((i+1)%2==1)
            s[i] = number;
        else if((i+1)%2==0 && (i+1)%4!=0)
            s[i] = string;
    }
    for(int i=0; i<len; i++)
        if(s1[i]!=s[i])
            flag = false;
    if(flag==true)
        puts("YES");
    else
        puts("NO");
    return 0;
}
