//
//  main.cpp
//  Codeforces Round #414 - A. Bank Robbery
//
//  Created by S M HEMEL on 5/13/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int ar[100000];
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> ar[i];
    int cnt=0;
    int i;
    for(i=0; i<n; i++)
        if(ar[i]>b && ar[i]<c)
            cnt++;
    cout << cnt << endl;
}
