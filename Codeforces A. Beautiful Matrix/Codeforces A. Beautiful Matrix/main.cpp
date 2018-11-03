//
//  main.cpp
//  Codeforces A. Beautiful Matrix
//
//  Created by S M HEMEL on 11/23/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    int i,j,a;
    for(i=1;i<=5;++i)
        for(j=1;j<=5;++j)
        {
            cin>>a;
            if(a==1)
                cout<< (abs(3-i)+abs(3-j))<<endl;
        }
    return 0;
}
