//
//  main.cpp
//  Codeforces Round #347 (Div. 2) - B. Rebus
//
//  Created by S M HEMEL on 18/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctype.h>
#include <vector>
using namespace std;
int a[999];
int main()
{
    int p = 1,n,k=0;
    char c;
    a[k++] = 1;
    while(cin >> c && c!='=') {
        if(c=='-') {
            p--;
            a[k++] = -1;
        }
        if(c=='+') {
            p++;
            a[k++] = 1;
        }
    }
    cin >> n;
    for(int i=0; i<k; i++)
    {
        if(a[i]>0)
            while(p<n && a[i]<n) {
                a[i]++;
                p++;
            }
        else
            while(p>n && a[i]>(-1)*n) {
                a[i]--;
                p--;
            }
    }
    if(p!=n) return 0 * puts("Impossible");
    cout<<"Possible\n";
    for(int i=0;i<k;i++)
    {
        if(i==0)
            cout<<a[i]<<' ';
        else
            if(a[i]>0)
                cout<<"+ "<<a[i]<<' ';
            else
                cout<<"- "<<(-1)*a[i]<<' ';
    }
    cout<<"= "<<n;
}
