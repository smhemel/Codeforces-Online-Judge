//
//  main.cpp
//  Codeforces Beta Round #32 B. Borze
//
//  Created by S M HEMEL on 11/27/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string s;
int main()
{
    cin >> s;
    int n = (int) s.size();
    
    for(int i=0;i<n;i++)
        if( s[i] == '.' )
            printf( "0" );
        else
        {
            if( s[i+1] == '-' )
                printf( "2" );
            else
                printf( "1" );
            i++;
        }
    puts( "" );
}
