//
//  main.cpp
//  Codeforces Round #406 (Div. 2) - A
//
//  Created by S M HEMEL on 3/23/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int x,b,y,d;
    cin >> x >> b >> y >> d;
    int t = 0;
    while(1) {
        t++;
        if(t>10000000 || b>10000000 || x>10000000)
            return 0 * puts("-1");
        if(b==d)
            return 0 * printf("%d\n",b);
        if(b<d) b = b+x;
        else d = d+y;
    }
    return 0;
}
