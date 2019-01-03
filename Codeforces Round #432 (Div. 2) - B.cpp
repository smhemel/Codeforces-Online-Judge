//
//  main.cpp
//  Codeforces Round #432 (Div. 2) - B
//
//  Created by S M HEMEL on 4/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    a = abs(a);
    b = abs(b);
    c = abs(c);
    d = abs(d);
    e = abs(e);
    f = abs(f);
    if(a==b && b==c && c==d && d==e && e==f)
        return 0 * puts("No");
    if(max(a,b)==max(c,d) && max(c,d)==max(e,f))
        return 0 * puts("Yes");
    puts("No");
    return 0;
}
