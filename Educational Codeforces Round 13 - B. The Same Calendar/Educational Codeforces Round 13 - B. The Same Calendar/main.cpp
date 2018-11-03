//
//  main.cpp
//  Educational Codeforces Round 13 - B. The Same Calendar
//
//  Created by S M HEMEL on 3/24/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <stdio.h>
using namespace std;
bool isLeapYear(int y)
{
    if ((y % 400) == 0) return true;
    if ((y % 100) == 0) return false;
    if ((y % 4) == 0) return true;
    return false;
}
int main()
{
    int k, l, year;
    cin >> year;
    int d = 0;
    k = isLeapYear(year);
    l = k;
    for (; ;){
        d = (d + 365 + l) % 7;
        year++;
        l = isLeapYear(year);
        if (d == 0 && k == l)
            return 0 * printf("%d\n", year);
    }
    return 0;
}
