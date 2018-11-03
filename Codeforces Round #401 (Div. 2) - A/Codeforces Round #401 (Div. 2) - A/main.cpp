//
//  main.cpp
//  Codeforces Round #401 (Div. 2) - A
//
//  Created by S M HEMEL on 2/24/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

/*#include <iostream>
#include <map>
#include <cstring>
#include <cmath>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <vector>
using namespace std;
int main()
{
    long int n,x;
    cin >> n >> x;
    n = n%6;
    if(x==0)
    {
        if(n==0)
        {
            cout << "0" << endl;
            return 0;
        }
        if(n==5)
        {
            cout << "0" << endl;
            return 0;
        }if(n==4)
        {
            cout << "2" << endl;
            return 0;
        }if(n==3)
        {
            cout << "2" << endl;
            return 0;
        }if(n==2)
        {
            cout << "1" << endl;
            return 0;
        }if(n==1)
        {
            cout << "1" << endl;
            return 0;
        }
    }
    if(x==1)
    {
        if(n==0)
        {
            cout << "1" << endl;
            return 0;
        }
        if(n==5)
        {
            cout << "2" << endl;
            return 0;
        }if(n==4)
        {
            cout << "0" << endl;
            return 0;
        }if(n==3)
        {
            cout << "1" << endl;
            return 0;
        }if(n==2)
        {
            cout << "2" << endl;
            return 0;
        }if(n==1)
        {
            cout << "0" << endl;
            return 0;
        }
    }
    if(x==2)
    {
        if(n==0)
        {
            cout << "2" << endl;
            return 0;
        }
        if(n==5)
        {
            cout << "1" << endl;
            return 0;
        }if(n==4)
        {
            cout << "1" << endl;
            return 0;
        }if(n==3)
        {
            cout << "0" << endl;
            return 0;
        }if(n==2)
        {
            cout << "0" << endl;
            return 0;
        }if(n==1)
        {
            cout << "2" << endl;
            return 0;
        }
    }
    return 0;
}*/



#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x;
    cin >> n >> x;
    n %= 6;
    int a[] = {0,1,2};
    for(int i=0; i<n; i++)
    {
        if(i%2==0) swap(a[0],a[1]);
        else swap(a[1],a[2]);
    }
    cout << a[x] << endl;
    return 0;
}
