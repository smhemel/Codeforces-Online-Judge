//
//  main.cpp
//  Codeforces Round #436 (Div. 2) - A
//
//  Created by S M HEMEL on 25/9/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//


#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;
map <int,int> mp;
int main()
{
    long long int n,z;
    cin >> n;
    long long int x = -1,y = -1;
    for(int i=0; i<n; i++)
    {
        cin >> z;
        mp[z]++;
        if(x==-1)
            x = z;
        else{
            if(y==-1 && z!= x)
                y = z;
        }
        
    }
    if(mp.size()==2 && mp[x]==mp[y]){
        puts("YES");
        cout << x << " " << y;
    }
    else
        puts("NO");
    return 0;
}

