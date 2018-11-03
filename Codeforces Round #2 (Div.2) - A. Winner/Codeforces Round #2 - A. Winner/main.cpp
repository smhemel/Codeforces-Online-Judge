//
//  main.cpp
//  Codeforces Round #2 - A. Winner
//
//  Created by S M HEMEL on 3/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
using namespace std;
#define N 1005
char name[N][35];
int score[N];
int main()
{
    int n;
    map<string,int> mp;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> name[i] >> score[i];
        mp[name[i]]+=score[i];
    }
    int max_score=-100000000;
    for(map<string,int>::iterator it=mp.begin(); it!=mp.end(); it++)
    {
        if(it->second>max_score)
            max_score = it->second;
    }
    map<string,int> mp2;
    for(int i=0; i<n; i++)
    {
        mp2[name[i]]+=score[i];
        if(mp[name[i]]==max_score && mp2[name[i]]>=max_score)
        {
            puts(name[i]);
            break;
        }
    }
    return 0;
}
