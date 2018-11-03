//
//  main.cpp
//  Codeforces Beta Round #99 (Div. 2) A. Petr and Book
//
//  Created by S M HEMEL on 12/11/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,book[10];
    cin >> n;;
    for(int i=0; i<7; i++)
        cin >> book[i];
    int m = 0,i=0,count=0;
    while(m<n)
    {
        m+=book[i];
        i++;
        count = i;
        if(i==7) i=0;
    }
    cout <<count<<endl;
    return 0;
}
