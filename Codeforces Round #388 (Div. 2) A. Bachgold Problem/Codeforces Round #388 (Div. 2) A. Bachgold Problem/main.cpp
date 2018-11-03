//
//  main.cpp
//  Codeforces Round #388 (Div. 2) A. Bachgold Problem
//
//  Created by S M HEMEL on 12/19/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,a[100000];
    cin >> n;
    int i=2,l=0;
    while(n!=0)
    {
        if((n-i)==1)
            i++;
        n = n-i;
        a[l++] = i;
        if(n==0) break;
    }
    cout << l <<endl;
    cout << a[0];
    for(int j=1; j<l; j++)
        cout<<" " <<a[j];
    cout <<endl;
    return 0;
}
