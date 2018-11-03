//
//  main.cpp
//  Codeforces Round #176 (Div. 2) - A. IQ Test
//
//  Created by S M HEMEL on 3/29/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
char a[5][5];
int main()
{
    int m=0,p=0,k;
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
            cin >> a[i][j];
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
        {
            m=0,p=0;
            if(a[i][j]=='.') p++;
            else m++;
            if(a[i+1][j]=='.') p++;
            else m++;
            if(a[i+1][j+1]=='.') p++;
            else m++;
            if(a[i][j+1]=='.') p++;
            else m++;
            if((m>=3)||(p>=3))
                return 0 * puts("YES");
        }
    puts("NO");
    return 0;
}
