//
//  main.cpp
//  Codeforces Round #208 (Div. 2) - A. Dima and Continuous Line
//
//  Created by S M HEMEL on 3/31/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    long n,x=0,y=0;
    cin >> n;
    long a[n];
    for(int i=0;i<n;cin >> a[i],i++);
    for(int i=0; i<n; i++)
    {
        x=y=0;
        for(int j=i+2; j<n; j++)
            if ((a[j]>a[i] && a[j]>a[i+1]) || (a[j]<a[i] && a[j]<a[i+1]))
                x++;
            else
                y++;
        if(x && y)
            return 0 * puts("yes");
    }
    cout<<"no";
    return 0;
}
