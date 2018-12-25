//
//  main.cpp
//  Codeforces Round #394 (Div. 2) - A
//
//  Created by S M HEMEL on 1/31/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int d = abs(a-b);
    if(a==0 && b==0)
        return 0 * puts("NO");
    cout << ((d<2) ? "YES" : "NO") <<endl;
    return 0;
}
