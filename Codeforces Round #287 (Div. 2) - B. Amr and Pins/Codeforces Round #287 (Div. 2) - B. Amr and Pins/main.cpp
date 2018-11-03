//
//  main.cpp
//  Codeforces Round #287 (Div. 2) - B. Amr and Pins
//
//  Created by S M HEMEL on 4/6/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    double r, x1, y1, x2, y2;
    scanf("%lf %lf %lf %lf %lf",&r,&x1,&y1,&x2,&y2);
    double dis = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    int ans = ceil(dis/(2.0*r));
    cout << ans << endl;
    return 0;
}
