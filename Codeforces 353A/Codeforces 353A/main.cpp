//
//  main.cpp
//  Codeforces 353A
//
//  Created by S M HEMEL on 12/3/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=0,c=0,x,y;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> x >> y;
        a+=x;
        b+=y;
        c+=((x%2)!=(y%2));
    }
    if(a%2==0 && b%2==0)
        cout << 0;
    else if(c%2==0 && c>0)
        cout << 1;
    else
        cout << -1;
    return 0;
}
