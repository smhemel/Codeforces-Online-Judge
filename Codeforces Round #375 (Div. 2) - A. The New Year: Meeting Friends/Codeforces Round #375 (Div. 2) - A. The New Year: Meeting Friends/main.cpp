//
//  main.cpp
//  Codeforces Round #375 (Div. 2) - A. The New Year: Meeting Friends
//
//  Created by S M HEMEL on 3/11/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[5];
    while(scanf("%d %d %d",a,a+1,a+2)==3)
    {
        sort(a, a+3);
        int ans = a[2] - a[0];
        printf("%d\n", ans);
    }
    return 0;
}
