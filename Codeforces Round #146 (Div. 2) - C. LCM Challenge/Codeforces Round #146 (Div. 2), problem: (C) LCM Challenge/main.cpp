//
//  main.cpp
//  Codeforces Round #146 (Div. 2), problem: (C) LCM Challenge
//
//  Created by S M HEMEL on 12/12/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    if (n<3)
        cout<<n<<endl;
    else if (n%2)
        cout<<(n-2)*(n-1)*n <<endl;
    else if(!(n%3))
        cout << (n-3)*(n-2)*(n-1)<<endl;
    else
        cout<<(n-3)*(n-1)*n<<endl;
    return 0;
}
