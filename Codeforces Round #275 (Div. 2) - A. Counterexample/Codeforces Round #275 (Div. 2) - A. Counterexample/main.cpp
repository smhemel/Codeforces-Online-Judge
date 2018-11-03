//
//  main.cpp
//  Codeforces Round #275 (Div. 2) - A. Counterexample
//
//  Created by S M HEMEL on 2/20/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    long long int a,b;
    cin >> a >> b;
    if(a%2) a++;
    if(b-a<2)
        puts("-1");
    else
        cout << a <<" "<< a+1 <<" "<< a+2 << endl;
    return 0;
}
