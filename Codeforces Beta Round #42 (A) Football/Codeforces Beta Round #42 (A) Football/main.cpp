//
//  main.cpp
//  Codeforces Beta Round #42 (A) Football
//
//  Created by S M HEMEL on 11/27/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
int main()
{
    vector <string> v;
    int n,ctr=0,ws=0,wt=0;
    cin >> n;
    string s;
    for(int i=0; i<n; i++)
        cin >> s,v.push_back(s);
    for(int i=0; i<n; i++)
    {
        for(int l=0; l<n; l++)
        {
            if(v[i]==v[l])
                ctr ++;
            if(l == n-1)
            {
                if(ws<ctr)
                {
                    ws = ctr;
                    wt = i;
                }
                ctr = 0;
            }
        }
    }
    cout << v[wt];
    return 0;
}
