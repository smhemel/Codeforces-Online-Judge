//
//  main.cpp
//  Codeforces Round #125 (Div-2) A. Hexadecimal's theorem
//
//  Created by S M HEMEL on 1/22/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int f[1000000];
int main()
{
    int n;
    cin >> n;
    f[0] = 0,f[1] = 1;
    int j = 1;
    while (f[j] <= 1000000000)
    {
        f[j+1] = f[j]+f[j-1];
        j++;
    }
    int k = -1;
    while (n != f[++k]);
    if (k == 0)
        cout << "0 0 0" << endl;
    else if (k == 1)
        cout << "0 0 1" << endl;
    else if (k == 3)
        cout << "0 1 1" << endl;
    else
        cout << f[k - 4] << " " << f[k - 3] << " " << f[k - 1] << endl;
    return 0;
}
