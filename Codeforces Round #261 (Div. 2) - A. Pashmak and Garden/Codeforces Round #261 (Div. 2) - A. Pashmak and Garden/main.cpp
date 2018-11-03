//
//  main.cpp
//  Codeforces Round #261 (Div. 2) - A. Pashmak and Garden
//
//  Created by S M HEMEL on 2/17/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a==c)
    {
        int t = abs(b-d);
        printf("%d %d %d %d\n",a+t,b,c+t,d);
        return 0;
    }
    if(b==d)
    {
        int t = abs(a-c);
        printf("%d %d %d %d\n",a,b+t,c,d+t);
        return 0;
    }
    if(abs(a-c)==abs(b-d)){
        printf("%d %d %d %d\n",a,d,c,b);
        return 0;
    }
    else
        puts("-1");
    return 0;
}
