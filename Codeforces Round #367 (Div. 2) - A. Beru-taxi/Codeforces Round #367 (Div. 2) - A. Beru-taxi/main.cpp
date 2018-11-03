//
//  main.cpp
//  Codeforces Round #367 (Div. 2) - A. Beru-taxi
//
//  Created by S M HEMEL on 3/23/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
    double my_position,my_position1,n,texi_position,texi_position1,speed,ans = 9999999;
    cin >> my_position >> my_position1;
    cin >> n;
    while (n--)
    {
        cin >> texi_position >> texi_position1 >> speed;
        double x = my_position-texi_position;
        double y = my_position1-texi_position1;
        double total_distance = sqrt((x*x) + (y*y));
        double temp = total_distance/speed;
        ans = min(temp,ans);
    }
    printf("%.20lf\n",ans);
    return 0;
}
