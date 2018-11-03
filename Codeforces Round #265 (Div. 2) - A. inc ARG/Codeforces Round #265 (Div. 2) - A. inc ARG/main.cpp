//
//  main.cpp
//  Codeforces Round #265 (Div. 2) - A. inc ARG
//
//  Created by S M HEMEL on 2/23/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
char a[1000],b[1000];
int main()
{
    int n,j=0;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];
    bool flag = true;
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(flag==false){
            b[j++] = a[i];
            continue;
        }
        if(a[i]=='1' || flag==false)
            b[j++] = '0';
        else if(flag==true){
            b[j++] = '1';
            flag = false;
        }
    }
    for(int i=0; i<n; i++)
        if(a[i]!=b[i])
            count++;
    cout << count << endl;
    return 0;
}
