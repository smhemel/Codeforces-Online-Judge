//
//  main.cpp
//  Codeforces Round #307 (Div. 2) - A. GukiZ and Contest
//
//  Created by S M HEMEL on 2/27/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int a[2222],b[2222];
map <int,int> M;
int main()
{
    int n,p = 1, c = 1;
    cin >> n;
    for(int i=0; i<n; cin >> a[i],b[i]=a[i],i++);
    sort(b,b+n);
    M[b[n-1]] = p;
    for(int i=n-2; i>=0; i--)
    {
        if(b[i+1]!=b[i]) {
            p += c;
            c = 1;
            M[b[i]] = p;
        }
        else c++;
    }
    for(int i=0; i<n; i++)
        cout << M[a[i]] << " ";
    return 0;
}
