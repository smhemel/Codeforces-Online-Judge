//
//  main.cpp
//  Codeforces A. Beautiful Year
//
//  Created by S M HEMEL on 11/24/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(true)
    {
        n++;
        int a=n%10,b=n%100/10,c=n%1000/100,d=n/1000;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
        {
            cout<< n <<endl;
            break;
        }
    }
    return 0;
}
